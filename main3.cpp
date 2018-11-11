#include <graphics.h>
#include <conio.h>
#include <iostream>

using namespace std;

void grap(){

int gdriver=DETECT, gmode;
initgraph(&gdriver,&gmode,"C:\\BORLANDC\\BGI"); //Inicia el Modo Gráfico.

initwindow(900, 600, "Read");

readimagefile("1.jpg", 5, 5, 345, 190);
readimagefile("2.jpg", 460, 5, 870, 190);
readimagefile("3.jpg", 5, 200, 345, 390);
readimagefile("4.jpg", 460, 200, 870, 390);
readimagefile("5.jpg", 5, 400, 345, 600);
readimagefile("6.jpg", 460, 400, 870, 600);

getch();

closegraph();
}

int main(){

cout<<"presione para ver los vehiculos";

grap();
}


