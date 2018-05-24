#ifndef ARREGLO_H
#define ARREGLO_H


class Arreglo
{

        int tam;
        int *data;
    public:
        void rellenar();
        int imprimir();

        void insertarAtras(int);
        void insertar(int,int);
        void eliminar(int y);
        void vaciar();
        void menor();
        void mayor();
        void promedio();
        void ascendente();
        void descendiente();
        void siPrimo(int);
        void ePrimos();
        void menorPrimo();
        void mayorPrimo();
        Arreglo(int tam,int arr[]);
        ~Arreglo();

};

#endif // ARREGLO_H
