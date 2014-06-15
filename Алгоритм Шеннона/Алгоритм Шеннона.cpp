#define _CRT_SECURE_NO_WARNINGS
#include "stdafx.h"
#include <iostream>
#include "encode.h"

using namespace std;

int main() {
	setlocale(0,"Rus"); // включаем в консоли русский язык
	const int MAX_PATH = 256; // константа, содержащая максимальную длину имени
	char *fn1 = new char[MAX_PATH]; // строка для хранения имени файла ввода
	cout << "Введите файл для чтения: ";
	cin >> fn1;
	FILE *f = NULL;
	f = fopen(fn1, "r"); // открываем файл для чтения
	if (f == NULL) {
		printf("Файл не найден: \"%s\"\n", fn1);
	} else {
		encode(fn1, f);
	}
	return 0;
}
