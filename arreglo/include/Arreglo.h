#ifndef ARREGLO_H
#define ARREGLO_H


class Arreglo
{
    public:
        int *lista;
        int tam;
        void rellenar();
        int imprimir();

        void insertar(int x);
        void eliminar(int y);
        void vaciar();
        Arreglo(int);

};

#endif // ARREGLO_H
