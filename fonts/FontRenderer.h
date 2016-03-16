#pragma once

#include "stdlib.h"
#include "stdio.h"

template<typename T, int W>
void render_font(T font[95][W], FILE *fp, char c)
{
	system("cls");
	_sleep(50);
	T *f = font[c-32];
	for (int i = 0; i < W; i++)
	{
		for (int j = 0; j < sizeof(T) * 8; j++)
		{
			if (f[j] & (1 << (sizeof(T) * 8 - 1 - i)))
				fprintf(fp, "*");
			else
				fprintf(fp, " ");
		}
		fprintf(fp, "\n");
	}
	_sleep(200);

}