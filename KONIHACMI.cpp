// ConsoleApplication99.cpp: Konsol uygulamasının giriş noktasını tanımlar.
//

#include "stdafx.h"
#include <stdlib.h>
#include <stdio.h>
#define PI 3
#define KoniHacmi(r,h) PI*r*r*h/3

int main()
{
	int r,h,sonuc;
	printf("Alt Taban Yarıçapı: ");
	scanf_s("%d", &r);
	printf("Yükseklik :");
	scanf_s("%d", &h);
	sonuc = KoniHacmi(r, h);
	printf("KONI HACMI : %d", sonuc);

	system("pause");
    return 0;
}

