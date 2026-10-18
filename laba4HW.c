#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_CTYPE, "RUS");
	int x, y, result;
	printf("Введите две переменные через пробел: ");
	scanf("%d %d", &x, &y);
	result = (x % 2 != 0) ^ (y % 2 != 0);
	printf("Сирена активировна (1 - да, 0 - нет): %d\n", result);
}