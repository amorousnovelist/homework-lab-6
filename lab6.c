#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

int main()
{
	int N;
	scanf("%d", &N);
	if (N >= 1000) {
		printf("Ошибка: число должно быть меньше 1000\n");
		return 1;
	}
	int result = 1;
	int temp = N;
	if (N == 0) {
		result = 1;
	} else {
		while (temp > 0) {
			int digit = temp % 10;
			result *= digit;
			temp /= 10;
		}
	}
	if ((result > 99) && (result < 1000)) {
		printf("Произведение цифр числа %d равно %d и является трехзначным числом\n", N, result);
	} else {
		printf("Произведение цифр числа %d равно %d и НЕ является трехзначным числом\n", N, result);
	}
}