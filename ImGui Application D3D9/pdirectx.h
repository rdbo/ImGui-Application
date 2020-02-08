#pragma once
#define DEFAULT_WIDTH  640
#define DEFAULT_HEIGHT 480
#define D3D_INTERVAL D3DPRESENT_INTERVAL_ONE //V-Sync On
//#define D3D_INTERVAL D3DPRESENT_INTERVAL_IMMEDIATE //V-Sync Off
#include "pch.h"
extern WNDCLASSEX wc;
extern HWND hwnd;
extern IDirect3D9* pD3D;
extern D3DPRESENT_PARAMETERS d3dpp;
extern IDirect3DDevice9* pDevice;

namespace D3D
{
	LRESULT CALLBACK WindowProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);
	void Init(HINSTANCE hInstance, LPCWSTR wndName);
	void DrawImGui();
	void ResetDevice();
	void Shutdown();
}