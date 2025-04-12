#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Prism {

	class PRISM_API Log
	{
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	public:
		static void Init();
		
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	};

}

// Core log macros
#define PR_CORE_TRACE(...)		::Prism::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define PR_CORE_INFO(...)		::Prism::Log::GetCoreLogger()->info(__VA_ARGS__)
#define PR_CORE_WARN(...)		::Prism::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define PR_CORE_ERROR(...)		::Prism::Log::GetCoreLogger()->error(__VA_ARGS__)
#define PR_CORE_FATAL(...)		::Prism::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Core log macros
#define PR_CLIENT_TRACE(...)	::Prism::Log::GetClientLogger()->trace(__VA_ARGS__)
#define PR_CLIENT_INFO(...)		::Prism::Log::GetClientLogger()->info(__VA_ARGS__)
#define PR_CLIENT_WARN(...)		::Prism::Log::GetClientLogger()->warn(__VA_ARGS__)
#define PR_CLIENT_ERROR(...)	::Prism::Log::GetClientLogger()->error(__VA_ARGS__)
#define PR_CLIENT_FATAL(...)	::Prism::Log::GetClientLogger()->fatal(__VA_ARGS__)