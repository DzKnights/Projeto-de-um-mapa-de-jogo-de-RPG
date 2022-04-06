#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


void gotoxy (int x, int y)
{

    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

}
int main (){
    //gotoxy(0,0);
    //printf("%c", 219);

    int i;
    int i2;
    ///*
    for (i = 0; i <= 10; i++) {
        gotoxy(0,i);
        printf("%c", 219);
    }
    for (i = 0; i <= 20; i++) {
        gotoxy(i,0);
        printf("%c", 219);
    }
    for (i = 0; i <= 10; i++) {
        gotoxy(20,i);
        printf("%c", 219);
    }
    for (i = 0; i <= 20; i++) {
        gotoxy(i,10);
        printf("%c", 219);
    }
    for (i = 1; i <= 19; i++) {
        for (i2 = 1; i2 <= 9; i2++) {
            gotoxy(i,i2);
            printf("%c", 176);
        }
    }
    //*/

    printf("\n\n");
    system ("pause");
    return 0;
}