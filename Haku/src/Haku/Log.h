#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace Haku {

	class HAKU_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}


// Core log macros
#define HK_CORE_TRACE(...)    ::Haku::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define HK_CORE_INFO(...)     ::Haku::Log::GetCoreLogger()->info(__VA_ARGS__)
#define HK_CORE_WARN(...)     ::Haku::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define HK_CORE_ERROR(...)    ::Haku::Log::GetCoreLogger()->error(__VA_ARGS__)
#define HK_CORE_FATAL(...)    ::Haku::Log::GetCoreLogger()->critical(__VA_ARGS__)

// Client log macros
#define HK_TRACE(...)	      ::Haku::Log::GetClientLogger()->trace(__VA_ARGS__)
#define HK_INFO(...)	      ::Haku::Log::GetClientLogger()->info(__VA_ARGS__)
#define HK_WARN(...)	      ::Haku::Log::GetClientLogger()->warn(__VA_ARGS__)
#define HK_ERROR(...)	      ::Haku::Log::GetClientLogger()->error(__VA_ARGS__)
#define HK_FATAL(...)	      ::Haku::Log::GetClientLogger()->critical(__VA_ARGS__)
