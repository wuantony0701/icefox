
#pragma once
//define
#define TRAY_NOTIFY 3001

//functions------------------------
//windows
static BOOL InitWindow( HINSTANCE hInstance, int nCmdShow );
void createCtrls(HWND&hwnd, WPARAM wParam);
BOOL CALLBACK WinProc( HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam );
void onTray(WPARAM wParam,LPARAM lParam);
//icon
void setIcon(bool disabled ,bool deL = false);
/*void setTips(const wchar_t *tips);*/

static bool firstTimeToAdd = true;
