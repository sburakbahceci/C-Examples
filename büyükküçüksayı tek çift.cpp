// ConsoleApplication114.cpp: Konsol uygulamasının giriş noktasını tanımlar.
//

#include "stdafx.h"
#include <stdlib.h>
#include <locale.h>

int main()
{

	setlocale(LC_ALL, "Turkish");
	int a, b,m,n;
	printf("Büyük Sayı:");
	scanf_s("%d", &a);
	printf("Küçük Sayı :");
	scanf_s("%d", &b);
	m = a % 2;
	n = b % 2;
	if (m == 0 ) {
		printf(" Büyük Sayı Çifttir.");
	}
	else {
		printf("Büyük Sayı Tektir.");
	}
	if (n == 0) {
		printf("Küçük Sayı Çifttir.");
	}
	else {
		printf("Küçük Sayı Tektir.");
	}
	system("pause");
    return 0;
}

