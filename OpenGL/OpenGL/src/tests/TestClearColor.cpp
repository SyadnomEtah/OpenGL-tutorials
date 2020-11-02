#include "TestClearColor.h"

#include "Renderer.h"
#include "imgui/imgui.h"

tests::TestClearColor::TestClearColor()
	:m_ClearColor{0.2f,0.3f,0.8f,1.0f}
{}

tests::TestClearColor::~TestClearColor()
{}

void tests::TestClearColor::OnUpdate(float deltaTime)
{}

void tests::TestClearColor::OnRender()
{
	GLCall(glClearColor(m_ClearColor[0], m_ClearColor[1], m_ClearColor[2], m_ClearColor[3]));
	GLCall(glClear(GL_COLOR_BUFFER_BIT));
}

void tests::TestClearColor::OnImGuiRender()
{
	ImGui::ColorEdit4("Clear Color", m_ClearColor);
}
