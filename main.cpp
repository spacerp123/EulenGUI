#include "includes.h"
#include "texteditor.h"
#include "includes.h"
#include "texteditor.h"
#include "imgui/imgui_internal.h"
#include <Windows.h>
#include <string>
#include <iostream>
#include <fstream>
#include <direct.h>
#include <random>
#include <regex>
#include <stdio.h>
#include <stdlib.h>
#include <d3d11.h>
#include "functional"
#include "filesystem"
#include <d3d12.h>
#include <Windows.h>
#include <string>
#include <iostream>
#include <Wininet.h>
#include <string>
#include <io.h>
bool repla(std::string& str, const std::string& from, const std::string& to) {
	size_t start_pos = str.find(from);
	if (start_pos == std::string::npos)
		return false;
	str.replace(start_pos, from.length(), to);
	return true;
}
char Dumppath[99999] = "C:/Eulen/dumper";
char Neger[99999] = "1";
char Resource[99999] = "";
extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

Present oPresent;
HWND window = NULL;
WNDPROC oWndProc;
ID3D11Device* pDevice = NULL;
ID3D11DeviceContext* pContext = NULL;
ID3D11RenderTargetView* mainRenderTargetView;

ImFont* normal;
void InitImGui()
{
	ImGui::CreateContext();
	ImGuiIO& io = ImGui::GetIO();
	io.ConfigFlags = ImGuiConfigFlags_NoMouseCursorChange;
	ImGui_ImplWin32_Init(window);
	ImGui_ImplDX11_Init(pDevice, pContext);

	io.Fonts->AddFontDefault();

	// merge in icons from Font Awesome
	ImFontConfig icons_config; icons_config.MergeMode = true; icons_config.PixelSnapH = true;




}
#define NOP 0x90
void nop_(PVOID address, int bytes) {
	DWORD d, ds;
	VirtualProtect(address, bytes, PAGE_EXECUTE_READWRITE, &d);
	memset(address, NOP, bytes); VirtualProtect(address, bytes, d, &ds);
}

