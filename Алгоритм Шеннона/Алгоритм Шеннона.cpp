#define _CRT_SECURE_NO_WARNINGS
#include "stdafx.h"
#include <iostream>
#include "encode.h"

using namespace std;

int main() {
	setlocale(0,"Rus"); // �������� � ������� ������� ����
	const int MAX_PATH = 256; // ���������, ���������� ������������ ����� �����
	char *fn1 = new char[MAX_PATH]; // ������ ��� �������� ����� ����� �����
	cout << "������� ���� ��� ������: ";
	cin >> fn1;
	FILE *f = NULL;
	f = fopen(fn1, "r"); // ��������� ���� ��� ������
	if (f == NULL) {
		printf("���� �� ������: \"%s\"\n", fn1);
	} else {
		encode(fn1, f);
	}
	return 0;
}
