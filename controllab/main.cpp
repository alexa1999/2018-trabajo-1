#include <iostream>

using namespace std;
void esPerfecto(int num)
{
    int k=0;
    for(int i=1; i<num;i++)
    {
        if(num%i==0)
        {
            k+=i;
        }

    }
    if(k==num)
    {
        cout<<endl;
        cout<<k<<"; " ;
        for(int i=1;i<num;i++)
        {
            if(num%i==0)
            {
                cout<<i<<";";
                k+=i;
            }
        }
    }
}
void esPrimo(int n)
{
    int x=0;

    for(int i=1;i<=n;i++){
        if(n%i==0){
            x++;
        }
    }
    if(x!=2){
        cout<<"";
    }else
        cout<<n <<";";
}
int exponente(int num,int expo)
{
    if(expo==1)
    {
        return num;
    }
    else{
        num=num*exponente(num,expo-1);
        return num;
    }
}
int intercambio(int a,int b)
{
    a=a-b;
    b=a-b;
    a=a-b;
}
int main()
{
//    for(int i=5;i<10000;i++)
//        esPerfecto(i);
    int a;
    cout<<"ingrese hasta que cantidad quiere los numeros primos: "<<endl;
    cin>>a;
    for (int c=0;c<=a;c++)
        esPrimo(c);
    cout<<endl;
    int resul =exponente(3,3);
    cout<<resul;
    return 0;
}
