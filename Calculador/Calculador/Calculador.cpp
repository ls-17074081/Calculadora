// Calculador.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include "Calculos.h"
void gotoxy(int x, int y)
{
	HANDLE hStdout;
	COORD pos;
	pos.X = x - 1;
	pos.Y = y - 1;
	hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
	if (hStdout == INVALID_HANDLE_VALUE)
		return;
	SetConsoleCursorPosition(hStdout, pos);
}

using namespace std;
int main()
{
	double x = 0.0, y = 0.0, result = 0.0;
	char oper = '+';
	system ("color B3");
	gotoxy(45, 10);
	cout << "+++++++++++++++++++++++++++++\n\n";
	gotoxy(45, 11);
	cout << "Tu Primer Calculadora en  C++ " << endl << endl;
	gotoxy(45, 12);
	cout << "Ingresa la Operacion eon el formato :\n ";
	gotoxy(45, 13);
		cout<< "a+b | a-b | a*b | a/b \n";

	Calculos c;
	while (true) {
		gotoxy(45, 14);
		cin >> x >> oper >> y;
		if (oper == '/' && y == 0) {
			gotoxy(45, 15);
			system("color B4");
			cout << "la divicion entre 0 no es valida\n";
			continue;
		}
		else{
		result = c.Calculo(x, oper, y);
		system("color B0");
		gotoxy(45, 15);
			cout   << "El resultado es : " << result << endl;
		}
	}
	return 0;

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
