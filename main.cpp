#include <iostream>

using namespace std;
int suma(const int arr[],const int tam)// *arr es lo mismo
{
    int res=0;
    for(int i=0;i<tam;i++)
    {
        res+=arr[i];
    }
    return res;
}
int sumap(const int *arr,const int tam)// *arr es lo mismo
{
    int res=0;
//    for(int i=0;i<tam;i++)
//    {
//        res+=*(arr+i); //=*arr++
//    }
//    return res; //es lo mismo
    for(int i=0;i<tam;i++,arr++)
    {
        res+=*arr;
    }
    return res;
}
int inv(int *p1,int *p2)
{
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
}

void invertir(int *arr,const int tam)
{
    int *ptr=arr+tam-1 ;//imprime 6
    for(;ptr>arr;ptr--,arr++){
        int temp=*ptr;
        *ptr=*arr;
        *arr=temp;

    }
}
void printi(int *arr,int tam)
{
    if(tam==0)
        return;
    cout<<*arr++ << " ";
    printi(arr,--tam);
}
//implementar burbuja con punteros(nada de *(ptr+i)
//void burbuja(int *arr,const int tam){
//    int *ptr=arr;
//
//    while(arr<tam)
//    {
//
//        while(ptr<tam-1){
//            if(arr[ptr]<arr[ptr++]){
//                int temp=*ptr;
//                *ptr=*arr;
//                *arr=temp;
//            }
//        }
//        arr++;
//    }
//
//
//}
int str_len(char *cad)
{
    int len=0;
    for(int i=0;cad[i]!='\0';i++)
        len++;
    return len;
}
//cout imprime toda la cadena
//cout<<*cad;
int main()
{
    int arr[]={1,2,3,4,5,6};
    char cadena[]="ciencia";
    //creo otro puntero que apunte a la priimera posicion del arretglo
//    int *ptr =arr;
//    //ptr++; //sale 3
//    //si pongo arr++, m,e sale error por que el arreglo es constamte
//    cout<< *(ptr+1)<<endl; //*ptr+1 esta sumando el 2 +1 el de la pos 1
//    cout<<suma(arr,6);
//    cout<<invertir(arr,6);//funciona para parb e impar
    cout<<str_len(cadena);
    return 0;
}
