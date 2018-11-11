//Carlos Ivan Romero Hernandez RH18030

//Librerias necesarias
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string>
#include <graphics.h>
#include <stdio.h>

using namespace std;
//declaracion de funciones
void menu();
void addcliente();
void addauto();
void rmenu();
void renta();
void finalizar();
void grap();

int main() {
    system("color 8F4");//Color de fondo y letra
	menu();

	return 0;
}
//Funcion de menu principal
void menu(){

    system("cls");

	int n;

	cout<<"---- Menu Principal ----"<<endl;
	cout<<endl;
	cout<<"1. Mostrar vehiculos"<<endl;
	cout<<"2. Agregar Cliente"<<endl;
	cout<<"3. Agregar vehiculos"<<endl;
	cout<<"4. Salir"<<endl;
	cout<<endl;
	cout<<"ELiga una opcion: "; cin>>n;
	system("cls");

	switch(n){

		case 1:

			renta();

			break;

		case 2:

			addcliente();

				break;

		case 3:

			void addauto();

				break;

		case 4:

		    finalizar();
			break;

	}

}
//Funcion para Agregar un cliente
void addcliente(){

	string nombre, apll, dui, lic, cod;

	cout<<"--- Agregar un Cliente Nuevo ---";
	cout<<endl;
	cout<<"Nombre del cliente: "; cin>>nombre;
	cout<<"Apellidos del cliente: "; cin>>apll;
	cout<<"Numero de DUI: "; cin>>dui;
	cout<<"Numero de licencia: "; cin>>lic;
	cout<<"Codigo del cliente: "; cin>>cod;
	system("cls");
	cout<<"Cliente agregado con exito!"<<endl;



	rmenu();

}

//Funcion para agregar un auto
void addauto(){

		string modelo, year, chasis, codv;

	cout<<"--- Agregar un Vehiculo Nuevo ---";
	cout<<endl;
	cout<<"Modelo: "; cin>>modelo;
	cout<<"Year: "; cin>>year;
	cout<<"Numero de Chasis: "; cin>>chasis;
	cout<<"Codigo del vehiculo: "; cin>>codv;
    system("cls");
	cout<<"Vehiculo agregado con exito!"<<endl;
	rmenu();
}
//Funcion de para regresar al menu principal
void rmenu(){
	int a;

	cout<<"Desea regresar al menu principal?"<<endl;
	cout<<"1. Si"<<endl;
	cout<<"2. No"<<endl;
	cin>>a;

	switch(a){

		case 1:

			menu();

			break;

		case 2:
			system("cls");
		    	rmenu();

				break;
}
}
//Funcion de la ventana grafica para las imagenes
void grap(){

initwindow(900, 600, "Autos disponibles");//Se incia la ventana

readimagefile("1.jpg", 5, 5, 345, 190);
readimagefile("2.jpg", 460, 5, 870, 190);
readimagefile("3.jpg", 5, 200, 345, 390);
readimagefile("4.jpg", 460, 200, 870, 390);
readimagefile("5.jpg", 5, 400, 345, 600);
readimagefile("6.jpg", 460, 400, 870, 600);

getch();

closegraph();//Se cierra para continuar con el programa
}
//Funcion para la renta del vehiculo
void renta(){

int aut;
int precio;
int dias;
float total;

grap();//Se llama a la ventana grafica para mostrar las imagenes
do{
system("cls");
cout<<"Autos disponibles (Precio por dia): "<<endl;
cout<<"1. Audi A3 Dynamic ----- $90.00 "<<endl;
cout<<"2. Toyota Hilux 2018 ----- $80.00 "<<endl;
cout<<"3. Chevrolet Camaro 2018 ----- $110.00 "<<endl;
cout<<"4. Porsche 911 GT2 RS ----- $130.00 "<<endl;
cout<<"5. Mazda CX-3 ----- $90.00 "<<endl;
cout<<"6. Bmw x1 2018 ------ $105.00 "<<endl;

cout<<"Seleccione el auto que desea rentar: "; cin>>aut;

}while(aut>6||aut<1);

system("cls");

switch(aut){

        case 1:

            precio=90;
            cout<<"Cuantos dias desea rentar el vehiculo?"<<endl;
            cin>>dias;
            total=precio*dias;
            cout<<"El precio total es igual a: $"<<total;


            finalizar();

            break;

        case 2:

            precio=80;
            cout<<"Cuantos dias desea rentar el vehiculo?"<<endl;
            cin>>dias;
            total=precio*dias;
            cout<<"El precio total es igual a: $"<<total;


            finalizar();
            break;

        case 3:
            precio=110;
            cout<<"Cuantos dias desea rentar el vehiculo?"<<endl;
            cin>>dias;
            total=precio*dias;
            cout<<"El precio total es igual a: $"<<total;


            finalizar();
            break;

        case 4:
            precio=130;
            cout<<"Cuantos dias desea rentar el vehiculo?"<<endl;
            cin>>dias;
            total=precio*dias;
            cout<<"El precio total es igual a: $"<<total;


            finalizar();
            break;

        case 5:
            precio=90;
            cout<<"Cuantos dias desea rentar el vehiculo?"<<endl;
            cin>>dias;
            total=precio*dias;
            cout<<"El precio total es igual a: $"<<total;


            finalizar();
            break;

        case 6:
            precio=105;
            cout<<"Cuantos dias desea rentar el vehiculo?"<<endl;
            cin>>dias;
            total=precio*dias;
            cout<<"El precio total es igual a: $"<<total;

            finalizar();
            break;
}

}
//Funcion finalizar
void finalizar(){

cout<<endl;
system("pause");
system("cls");

cout<<"***********************************************"<<endl;
cout<<"**  GRACIAS POR UTILIZAR NUESTROS SERVICIOS  **"<<endl;
cout<<"***********************************************"<<endl;

}