LRESULT __stdcall WndProc(const HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {

	if (true && ImGui_ImplWin32_WndProcHandler(hWnd, uMsg, wParam, lParam))
		return true;

	return CallWindowProc(oWndProc, hWnd, uMsg, wParam, lParam);
}
static bool menu_show = false;
static int tabs = 0;
bool init = false;
static bool DrawWatermark = false;
static bool Streamproof = true;
static bool HideServerip = true;

static bool Perker1 = true;
static bool Perker2 = true;
static bool Perker3 = true;
static bool Perker4 = true;
static bool Perker5 = true;
static bool Perker6 = true;
static bool Perker7 = true;
static bool Perker8 = true;
static bool Perker9 = true;
static bool Perker10 = true;

static bool Perkera = true;
static bool Perkerb = true;
static bool Perkerc = true;
static bool Perkerd = true;
static bool Perkere = true;
static bool Perkerf = true;
static bool Perkerg = true;
static bool Perkerh = true;
static bool Perkeri = true;
static bool Perkerj = true;
static bool Perkerk = true;
static bool Perkerl = true;
static bool Perkerm = true;
static bool Perkern = true;

static bool A1 = true;
static bool A2 = true;
const char* Items[] = { "Crosshair 1", };
static int Item = NULL;


//================================================================

std::vector<const char*> ItemsVector = { "item 1","item 2","item 3" };
static int SelectedItem = NULL;
HRESULT __stdcall hkPresent(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags)
{

	if (!init)
	{
		if (SUCCEEDED(pSwapChain->GetDevice(__uuidof(ID3D11Device), (void**)&pDevice)))
		{
			pDevice->GetImmediateContext(&pContext);
			DXGI_SWAP_CHAIN_DESC sd;
			pSwapChain->GetDesc(&sd);
			window = sd.OutputWindow;
			ID3D11Texture2D* pBackBuffer;
			pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);
			pDevice->CreateRenderTargetView(pBackBuffer, NULL, &mainRenderTargetView);
			pBackBuffer->Release();
			oWndProc = (WNDPROC)SetWindowLongPtr(window, GWLP_WNDPROC, (LONG_PTR)WndProc);
			InitImGui();
			init = true;
		}

		else
			return oPresent(pSwapChain, SyncInterval, Flags);
	}


	if (GetAsyncKeyState(VK_INSERT) & 1) {
		menu_show = !menu_show;
		return 0;
	}

	if (menu_show) {

		ImGui::GetMouseCursor();
		ImGui::SetMouseCursor(ImGuiMouseCursor_Arrow);
		ImGui::GetIO().WantCaptureMouse = menu_show;
		ImGui::GetIO().MouseDrawCursor = menu_show;




		ImGuiStyle& style = ImGui::GetStyle();


		style.Alpha = 1.0f;
		style.WindowPadding = ImVec2(8, 8);
		style.WindowMinSize = ImVec2(32, 32);
		style.WindowRounding = 0.f;
		style.WindowTitleAlign = ImVec2(0.5f, 0.5f);
		style.FrameRounding = 0.0f;
		style.ItemSpacing = ImVec2(4, 9);
		style.ItemInnerSpacing = ImVec2(8, 8);
		style.TouchExtraPadding = ImVec2(0, 0);
		style.IndentSpacing = 21.0f;
		style.ColumnsMinSpacing = 3.0f;
		style.ScrollbarSize = 14.0f;
		style.ScrollbarRounding = 0.0f;
		style.GrabMinSize = 5.0f;
		style.GrabRounding = 0.0f;
		style.ButtonTextAlign = ImVec2(0.5f, 0.5f);
		style.DisplayWindowPadding = ImVec2(22, 22);
		style.DisplaySafeAreaPadding = ImVec2(4, 4);
		style.AntiAliasedLines = true;

		style.CurveTessellationTol = 1.25f;
		style.Colors[ImGuiCol_TitleBg] = ImColor(37, 37, 51, 255);
		style.Colors[ImGuiCol_TitleBgActive] = ImColor(37, 37, 51, 255);
		style.Colors[ImGuiCol_TitleBgCollapsed] = ImColor(37, 37, 51, 255);
		style.Colors[ImGuiCol_FrameBg] = ImColor(37, 37, 51, 255);
		style.Colors[ImGuiCol_FrameBgActive] = ImColor(37, 37, 51, 255);
		style.Colors[ImGuiCol_FrameBgHovered] = ImColor(37, 37, 51, 255);
		style.Colors[ImGuiCol_Button] = ImColor(28, 28, 39, 255);
		style.Colors[ImGuiCol_ButtonActive] = ImColor(78, 79, 85, 255);
		style.Colors[ImGuiCol_ButtonHovered] = ImColor(78, 79, 85, 255);
		style.Colors[ImGuiCol_Text] = ImColor(255, 255, 255, 255);
		style.Colors[ImGuiCol_WindowBg] = ImColor(28, 28, 39, 255);
		style.Colors[ImGuiCol_TabActive] = ImColor(28, 28, 39, 255);
		style.Colors[ImGuiCol_TabHovered] = ImColor(28, 28, 39, 255);
		style.Colors[ImGuiCol_TabUnfocused] = ImColor(28, 28, 39, 255);
		style.Colors[ImGuiCol_TabUnfocusedActive] = ImColor(28, 28, 39, 255);
		style.Colors[ImGuiCol_Tab] = ImColor(28, 28, 39, 255);
		ImGui_ImplDX11_NewFrame();
		ImGui_ImplWin32_NewFrame();
		ImGui::NewFrame();

		static bool menu_show = true;
		static TextEditor		 editor;


		ImGui::Begin("Eulen | Mod Menu ", &menu_show, ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoBringToFrontOnFocus | ImGuiWindowFlags_NoScrollbar);
		ImGui::SetWindowSize(ImVec2(750, 580), ImGuiCond_Always);
		ImGui::BeginTabBar("##Eulen | Mod Menu");
		if (ImGui::BeginTabItem("Myself"))
		{
			ImGui::Separator();
			if (ImGui::Button("Player"))
			{

				tabs = 1;


			}
			ImGui::SameLine();
			if (ImGui::Button("Outfits"))
			{

				tabs = 2;

			}
			ImGui::SameLine();
			if (ImGui::Button("Teleport"))
			{

				tabs = 3;

			}
			ImGui::SameLine();
			if (ImGui::Button("Noclip"))
			{

				tabs = 4;

			}

			if (tabs == 1)
			{
				ImGui::Text("Modifers");
				ImGui::Button("Heal");
				ImGui::SameLine();
				ImGui::Button("Armor");
				ImGui::SameLine();
				ImGui::Button("Revive");
				ImGui::SameLine();
				ImGui::Button("Enter Sole Session");
				ImGui::Checkbox("Refill In cover", &Perker1);
				ImGui::Checkbox("God Mode", &Perker2);
				ImGui::Checkbox("Semi God Mode", &Perker3);
				ImGui::Checkbox("Infinite", &Perker4);
				ImGui::Checkbox("Invisibility", &Perker5);
				ImGui::Checkbox("No Ragdoll", &Perker6);
				ImGui::Checkbox("Seatbelt", &Perker7);
				ImGui::Checkbox("No HS", &Perker8);
				ImGui::Checkbox("AnttiStun", &Perker9);
				ImGui::Checkbox("Infinite Combat roll", &Perker10);

			}


			if (tabs == 2)
			{



			}
			if (tabs == 3)
			{
				ImGui::Button("TP To Waypoint");
			}
			if (tabs == 4)
			{
				ImGui::Text("Noclip");
				ImGui::Checkbox("Enabled", &A1);
				ImGui::Text("Keybimd Noclip: F6");
				ImGui::SameLine();
				ImGui::Button("Unbind");
			}
			ImGui::EndTabItem();
		}
		if (ImGui::BeginTabItem("Online"))
		{
			ImGui::Separator();
			ImGui::EndTabItem();
		}
		if (ImGui::BeginTabItem("Weapon"))
		{
			ImGui::Separator();
			if (ImGui::Button("Spawn"))
			{

				tabs = 1;


			}
			ImGui::SameLine();
			if (ImGui::Button("Cheats"))
			{

				tabs = 2;

			}
			ImGui::SameLine();
			if (ImGui::Button("Aimbot"))
			{

				tabs = 3;

			}

			if (tabs == 1)
			{



			}


			if (tabs == 2)
			{



			}
			if (tabs == 3)
			{



			}
			ImGui::EndTabItem();
		}
		if (ImGui::BeginTabItem("Vechicle"))
		{
			ImGui::Separator();
			if (ImGui::Button("Main"))
			{

				tabs = 1;


			}
			ImGui::SameLine();
			if (ImGui::Button("Rader"))
			{

				tabs = 2;

			}
			ImGui::SameLine();
			if (ImGui::Button("Spawn"))
			{

				tabs = 3;

			}
			ImGui::SameLine();
			if (ImGui::Button("LS Customs"))
			{

				tabs = 4;

			}

			if (tabs == 1)
			{



			}
			if (tabs == 2)
			{



			}
			if (tabs == 3)
			{



			}
			if (tabs == 4)
			{



			}
			ImGui::EndTabItem();
		}
		if (ImGui::BeginTabItem("Visuals"))
		{
			ImGui::Separator();
			ImGui::Text("ESP Settings");
			static int Value = 245;
			ImGui::SliderInt("Distance", &Value, 0, 245);
			ImGui::Checkbox("Bone", &Perkera);
			ImGui::SameLine();
			ImGui::Checkbox("Box", &Perkerb);
			ImGui::Checkbox("Health", &Perkerc);
			ImGui::SameLine();
			ImGui::Checkbox("Name", &Perkerd);
			ImGui::SameLine();
			ImGui::Checkbox("Weapon", &Perkere);
			ImGui::Checkbox("Line", &Perkerf);
			ImGui::SameLine();
			ImGui::Checkbox("Crosshair", &Perkerg);
			ImGui::Combo("Crosshair style", &Item, Items, IM_ARRAYSIZE(Items));
			ImGui::Checkbox("Show Coords", &Perkerh);
			ImGui::Checkbox("Force Minimap", &Perkeri);
			ImGui::Checkbox("Force Blips", &Perkerj);
			ImGui::Text("Game Visuals", &Perkerk);
			ImGui::Checkbox("Force Third Peron", &Perkerl);
			ImGui::Checkbox("Disable", &Perkerm);
			ImGui::Checkbox("Disable Fog", &Perkern);
			ImGui::EndTabItem();
		}
		if (ImGui::BeginTabItem("Lua"))
		{
			ImGui::Separator();
			if (ImGui::Button("Executer"))
			{

				tabs = 1;


			}
			ImGui::SameLine();
			if (ImGui::Button("Modules"))
			{

				tabs = 2;

			}
			ImGui::SameLine();
			if (ImGui::Button("Menus"))
			{

				tabs = 3;

			}

			if (tabs == 1)
			{

				static TextEditor		 editor;

				editor.SetLanguageDefinition(TextEditor::LanguageDefinition::Lua());
				editor.SetShowWhitespaces(false);
				editor.SetPalette(TextEditor::GetFakePalette());
				editor.SetReadOnly(false);
				editor.Render("TextEditor", ImVec2(800, 310), false);
				static const char* current_resource = "_cfx_internal";
				if (ImGui::Button("Run"))
				{
				};
				ImGui::SameLine();
				if (ImGui::Button("Load File"))
				{
				}
				ImGui::Text("Repest Execution");
				ImGui::InputText("##DUMPPATH", Neger, IM_ARRAYSIZE(Dumppath));
				ImGui::SameLine();
				ImGui::Button("-");
				ImGui::SameLine();
				ImGui::Button("+");
				ImGui::SameLine();
				ImGui::Button("Do It!");


			}
			if (tabs == 2)
			{
				ImGui::Text("Dump Directory");
				ImGui::InputText("##DUMPPATH", Dumppath, IM_ARRAYSIZE(Dumppath));
				ImGui::SameLine();
				ImGui::Button("Save Resource");
			}
			if (tabs == 3)
			{
				ImGui::Text("Dopameme");
				ImGui::Button("Load");
				ImGui::Text("Deluxmeme");
				ImGui::Button("Load");
			}
			ImGui::EndTabItem();
		}
		if (ImGui::BeginTabItem("Resource"))
		{
			ImGui::Separator();
			ImGui::Text("Filter"); //Resource
			ImGui::InputText("##DUMPPATH", Resource, IM_ARRAYSIZE(Resource));
			ImGui::Text("_cfx_internal");
			ImGui::SameLine();
			ImGui::Button("Stop");
			ImGui::SameLine();
			ImGui::Text("Running");
			ImGui::EndTabItem();
		}
		if (ImGui::BeginTabItem("Config"))
		{
			ImGui::Separator();
			ImGui::Checkbox("Draw Watermark", &DrawWatermark);
			ImGui::Checkbox("Streamproof", &Streamproof);
			ImGui::Checkbox("Hide Server IP", &HideServerip);
			ImGui::Text("Keybind: B");
			ImGui::SameLine();
			ImGui::Button("Unbind");
			ImGui::EndTabItem();
		}
		if (DrawWatermark)
		{

		}
		if (Streamproof)
		{

		}
		if (HideServerip)
		{

		}

		ImGui::EndTabBar();
		ImGui::End();

		ImGui::Render();

		pContext->OMSetRenderTargets(1, &mainRenderTargetView, NULL);
		ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
	}
	return oPresent(pSwapChain, SyncInterval, Flags);
}

DWORD WINAPI MainThread(LPVOID lpReserved)
{
	bool init_hook = false;
	do
	{
		if (kiero::init(kiero::RenderType::D3D11) == kiero::Status::Success)
		{
			kiero::bind(8, (void**)&oPresent, hkPresent);
			init_hook = true;
		}
	} while (!init_hook);
	return TRUE;
}

BOOL WINAPI DllMain(HMODULE hMod, DWORD dwReason, LPVOID lpReserved)
{
	switch (dwReason)
	{
	case DLL_PROCESS_ATTACH:
		//fuckCreateHandler();
#pragma warning(disable : 4996) //_CRT_SECURE_NO_WARNINGS
		DisableThreadLibraryCalls(hMod);
		CreateThread(nullptr, 0, MainThread, hMod, 0, nullptr);
		break;
	case DLL_PROCESS_DETACH:
		kiero::shutdown();
		break;
	}
	return TRUE;
}
