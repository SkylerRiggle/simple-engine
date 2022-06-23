#pragma once

#include "Core.h"

namespace Simple {
	class SIMPLE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();
}

