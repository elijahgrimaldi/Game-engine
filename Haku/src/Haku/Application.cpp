#include "Application.h"

#include "Haku/Events/ApplicationEvent.h"
#include "Haku/Log.h"
namespace Haku {
	Application::Application()
	{
	}
	Application::~Application()
	{
	}
	void Application::Run() {
		WindowResizeEvent e(1280, 720);
		HK_CORE_WARN(e);

		while (true);
	}
}