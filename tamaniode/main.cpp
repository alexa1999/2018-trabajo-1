#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{

    cout<<"int: "<<sizeof(int)<<" bytes"<<endl;
    cout<<"char: "<<sizeof(char)<<" bytes"<<endl;
    cout<<"short "<<sizeof(short)<<" bytes"<<endl;
    cout<<"long "<<sizeof(long)<<" bytes"<<endl;
    cout<<"long long "<<sizeof(long long)<<" bytes"<<endl;
    cout<<"float "<<sizeof(float)<<" bytes"<<endl;
    cout<<"double "<<sizeof(double)<<" bytes"<<endl;
    cout<<"bool "<<sizeof(bool)<<" bytes"<<endl;
    cout<<"unsigned "<<sizeof(unsigned)<<" bytes"<<endl;

    cout<<"long double "<<sizeof(long double)<<" bytes"<<endl;
    int potencia = pow(9,2000);
    //short potenc =32,767;
//    long pot =2,147,483,647 ;
    long long po= 1.18e4932;
    float y=91084093840923841849/894789;
    double k=potencia /54;



    //char a[255];
    //a="23451234512345123451234512345123451234512345123451234512345123451234512345123451234512345123451234512345123451234512345123451234512345123451234512345123451234512345123451234512345123451234512345123451234512345123451234512345123451234512345123451234512345";
    cout<<"int: "<<potencia<<endl;




  return 0;
}

