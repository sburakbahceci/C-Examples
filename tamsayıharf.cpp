// ConsoleApplication118.cpp: Konsol uygulamasının giriş noktasını tanımlar.
//
#include "stdafx.h"
#include <stdlib.h> 
#include  <stdio.h> 
int main()
{
	int sayi = 1, birler, onlar;

	while (sayi>100 || sayi<9)
	{

		printf("Sayiyi girin : "); scanf_s("%d", &sayi);

	}
	birler = sayi % 10;
	onlar = (sayi / 10);
	switch (onlar)
	{
	case 1: printf("on "); break;
	case 2: printf("yirmi "); break;
	case 3: printf("otuz "); break;
	case 4: printf("kirk "); break;
	case 5: printf("elli "); break; //rootla.net 
	case 6: printf("altmis "); break;
	case 7: printf("yetmis "); break;
	case 8: printf("seksen "); break;
	case 9: printf("doksan "); break;
	}
	switch (birler)
	{
	case 1: printf("bir "); break;
	case 2: printf("iki "); break;
	case 3: printf("uc "); break;
	case 4: printf("dort "); break;
	case 5: printf("bes "); break; //rootla.net 
	case 6: printf("alti "); break;
	case 7: printf("yedi "); break;
	case 8: printf("sekiz "); break;
	case 9: printf("dokuz "); break;
	}
	getchar();
	getchar();
	return 0;
}
