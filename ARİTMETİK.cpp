3#include "stdafx.h"
#include <stdlib.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL, "Turkish");
	int dizi[10];
	int toplam = 0;
	int i=0;

	while ( i < 10)
	{
		printf(" %d. sayıyı giriniz:", i + 1); scanf_s("%d", &dizi[i]);
		toplam = toplam + dizi[i];
		i++;
	}

	float sonuc = toplam / 10;
	printf("Aritmetik ortalama: %.2f", sonuc);




	system("pause");
    return 0;
}

