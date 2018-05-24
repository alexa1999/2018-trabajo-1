#include "Arreglo.h"
#include <iostream>
using namespace std;
Arreglo::Arreglo(int tam,int arr[])
{
    this->tam=tam;
    this->data=new int[tam];
    for(int i=0;i<=tam;i++)
    {
        data[i]=arr[i];
    }
}

int Arreglo::imprimir(){
    for(int i=0;i<tam;i++){
        cout<<data[i]<<" ";
    }
}
void Arreglo:: insertarAtras(int elem){
    int *nuevo= new int [tam+1];
    tam++;
    for(int i=0;i<tam-1;i++){
        nuevo[i]=data[i];
    }
    nuevo[tam-1]=elem;
    delete [] data;
    data=nuevo;
    //this->insertar(size,elem);
}
void Arreglo ::insertar(int pos,int elem)
{
    int *nuevo= new int [tam+1];
    tam++;
    for(int i=0;i<pos;i++){
        nuevo[i]=data[i];
    }

    nuevo[pos]=elem;
    for(int i=pos;i<tam;i++)
    {
        nuevo[i+1]=data[i];
    }
    delete[]data;
    data=nuevo;
}
void Arreglo:: eliminar(int pos)
{
    int *nuevo= new int [tam-1];
    tam--;
    for(int i=0;i<pos;i++){
        nuevo[i]=data[i];
    }
    for(int i=pos;i<tam;i++)
    {
        nuevo[i]=data[i+1];
    }
    delete[]data;
    data=nuevo;

}
void Arreglo::menor()
{
    int menor=data[0];
    for (int i=0; i<tam; i++){
        if (data[i]< menor){
            menor=data[i];
        }
    }
    cout<<menor;
}
void Arreglo::mayor()
{
    int mayor=data[0];
    for (int i=0; i<tam; i++){
        if (data[i]> mayor){
            mayor=data[i];
        }
    }
    cout<<mayor;
}
void Arreglo::promedio()
{
    int suma=0;
    for(int i=0;i<tam;i++)
    {
        suma=suma+data[i];
    }
    cout<<"el promedio es:"<<suma/2<<endl;
}
void Arreglo::ascendente()
{
    int i, j;
    for (i = tam - 1; i > 0; i--){
        for (j = 0; j < i; j++){
            if(data[j]> data[j+1]){
                data[tam]=data[j];
                data[j]=data[j+1];
                data[j+1]=data[tam];
            }

        }
    }
}
void Arreglo::descendiente()
{
    int i, j;
    for (i = tam - 1; i > 0; i--){
        for (j = 0; j < i; j++){
            if(data[j]< data[j+1]){
                data[tam]=data[j];
                data[j]=data[j+1];
                data[j+1]=data[tam];
            }

        }
    }
}
void Arreglo::siPrimo(int pos)
{
    int x=0;

    for(int i=1;i<data[pos]+1;i++){
        if(data[pos]%i==0){
            x++;
        }
    }
    if(x!=2){
        cout<<"no es primo";
    }else
       cout<<"es primo";
}
void Arreglo::ePrimos()
{


    for(int j=0;j<tam;j++)
    {

        int x=0;
        for(int i=1;i<data[j]+1;i++){
            if(data[j]%i==0){
                x++;
            }
        }
        if(x!=2){
            cout<<" ";
        }else
            cout<<data[j];
    }

}
void Arreglo::menorPrimo()
{
    int *nuevo= new int [tam];
    for(int j=0;j<tam;j++)
    {

        int x=0;
        for(int i=1;i<data[j]+1;i++){
            if(data[j]%i==0){
                x++;
            }
        }
        if(x!=2){
            cout<<" ";
        }else
            nuevo[j]=data[j];
    }
    int menor=nuevo[0];
    for (int i=0; i<tam; i++){
        if (nuevo[i]< menor){
            menor=nuevo[i];
        }
    }

    delete[]data;
    cout<<menor;
}
void Arreglo::mayorPrimo()
{
    int *nuevoi= new int [tam];
    for(int j=0;j<tam;j++)
    {

        int x=0;
        for(int i=1;i<data[j]+1;i++){
            if(data[j]%i==0){
                x++;
            }
        }
        if(x!=2){
            cout<<" ";
        }else
            nuevoi[j]=data[j];
    }
    int mayor=nuevoi[0];
    for (int i=0; i<tam; i++){
        if (nuevoi[i]> mayor){
            mayor=nuevoi[i];
        }
    }

    delete[]data;
    cout<<mayor;
}
void Arreglo::vaciar()
{
    int *nuevo= new int[0];
    delete [] data;
    data=nuevo;
    tam=0;
}
Arreglo::~Arreglo(){
    delete []data;
}
