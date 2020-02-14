// ConsoleApplication6.cpp : Konsol uygulamasý için giriþ noktasýný tanýmlar.
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

		if (kontrol > sayi) {  //Kontrol sayýdan büyükse iþlemciyi yormamak için döngüyü durduruyoruz
			printf("Girilen Sayi tam kare degildir");
			break;
		}

	}

	system("pause");
	
	return 0;
}