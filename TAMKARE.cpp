// ConsoleApplication6.cpp : Konsol uygulamas� i�in giri� noktas�n� tan�mlar.
//


#include "stdafx.h"
#include <stdlib.h>





int main() {

	int sayi, kontrol;

	printf("Sayi Giriniz: ");
	scanf_s("%d", &sayi);

	for (int i = 0; i <= sayi; i++) {

		kontrol = i * i;

		if (kontrol == sayi) {
			printf("Girilen sayi tam karedir (%d*%d= %d)", i, i, kontrol);
			break;
		}

		if (kontrol > sayi) {  //Kontrol say�dan b�y�kse i�lemciyi yormamak i�in d�ng�y� durduruyoruz
			printf("Girilen Sayi tam kare degildir");
			break;
		}

	}

	system("pause");
	
	return 0;
}