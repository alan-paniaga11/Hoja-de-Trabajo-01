/*
HOJA DE TRABAJO #1

Ejercicio # 2:

        Ciclos y Arreglos 
 
Una empresa tiene diez almacenes y necesita crear un programa que lea las ventas mensuales de los diez almacenes, 
calcular la media de ventas y obtener un  listado de los almacenes cuyas ventas mensuales son superiores a la media.
*/

#include<iostream>
#include<windows.h>
#include<conio.h>
 
 
using namespace std;
 
main ()
{
 
int mat[10][1];
int numv,nump;
int acump;
int acumt=0;
int mattotal[10][1];
int cod[15];
int i, j;
int c;
int vn[10];
int vp[1];
 
for(i=0;i<10;i++)
{
 
    acumt=0;
 
    cout<<"Tienda # "<<i+1<<endl;
    do
    {
 
    for(j=0;j<5;j++)
    {
    cout<<"Ventas tienda #"<<j+1<<endl;
    cout<<"Ingrese el monto total vendido "<<"De la tienda: "<<cod[i]<<endl;
    cin>>mat[i][j];
    acumt+=mat[i][j];
 
    }
 
    cout<<"La teinda # "<<i+1<<" Vendio un total de "<<acumt<<endl;
 
    }while(c<10);
 
    }
 
 
cout<<endl<<"Matriz muestra total de cuanto vendieron las tiendas "<<endl;
 
for(i=0;i<4;i++)
{
    vn[i]=0;
    for(j=0;j<5;j++)
    {
    vn[i]=vn[i]+mat[i][j];
 
    }
 
    cout<<"La tienda # "<<i+1<<" Vendio "<<vn[i]<<endl;
    }
 
 
cout<<endl<<"Matriz muestra total de cuanto se vendio en Cada tienda "<<endl;
 
for(j=0;j<5;j++)
{
    vp[j]=0;
    for(i=0;i<4;i++)
    {
    vp[j]=vp[j]+mat[i][j];
 
    }
 
    cout<<"Tienda # "<<j+1<<" "<<" Vendio "<<vp[j]<<" un total de "<<endl;
}
 
    return 0;
}
