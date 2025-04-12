#pragma once

#ifdef PR_PLATFORM_WINDOWS

extern Prism::Application* Prism::CreateApplication();

int main(int argc, char** argv)
{
	Prism::Log::Init();
	PR_CORE_WARN("Initialized Log!");
	int a = 5;
	PR_CORE_INFO("Hello! Var={0}", a);

	auto app = Prism::CreateApplication();
	app->Run();
	delete app;
}

#endif