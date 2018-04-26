#include <iostream>

using namespace std;

int sumaRec(int *ptr,int n)
{

    if (n==1){
        return *ptr;
    }
    else{
        return *ptr+(n-1)+sumaRec(ptr,n-1);
    }
}
int sum(int *ptr,int tam){
    int cont;
    for(int i=0;i<tam;i++){
        int a=*ptr+i;
        cont+=a;
    }
    return cont;
}

void invert(int arr[],int len){
    int g;
    for(int i=0;i<len-1;i++){
        int *ptr=arr;
        g=*(ptr+i);
        *(ptr+i)=*(ptr+len-1);
        *(ptr+len-1)=g;
        len--;
    }
}
int tamano(char *ptr)
{
    int tam =0;
    for(int i=0; *(ptr+i)!='\0';i++)
    {
        tam++;
    }
    return tam;
}
void str_cp(char *ptra,char *ptrb){
    for(int i=0;*(ptra+i)!='\0';i++){
        *(ptrb+i)=*(ptra+i);
    }
}
//laconcatenacion de loselementos de t hacia a
void conc(char *ptrs,char *ptrt){
    int a;
    for(int i=0;*(ptrt+i)!='\0';i++){
        a=tamano(ptrs);
        *(ptrs+a)+=*(ptrt+i);
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
