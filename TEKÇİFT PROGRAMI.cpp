// ConsoleApplication9.cpp : Konsol uygulamas� i�in giri� noktas�n� tan�mlar.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int S;

	cout << "Sayi girin: ";
	cin >> S;

	if (S % 2 == 0)
		cout << "Cift";

	else
		cout << "Tek";

	getchar();
	getchar();

	return 0;
}