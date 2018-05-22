#include "Arreglo.h"
#include <iostream>
using namespace std;
Arreglo::Arreglo(int tam)
{
    lista=new int[tam];
}

void Arreglo::rellenar(){
        for(int i=0;i<tam;i++){
            cin>>lista[i];
        }
}
int Arreglo::imprimir(){
    for(int i=0;i<tam;i++){
        cout<<lista[i];
    }
}
void Arreglo:: insertar(int x){
        tam++;
        lista[tam-1]=x;

}
void Arreglo:: eliminar(int y)
{
        for (int i=y;i<=tam;i++)
        {
            lista[i]=lista[i++];
        }
        tam--;
}
void Arreglo:: vaciar(){
    delete[]lista;

}
