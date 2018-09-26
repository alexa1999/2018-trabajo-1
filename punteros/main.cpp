#include <iostream>

using namespace std;
int swap_(int &x,int &y)
{
    int temp=x;
    x=y;
    y=temp;
}
//void swapByPtr(int *ptr1 ,int *ptr2)//solo hago que los punteros cambien,no cambian las variables
//{
//    int *temp =ptr1;
//    ptr1=ptr2;
//    ptr2=ptr1;
//}

void swapByPtr(int *ptr1 ,int *ptr2)//Aqui recien cambio las variables
{
    int tempo =*ptr1;
    *ptr1=*ptr2;
    *ptr2=*ptr1;
}
int pow(int *b,int *e)
{
    int result=1;
    for(int i=0; i< *e;i++)
        result *= *b;

    return result;
}
//implemente un programa que reciba un puntero a entero y que verifique  que sea año bisiesto
bool isBisiesto(int *anho)
{
    //return (!( *anho%4==0 && (*anho %100!=0 || *anho%40==0)));
    return (!( *anho%4 && (*anho %100) || !(*anho%400)));
}
//evaluar si es primo , y recibe un puntero
//bool isPrime(int *n)
//{
//    int n,x=0;
//    cout<<"ingrese un numero: "<<endl;
//    cin>>n;
//    for(int i=1;i<(n+1);i++){
//        if(n%i==0){
//            x++;
//        }
//    }
//    if(x!=2){
//        cout<<"no es primo";
//    }else
////        cout<<"es primo";
//}
int main()
{
//    int a=5;
//    int b=10;
//    int x= 2014;
//    swap_(a,b);
//    swapByPtr(&a,&b);
//    cout<<a<<" "<<b<<endl;
//    cout<<isBisiesto(&x);
    ////jugar
//    int x=10;
//    int &y=x;
//    int *ptr=&x;
//    y++;
//    *ptr=30;
//    cout<< x<<endl; //imprime 30
//    //
//    int x=10;
//    int &y=x; // es una referencia,un alias , si uso y enrealidad uso x
//    int *ptr=&x;
//    y++;
//    *ptr +=30;
//    cout<< x<<endl; //imprime 41
//    ////
//    int x=10;
//    int &y=x;
//    int *ptr=&x;
//    y++;
//    x++;
//    *ptr +=30;
//    cout<< x<<endl; //imprime 42
//    //
//    //imprime la direccion de memoria de x y contenido cout<<ptr<< *ptr
//    return 0;
}
