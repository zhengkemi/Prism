#pragma once

#ifdef PR_PLATFORM_WINDOWS

extern Prism::Application* Prism::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Prism::CreateApplication();
	app->Run();
	delete app;
}

#endif