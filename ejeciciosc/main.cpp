#include <iostream>
#include <string.h>
strco

using namespace std;
// escriba una funcion  que reciba como parametro una cadena,el cual sera un numero en notacion cientifica,por ejemplo 1234e-6
//y retorne el mumero en si
//usando solo punteros escriba una funcion llamada substring st donde estas dos
//son cadenas de strings q retorne uno si la cadena t es una subcadena de la cadena s y si n 0
int tamano(char cad[])
{
    int tam =0;
    for(int i=0; cad[i]!='\0';i++)
    {
        tam++;
    }
    return tam;
}
int num(char n[])
{
    int a=tamano(n);//7
    char t[a];
    int poscoma;
    int i,j=0;

    for (i=0; i<a;i++)
    {
        if (n[i]=='e')
        {
            break;
        }
        if(n[i]==',')
        {
            poscoma=i;
        }
        if (n[i] != ',' )
        {

            t[j] = n[i];
            j++;
        }

    }
    cout<<n[a-1]<<endl;
    t[j] = '\0';
    char temp[20];
    int l=tamano(t)+1;//4
    int variable=n[a-1]-'0';//1
    if(l<variable)
    {
        cout<<t<<endl;
    }
    else if(l>variable)
    {
        int resta=poscoma-variable;//1
        temp[resta]=t[resta];
        t[resta]=',';
        t[resta+1]=temp[resta];
    }

    cout<<t;
    return 0;

}

void substri(string s[],string t[],int a,int b)
{

    for(int i=a;i>=b;i--)
    {
        for (int j=b;j>=0;j--){
            if(s[i]==t[j]){
                cout<<1;
            }
            else{
                cout<<0;
            }
        }
    }
}


int main()
{
//    char n[10]="12,36e-1";
//    cout<<num(n);
    string s[9]="aneltiene";
    string t[5]="tiene";
    substri(s,t,8,4);


    return 0;
}
