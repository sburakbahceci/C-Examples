// ConsoleApplication8.cpp : Konsol uygulamas� i�in giri� noktas�n� tan�mlar.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int X, Basamak = 0;

	cout << "Sayi girin: ";
	cin >> X;

	do
	{
		Basamak++;
		X = X / 10;
	} while (X);

	cout << Basamak << " basamaklidir.";

	getchar();
	getchar();

	return 0;
}