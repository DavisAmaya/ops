#include <iostream>
#include <windows.h>
#include "registro.h"

using namespace std;

int main(){
	system("mode con: cols=80 lines=25");
	system("COLOR 30");
	dibujarCuadro(1,1,78,24);//grande
	dibujarCuadro(2,2,77,4);//titulo
	gotoxy(16,3); cout << "  NATALIDAD DE HOSPITAL BENIGI   ";
	vacio();
	menu();
	getch();
	return 0;
}

