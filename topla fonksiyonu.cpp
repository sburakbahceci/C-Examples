#include "stdafx.h"
#include <stdlib.h>
#include <locale.h>

float bol(int a,int b)
{
	float g;
	g = ((float)a / b);
	return g;
}

int topla(int a,int b)
{
	int g;
	g = (a + b);
	return g;
}

int main()
{
	setlocale(LC_ALL, "turkish");
	int x, y, toplam;
	float bolum;
	printf("Birinci sayıyı giriniz: ");
	scanf_s("%d", &x);
	printf("İkinci sayıyı giriniz: ");
	scanf_s("%d", &y);
	toplam = topla(x, y);
	bolum = bol(x, y);
	printf("İki sayının toplamı = %d, bölümü = %f \n", toplam, bolum);
	system("pause");
	return 0;
}

