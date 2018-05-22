#include <iostream>
#include<Arreglo.h>
using namespace std;

int main()
{
    Arreglo lista(5);
    lista.rellenar();
    cout<<endl;
    lista.imprimir();
    lista.eliminar(3);
    cout<<endl;
    lista.imprimir();
    cout<<endl;
    lista.insertar(5);
    cout<<endl;
    lista.vaciar();
    return 0;
}
