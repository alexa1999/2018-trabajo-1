#include <iostream>
#include<Arreglo.h>
using namespace std;

int main()
{
    int arr[]={5,8,7};
    Arreglo a(3,arr);
//    lista.rellenar();

//    a.insertarAtras(1);
//    a.insertar(0,10);
//    a.insertar(4,20);
    cout<<endl;
//    a.eliminar(1);
//    a.eliminar(0);
//a.descendiente(3);
    a.menorPrimo();
    //a.imprimir();
    cout<<endl;
//    a.menor(3);


//    cout<<endl;
//    a.vaciar();
    return 0;
}
