#include <iostream>

using namespace std;

int main()
{
    //Problem 1. Implementar un programa que evalue si la edad ingresada por teclado se refiere
    //a una persona mayor o menor de edad.
//    int edad;
//    cout<<"introduce tu edad: "<<endl;
//    cin>>edad;
//    if(edad >=  18){
//        cout<<" es una persona mayor de edad "<<endl;
//    }
//    else{
//        cout<<" es un menor de edad"<<endl;
//    }


    //Problem 2. Implementar un programa que solicite un n ́umero n e imprima los n ́umero
    //desde el 1 hasta n separados por comas. OJO, despues del  ́ultimo n ́umero no debe imprimir
   //la ’,’.


//    int numero;
//    cout<<"ingrese un numero :";
//    cin>>numero;
//    for(int i=1; i<= numero;i++ )
//        cout<<";"<<i;


    //Problem 3. Implemente un programa que solicite el ingreso de 3 n ́umeros e imprima: (i)
    //el menor, (ii) el mayor y (iii) el promedio de dichos n ́umeros.


//    int x,y,z;
//    cout<<"ingrese el primer numero: "<<endl;
//    cin>>x;
//    cout<<"ingrese el segundo numero: "<<endl;
//    cin>>y;
//    cout<<"ingrese el tercero numero: "<<endl;
//    cin>>z;
//
//    if(x>y && x>z)
//    {
//        cout<<x<<" es el mayor numero"<<endl;
//
//    }
//    if(y>z && y>x)
//    {
//        cout<<y<<" es el mayor numero"<<endl;
//    }
//    else
//    {
//        cout <<z<<" es mayor"<<endl;
//
//    }
//
//    if(x<y && x<z)
//    {
//        cout<<x<<" es el menor numero"<<endl;
//
//    }
//    if(y<x && y<z)
//    {
//        cout<<y<<" es el menor numero"<<endl;
//    }
//    else
//    {
//        cout << z <<" es menor"<<endl;
//    }
//    int suma=x+y+z;
//    int promedio= suma/3;
//
//    cout<<"el promedio es :"<<promedio <<endl;


//    Problem 4. Implemente un programa que solicite dos n ́umeros y evalue:
//a) Si el primer y el segundo n ́umero son m ́ultiplos de 2.
//b) Si el primer n ́umero es m ́ultiplo del segundo.
//c) Si el primer elevado al cuadrado tiene como resultado el segundo.
//    int x,y;
//    cout<<"ingrese el primer numero: "<<endl;
//    cin>>x;
//    cout<<"ingrese el segundo numero: "<<endl;
//    cin>>y;
//    if (x%2 && y%2){
//        cout <<" no son multiplos de 2";
//    }
//    else{
//        cout<<"son multiplos de 2";
//    }
//    if (x%y==0){
//        cout<<x <<"es multiplo de" <<y<<endl;
//    }
//    int cuad =x*x;
//    if(cuad==y)
//    {
//        cout<<"el "<<x<<"elevado al cuarado es igual a" << y<<endl;
//    }
//    else{
//        cout<<"el "<<x<<"elevado al cuarado no es igual a " << y<<endl;
//    }
    //Problem 5. Implemente un programa que solicite un n ́umero y evalue si dicho n ́umero es
 //primo.
    int n,x=0;
    cout<<"ingrese un numero: "<<endl;
    cin>>n;
    for(int i=1;i<(n+1);i++){
        if(n%i==0){
            x++;
        }
    }
    if(x!=2){
        cout<<"no es primo";
    }else
        cout<<"es primo";
//Problem 7. Implemente un programa que solicite un n ́umero de cinco d ́ıgitos e imprima
//los d ́ıgitos separados por un caracter de tabulaci ́on.

    int numero;
    cout<<" Ingrese un numero de 5 caracteres  :";
    cin >> numero;
    int d=numero/10000;
    cout<<d<<"|";
    d=numero/1000%10;
    cout<<d<<"|";
    d=numero/100%10;
    cout<<d<<"|";
    d=numero/10%10;
    cout<<d<<"|";
    d=numero%10;
    cout<<d<<endl;
//Problem 9. Implemente un programa que evalue si un a ̃no es bisiesto.
    int anio;
    cout<<"ingrese un año: "<<endl;
    cin>>anio;
    if(anio%4==0){
        if((anio%100)==0&&(anio%400)==0)
            cout<<"si es bisiesto"<<endl;
        else
            cout<<"no es bisiesto"<<endl;
    }

    return 0;
}
