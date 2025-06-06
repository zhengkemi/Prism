#pragma once

#include "Core.h"

namespace Prism {

	class PRISM_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();

}