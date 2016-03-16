// fonts.cpp : Defines the entry point for the console application.
//

#define FONT_8x8
#include "Font.h"
#include "FontRenderer.h"
#include "conio.h"

int main()
{
	uint8_t *f = font_8x8['a'];
	render_font<uint8_t, 8>(font_8x8, stdout, 'H');
	render_font<uint8_t, 8>(font_8x8, stdout, 'e');
	render_font<uint8_t, 8>(font_8x8, stdout, 'l');
	render_font<uint8_t, 8>(font_8x8, stdout, 'l');
	render_font<uint8_t, 8>(font_8x8, stdout, 'o');
	_getch();
    return 0;
}