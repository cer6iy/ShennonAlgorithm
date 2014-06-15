#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <map>

using namespace std;

void sortBubble (double *P1, char *Alpha, int index) { // ���������� ���� �� �������
		int done=0;
	map<char, int> Fano;
	do {
		done =1;
		for (int i=0; i<index-1;i++) {
			if(P1[i]>P1[i+1]) {
				done=0;
				swap(P1[i],P1[1+i]);
				swap(Alpha[i],Alpha[1+i]);
			}
		}
	} while (!done);
}
void info( const char* fn1, FILE* f ) {
	map<char, int> letter; 
	ifstream input(fn1);         // ��������� ���� �� ������ �������
	while (!input.eof())         //���� �� ����� �����, ����
		if (input.peek() != EOF)//���� ��������� ������ �� ����� ����� �����
			letter[input.get()]++;//������� ��������������� �������
	int res=0;               //� ������� res ��������� ����� ���������� c������� � ������
		char c;
	while ((c = fgetc(f)) != EOF) {
		if (c != EOF) {
			res++;
		}
	}
	input.close();                      //��������� ������� �����
	int index=0;
	double* P1=new double[index];
	char* Alpha=new char[index];
	cout << "��� ������� ����������� � ������ ������� ���" << endl;
	for (map<char, int>::iterator it = letter.begin(); it != letter.end(); 
		it++) {  

			cout << it->first << '=' << it->second << endl;
			double chastota = ((double) (it->second)/res)*1.00;
			cout << "������� ������������� ������� " << it->first << " = ";
			printf("%1.7f", chastota);
			cout << endl;
			P1[index]=chastota;
			Alpha[index]=it->first;
			index++;
	}
	sortBubble (P1, Alpha, index);

}
