workspace "Haku"
    architecture "x64"
    startproject "Sandbox"

    configurations
    {
        "Debug",
        "Release",
        "Dist"
    }

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

-- Include directories relative to root folder {solution directory}
IncludeDir = {}
IncludeDir["GLFW"] = "Haku/vendor/GLFW/include"
IncludeDir["Glad"] = "Haku/vendor/Glad/include"
IncludeDir["ImGui"] = "Haku/vendor/imgui"
IncludeDir["glm"] = "Haku/vendor/glm"


include "Haku/vendor/GLFW"
include "Haku/vendor/Glad"
include "Haku/vendor/ImGui"




project "Haku"
    location "Haku"
    kind "StaticLib"
    language "C++"
    cppdialect "C++20"
    staticruntime "on"

    targetdir ("bin/" .. outputdir .. "/%{prj.name}")
    objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

    pchheader "hkpch.h"
    pchsource "Haku/src/hkpch.cpp"

    files
    {
        "%{prj.name}/src/**.h",
        "%{prj.name}/src/**.cpp",
        "%{prj.name}/vendor/glm/glm/**.hpp",
        "%{prj.name}/vendor/glm/glm/**.inl",
    }

    defines
    {
        "_CRT_SECURE_NO_WARNINGS"
    }

    includedirs
    {
        "%{prj.name}/src",
        "%{prj.name}/vendor/spdlog/include",
        "%{IncludeDir.GLFW}",
        "%{IncludeDir.Glad}",
        "%{IncludeDir.ImGui}",
        "%{IncludeDir.glm }"

    }
    links
    {
        "GLFW",
        "Glad",
        "opengl32.lib",
        "ImGui"
    }
    
    filter "system:windows"
        systemversion "latest"

        defines
        {
            "HK_PLATFORM_WINDOWS",
            "HK_BUILD_DLL",
            "GLFW_INCLUDE_NONE"
        }

    filter "configurations:Debug"
        defines "HK_DEBUG"
        runtime "Debug"
        symbols "on"

    filter "configurations:Release"
        defines "HK_RELEASE"
        runtime "Release"
        optimize "on"

    filter "configurations:Dist"
        defines "HK_DIST"
        runtime "Release"
        optimize "on"

project "Sandbox"
    location "Sandbox"
    kind "ConsoleApp"
    language "C++"
    cppdialect "C++20"
    staticruntime "on"

    targetdir ("bin/" .. outputdir .. "/%{prj.name}")
    objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

    files
    {
        "%{prj.name}/src/**.h",
        "%{prj.name}/src/**.cpp",
    }

    includedirs
    {
        "Haku/vendor/spdlog/include",
        "Haku/src",
        "%{IncludeDir.glm}"
    }
    
    links
    {   
        "Haku"
    }
    
    filter "system:windows"
        systemversion "latest"

        links
        {
            "GLFW",
            "opengl32.lib"
        }
        defines
        {
            "HK_PLATFORM_WINDOWS"
        }

    filter "configurations:Debug"
        defines "HK_DEBUG"
        runtime "Debug"
        symbols "on"

    filter "configurations:Release"
        defines "HK_RELEASE"
        runtime "Release"
        optimize "on"

    filter "configurations:Dist"
        defines "HK_DIST"
        runtime "Release"
        optimize "on"

        
