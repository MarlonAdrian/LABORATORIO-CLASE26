#include <iostream>
#include <fstream>
using namespace std;

void Archivo();
void ingrese( double arreglo[], int t);
void imprimir(double Arreglo[], int t);
void ordenar_seleccion(double Arreglo[], int t);
void busqueda(double Arreglo[], int t);

using namespace std;


int main()
{
ofstream ordenamiento;
int tamanio;
double arreglo[100];
//esto 
int primero=0;
int ultimo = 7-1;
int medio;
int n;
int contador=0;
//aqui

ordenamiento.open("ordenamiento", ios::out);
if(ordenamiento.is_open())
{
  cout << "Ingrese el tamaño del arreglo: ";
  cin >> tamanio;
  ingrese(arreglo, tamanio);
  ordenamiento << "Arreglo original: ";
  for(int x = 0; x < tamanio; x++)
  {
    ordenamiento  << arreglo[x] << " ";
    }
  ordenamiento << '\n';

cout << "Arreglo original: "; 
imprimir(arreglo, tamanio);
cout << "Arreglo ordenado: ";
ordenar_seleccion(arreglo, tamanio);
imprimir(arreglo, tamanio);

ordenamiento << "Arreglo ordenado: ";

for(int x = 0; x < tamanio; x++)
 { 
  ordenamiento << arreglo[x] << " ";
 }

 cout << "Elemento a buscar: ";
 cin >> n;
busqueda(arreglo,tamanio);
ordenamiento << "\nElemento a buscar: " << n;


//hasta aqui
}

else
  {
  cout << "El archivo no abrio exitosamente"<< endl;
}




ordenamiento.close();
return 0;
}




void ingrese(double arreglo[], int t)
{
for(int i = 0; i < t; i++)
{cout << "Ingrese un número: ";
cin >> arreglo[i]; 
}
}


void imprimir(double Arreglo[], int t)
{
  for(int i = 0; i < t; i++)
  {
    cout << Arreglo[i] << "  "; 
  }
cout << endl;
}


void ordenar_seleccion(double Arreglo[], int t)
{ 
  int i, j, aux, min;
for(i = 0; i < t; i++)
{
  min = i;
  for(j = i + 1; j < t; j++)
  {
    if(Arreglo[j] < Arreglo[min])
    {
      min = j;
    }
  }
  aux = Arreglo[i];
  Arreglo[i] = Arreglo[min];
  Arreglo[min] = aux;
 }
}


void busqueda(double Arreglo[], int t){
    int arreglo[]={};
    int primero=0;
    int ultimo = 7-1;
    int medio;
    int n;
    int contador=0;
    while (arreglo[primero]!=n && contador < 7)
    {

        medio = primero + ((n-arreglo[primero])*(ultimo -primero))/(arreglo[ultimo]-arreglo[primero]);

        if(arreglo[medio]<n)
            ultimo =medio+1;
        else if (arreglo[medio]>n)
            ultimo = medio -1;
        else
            primero = medio;
        contador++;

        break;
    }

    if (arreglo[primero]==n)
    {
        cout<<"ELEMENTO ENCONTRADO";
    }
    else
    {
         cout<<"ELEMENTO NO ENCONTRADO";
    }

}
