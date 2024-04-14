#include <iostream>
usign namespace std;
const char *nombre_archivo="c:\Olga.dat";
struct Estudiante{
	int Codigo;
	char nombres[50];
	char apellidos[50];
	int telefono;
	
};
void Crear();
main(){
	Crear();
	System("pause");
}
void Crear(){
	FILE* Olga = fopen(nombre_archivo,"a+b");
	char res;
	do{
		cout<<"Desea ingresar otro estudiante (s/n";
		cin>>res;
		
	}while(res==´s´ \\ res==´s´);
}
