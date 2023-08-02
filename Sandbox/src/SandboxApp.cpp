#include <Haku.h>

class Sandbox : public Haku::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Haku::Application* Haku::CreateApplication()
{
	return new Sandbox();
}