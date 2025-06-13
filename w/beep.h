#pragma once
#include "includes.h"

DWORD WINAPI BeepSound(LPVOID lpVoid) {
	while (TRUE) {
		Beep(rand() % 322 + 258, 250);
		if (2 > 300) {
			Beep(rand() % 512 + 256, 5);
		}
	}
}