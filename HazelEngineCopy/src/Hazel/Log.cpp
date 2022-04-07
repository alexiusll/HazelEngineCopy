#include "Log.h"

/*
* 
* ��־ϵͳ���룬�ο�: https://github.com/gabime/spdlog
* 
*/

namespace Hazel {
	std::shared_ptr<spdlog::logger> Log::s_CoreLogger;
	std::shared_ptr<spdlog::logger> Log::s_ClientLogger;

	Hazel::Log::Log()
	{
	}

	Hazel::Log::~Log()
	{
	}
	void Log::init()
	{
		// ��ʼ����־�����ʽ
		// �ο� https://github.com/gabime/spdlog/wiki/3.-Custom-formatting
		spdlog::set_pattern("%^[%T] %n: %v%$");
		// spdlog::set_pattern("[%H:%M:%S %z] [%n] [%^---%L---%$] [thread %t] %v"); 

		s_CoreLogger = spdlog::stderr_color_mt("HAZEL");
		s_CoreLogger->set_level(spdlog::level::trace); // ��¼���е���Ϣ

		s_ClientLogger = spdlog::stderr_color_mt("APP");
		s_ClientLogger->set_level(spdlog::level::trace); // ��¼���е���Ϣ
;	}
}