#pragma once

#include "Core.h"

namespace Dhage
{
	class DHAGE_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};
	// To be difined in CLIENT
	Application* CreateApplication();
}


