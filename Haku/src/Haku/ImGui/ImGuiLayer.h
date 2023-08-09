#pragma once

#include "Haku/Layer.h"
#include "Haku/Events/MouseEvent.h"
#include "Haku/Events/KeyEvent.h"
#include "Haku/Events/ApplicationEvent.h"
namespace Haku
{
class HAKU_API ImGuiLayer:public Layer {

public:
	ImGuiLayer();
	~ImGuiLayer();

	void OnAttach();
	void OnDetach();
	void OnUpdate();
	void OnEvent(Event& event);
private:
	bool OnWindowResizeEvent(WindowResizeEvent& e);
	bool OnKeyPressedEvent(KeyPressedEvent& e);
	bool OnKeyReleasedEvent(KeyReleasedEvent& e);
	bool OnMouseButtonPressedEvent(MouseButtonPressedEvent& e);
	bool OnMouseButtonReleasedEvent(MouseButtonReleasedEvent& e);
	bool OnMouseMovedEvent(MouseMovedEvent& e);
	bool OnMouseScrolledEvent(MouseScrolledEvent& e);
	bool OnKeyTypedEvent(KeyTypedEvent& e);

private:
	float m_Time = 0.0f;
};


}