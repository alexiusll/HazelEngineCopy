#pragma once

#ifdef HZ_PLATFORM_WINDOWS

// extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
	Hazel::Log::init();
	HZ_CORE_WARN("��ʼ�� ��־ϵͳ ...");
	HZ_CLIENT_INFO("��ʼ�� ��־ϵͳ ... var = {0}" , 5);

	printf("Hazel Engine\n");
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif