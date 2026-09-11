#include <stdio.h>
#include <locale.h>
void main()
{
	system("pause");
	setlocale(LC_CTYPE, "RUS");
	puts("Нажмите Enter для продолжения программы");
	getchar(); 
	puts("Продолжение программы");
	return 0;
}