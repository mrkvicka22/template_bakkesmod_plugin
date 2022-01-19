#include "pch.h"
#include "Rank Hider.h"

/* Plugin Settings Window code here
std::string Rank Hider::GetPluginName() {
	return "Rank Hider";
}

void Rank Hider::SetImGuiContext(uintptr_t ctx) {
	ImGui::SetCurrentContext(reinterpret_cast<ImGuiContext*>(ctx));
}

// Render the plugin settings here
// This will show up in bakkesmod when the plugin is loaded at
//  f2 -> plugins -> Rank Hider
void Rank Hider::RenderSettings() {
	ImGui::TextUnformatted("Rank Hider plugin settings");
}
*/

/*
// Do ImGui rendering here
void Rank Hider::Render()
{
	if (!ImGui::Begin(menuTitle_.c_str(), &isWindowOpen_, ImGuiWindowFlags_None))
	{
		// Early out if the window is collapsed, as an optimization.
		ImGui::End();
		return;
	}

	ImGui::End();

	if (!isWindowOpen_)
	{
		cvarManager->executeCommand("togglemenu " + GetMenuName());
	}
}

// Name of the menu that is used to toggle the window.
std::string Rank Hider::GetMenuName()
{
	return "rank hider";
}

// Title to give the menu
std::string Rank Hider::GetMenuTitle()
{
	return menuTitle_;
}

// Don't call this yourself, BM will call this function with a pointer to the current ImGui context
void Rank Hider::SetImGuiContext(uintptr_t ctx)
{
	ImGui::SetCurrentContext(reinterpret_cast<ImGuiContext*>(ctx));
}

// Should events such as mouse clicks/key inputs be blocked so they won't reach the game
bool Rank Hider::ShouldBlockInput()
{
	return ImGui::GetIO().WantCaptureMouse || ImGui::GetIO().WantCaptureKeyboard;
}

// Return true if window should be interactive
bool Rank Hider::IsActiveOverlay()
{
	return true;
}

// Called when window is opened
void Rank Hider::OnOpen()
{
	isWindowOpen_ = true;
}

// Called when window is closed
void Rank Hider::OnClose()
{
	isWindowOpen_ = false;
}
*/
