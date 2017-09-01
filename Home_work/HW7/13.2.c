#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "rus");
	  
		int a;  //четная строка
		scanf_s ("%d", &a);
		for (int k = 0; k < 2; ++k) {
			for (int i = 0; i < a; ++i) {
				int b = 4;
				while (b != 0) {
					for (int j = 0; j < a; ++j) {
						printf_s("*");
					}
					for (int k = 0; k < a; ++k) {
						printf_s(" ");
					}
					--b;
				}
				printf_s("\n");
			}
			for (int i = 0; i < a; ++i) {
				int b = 4;
				while (b != 0) {
					for (int j = 0; j < a; ++j) {
						printf_s(" ");
					}
					for (int k = 0; k < a; ++k) {
						printf_s("*");
					}
					--b;
				}
				printf_s("\n");
			}
		}
		return 0;  
	}  