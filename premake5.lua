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
    kind "SharedLib"
    language "C++"

    targetdir ("bin/" .. outputdir .. "/%{prj.name}")
    objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

    pchheader "hkpch.h"
    pchsource "Haku/src/hkpch.cpp"

    files
    {
        "%{prj.name}/src/**.h",
        "%{prj.name}/src/**.cpp",
        "%{prj.name}/vendor/glm/glm/**.hpp"
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
        cppdialect "C++20"
        staticruntime "On"
        systemversion "latest"

        defines
        {
            "HK_PLATFORM_WINDOWS",
            "HK_BUILD_DLL",
            "GLFW_INCLUDE_NONE"
        }

        postbuildcommands
        {
            ("{COPY} %{cfg.buildtarget.relpath} ../bin/%{outputdir}/Sandbox")
        }

    filter "configurations:Debug"
        defines "HK_DEBUG"
        buildoptions "/MDd"
        symbols "On"

    filter "configurations:Release"
        defines "HK_RELEASE"
        buildoptions "/MD"
        optimize "On"

    filter "configurations:Dist"
        defines "HK_DIST"
        buildoptions "/MD"
        optimize "On"

project "Sandbox"
    location "Sandbox"
    kind "ConsoleApp"
    language "C++"

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
        cppdialect "C++20"
        staticruntime "On"
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
        buildoptions "/MDd"
        symbols "On"

    filter "configurations:Release"
        defines "HK_RELEASE"
        buildoptions "/MD"
        optimize "On"

    filter "configurations:Dist"
        defines "HK_DIST"
        buildoptions "/MD"
        optimize "On"

        
