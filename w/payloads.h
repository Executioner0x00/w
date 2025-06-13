#pragma once
#include "includes.h"

static int width = GetSystemMetrics(SM_CXSCREEN);
static int height = GetSystemMetrics(SM_CYSCREEN);

DWORD WINAPI ColorBrush(LPVOID lpVoid) {
	HDC hdc = GetDC(NULL);
	while (TRUE) {
		hdc = GetDC(NULL);
		HBRUSH hBrush = CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255));
		SelectObject(hdc, hBrush);

		BitBlt(hdc, 1, 1, width, height, hdc, 2, 2, 0x922222);
		ReleaseDC(NULL, hdc);
		DeleteObject(hBrush);
	}
}
