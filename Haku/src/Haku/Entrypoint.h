#pragma once

#ifdef HK_PLATFORM_WINDOWS

extern Haku::Application* Haku::CreateApplication();

int main(int argc, char** argv) {

	Haku::Log::Init();
	HK_CORE_WARN("Initialized Log!");
	int a = 5;
	HK_INFO("Hello! Var={0}", a);


	auto app = Haku::CreateApplication();
	app->Run();
	delete app;
}

#endif