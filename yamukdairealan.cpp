// ConsoleApplication52.cpp: Konsol uygulamasının giriş noktasını tanımlar.
//

#include "stdafx.h"
#include <stdlib.h>
#include <locale.h>
#include <iostream>;
#define PI 3.14
#define Dairealan(r) PI*r*r
#define Yamukalan(a,b,h) (a + b)*h/2.0
double z = 5;
using namespace std;



int main()
{
	setlocale(LC_ALL, "Turkish");
	float alani;
	int yaricap = 3;
	alani = Dairealan(yaricap);
	printf("Daire Alanı : %3.2f\n", alani);
	alani = Yamukalan(5, 10, 3);
	printf("Yamuk Alanı : %3.2f\n", alani);
	




	system("pause");
    return 0;
}

