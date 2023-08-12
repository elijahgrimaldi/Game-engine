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

	virtual void OnAttach() override;
	virtual void OnDetach() override;
	virtual void OnImGuiRender() override;

	void Begin();
	void End();
private:
	float m_Time = 0.0f;
};


}