#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y) {
    HANDLE ventana;
    ventana = GetStdHandle(STD_OUTPUT_HANDLE);

    COORD coordenadas;
    coordenadas.X = x;
    coordenadas.Y = y;

    SetConsoleCursorPosition(ventana, coordenadas);
}



void CentrarTexto(string text, int x, int y) {
    int longitud = text.length();
    gotoxy((x / 2) - (longitud / 2), y);
    cout << text;
}

void DIBUJAMARGEN(int sizeX = 50, int sizeY = 50) {
 

    gotoxy(0, 0);
    cout << char(201);
    for (int x = 1; x < sizeX; x++)
    {
        gotoxy(x, 0);
        cout << char(205);
        Sleep(2);
    }

    gotoxy(sizeX, 0);
    cout << char(187);
    for (int y = 1; y < sizeY; y++)
    {
        gotoxy(sizeX, y);
        cout << char(186);
        Sleep(2);
    }

    gotoxy(sizeX, sizeY);
    cout << char(188);
    for (int x = sizeX - 1; x >= 0; x--)
    {
        gotoxy(x, sizeY);
        cout << char(205);
        Sleep(2);
    }

    gotoxy(0, sizeY);
    cout << char(200);
    for (int y = sizeY - 1; y > 0; y--)
    {
        gotoxy(0, y);
        cout << char(186);
        Sleep(2);
    }

    gotoxy(sizeX, sizeY + 5);
}

int main()
{
    DIBUJAMARGEN(80, 24);

    CentrarTexto("ESTRUCUTURA DE DATOS Y ALGORITMOS II ", 80, 12);
    gotoxy(80, 25);
  
}