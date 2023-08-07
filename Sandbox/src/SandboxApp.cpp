#include <Haku.h>


class ExampleLayer : public Haku::Layer
{
public:
	ExampleLayer()
		: Layer("Example")
	{
	}

	void OnUpdate() override
	{
		HK_INFO("ExampleLayer::Update");
	}

	void OnEvent(Haku::Event& event) override
	{
		HK_TRACE("{0}", event);
	}
};

class Sandbox : public Haku::Application
{
public:
	Sandbox()
	{
		PushLayer(new ExampleLayer());
		PushOverlay(new Haku::ImGuiLayer());
	}

	~Sandbox()
	{

	}
};

Haku::Application* Haku::CreateApplication()
{
	return new Sandbox();
}