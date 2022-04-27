#include "text_color.h"

int main()
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;

	for (int i = 0; i < 3; i++) 
	{
		pos.Y = 5 + 2 * i;
		for (int j = 0; j < 3; j++)
		{
			pos.X = 5 + 6 * j;
			SetConsoleCursorPosition(handle, pos);
			SetConsoleTextAttribute(handle, text_color::LightGreen);
			cout << "true";
		}
	}
	return 0;

}
