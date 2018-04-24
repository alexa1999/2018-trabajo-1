#include <iostream>

using namespace std;

int sumaRec(int a[],int n)
{

    if (n==1){
        return a[0];
    }
    else{
        return a[n-1]+sumaRec(a,n-1);
    }
}
int suma(int a[],int n)
{
    long sum = 0;
    for(int i = 0; i < n; sum += a[i++]);
        return sum;
}

int invertir(int arr[],int len,int inicio)

{
    if (len==0)//siel tamano es igual a 0 entonces que me retonrme el primer elemento
    {
        return arr[0];
    }
    else {
        if (inicio!=len/2)
        {
            int aux;
            aux=arr[len-1];//el auxiliar es elult elemento
            arr[inicio]=aux;
            arr[len-1]=arr[inicio];

            return invertir(arr,len-1,inicio+1);

        }
    }

}
int tamano(char cad[])
{
    int tam =0;
    for(int i=0; cad[i]!='\0';i++)
    {
        tam++;
    }
    return tam;
}
void strcpy(char s[],char t[])
{
    for(int i=0;t[i]!='\0';i++)
    {
        s[i]=t[i];
    }

}
//laconcatenacion de loselementos de t hacia a
void conc(char s[],char t[])
{
    int a;
    for(int i=0;t[i]!='\0';i++)
    {
        a=tamano(s);

        s[a]+=t[i];
    }

}



int main()
{
    int a[7] = {1, 2, 3, 4, 5, 6, 7};
    char s[20]="anel";
    char t[]="ersa";
    conc(s,t);
    cout<<s;
    //cout<<invertir(a,7,0);
}

