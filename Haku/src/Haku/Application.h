#pragma once

#include "Core.h"
#include "Events/Event.h"

namespace Haku {

	class HAKU_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//defined in client
	Application* CreateApplication();
}