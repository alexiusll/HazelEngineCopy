#pragma once

#ifdef HZ_PLATFORM_WINDOWS

// extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
	Hazel::Log::init();
	HZ_CORE_WARN("初始化 日志系统 ...");
	HZ_CLIENT_INFO("初始化 日志系统 ... var = {0}" , 5);

	printf("Hazel Engine\n");
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif