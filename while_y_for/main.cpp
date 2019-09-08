#include <iostream>

using namespace std;

int main()
{
    int cont = 5;
    int var1 = cont++;
    cout<<var1<<endl;

    int var2 = ++cont;
    cout<<var2<<endl;


    cout<<"PREUBAS de si es multiplo de dos"<<endl;
    int n;
    cin>>n;
    bool NoEncontre= true;
    int guardo;
    guardo = n;

    for (int i=1; NoEncontre && guardo>0 ; i=i*2)
    {
      if (n==i)
      {
          cout << n << " es un potencia de 2" << endl;
          NoEncontre =false;
      }
      guardo=guardo-1;
    }
    if (NoEncontre==true)
        cout << n << " no es potencia de 2" << endl;

    //implemente un programa que reciba un número e indique  si dicho número es primo o no. WHILE-FOR

    cout<< "(FOR)coloque un numero para evaluar si es un número primo:  ";

    int m ;
    cin >>m;
    float esPrimo = true;
    for (int divisor=2; divisor!=m && esPrimo && m>0; ++divisor)
    {
          if(m%divisor==0)
        {
            cout<< m << " no es primo" << endl;
            esPrimo = false;
        }
    }
    if (esPrimo==true && m>0)
        cout << m << " es primo" << endl;

    cout<< "(WHILE)coloque un numero para evaluar si es un número primo:  ";

    cin >> m;
    esPrimo = true;
    int divisor = 2;
    while (divisor!=m && esPrimo && m>0)
    {
        if(m%divisor==0)
        {
            cout<< m << " no es primo" << endl;
            esPrimo = false;
        }
        ++divisor;
    }
    if (esPrimo==true && m>0)
        cout << m << " es primo" << endl;

    //implemente un programa que imprima los números primos menores a 100. WHILE-FOR

    cout << "(FOR)primos menores que 100(FOR)"<<endl;
    cout << "2" <<'\t';

    for (int numero = 3; numero<100; numero++)
    {
        int cantDivisores =2;
        esPrimo = true;
        for (int divisor = 2; divisor<numero && cantDivisores<3; divisor++ )
        {
            if (numero%divisor==0)
            {
                cantDivisores = cantDivisores + 1;
                esPrimo = false;
            }
        }
        if (esPrimo==true)
        {
            cout<<numero<<'\t';
        }
    }

    cout<<"hola"<<endl;
    cout << "(WHILE)primos menores que 100(WHILE)"<<endl;
    cout << "2" <<'\t';
    int numero=3;
    while (numero<100)
    {
        int cantDivisores =2;
        esPrimo = true;
        int divisor = 2;
        while(divisor<numero && cantDivisores<3)
        {
            if (numero%divisor==0)
            {
                cantDivisores = cantDivisores + 1;
                esPrimo = false;
            }
            divisor=divisor+1;
        }
        if (esPrimo==true)
        {
            cout<<numero<<'\t';
        }
        numero=numero+1;

    }


    cout<<"hola"<<endl;
    //implemente un  programa que reciba un número por teclado e indique si dicho número es PERFECTO WHILE-FOR
    cout <<"coloque su número(FOR)"<<endl;
    int number;
    cin>> number;
    cout <<"¿"<<number <<" es un número perfecto?"<<endl;
    cout <<"suma de divisores ="<< '\t';
    int contador=0;
    for (int divisor=1; divisor<=(number/2); divisor++)
    {
        if (number%divisor==0)
        {
            contador = contador+divisor;
            cout<< divisor << "+" <<'\t';
        }
    }
    cout <<"= "<< contador << endl;
    if (contador==number)
    {
        cout<<number<<" es un número perfecto"<< endl;
    }
    else
    {
        cout << number << " no es un número perfecto"<< endl;
    }

    cout <<"coloque su número(WHILE)"<<endl;
    cin>> number;
    cout <<"¿"<<number <<" es un número perfecto?"<<endl;
    cout <<"suma de divisores ="<< '\t';
    contador=0;
    divisor=1;
    while(divisor<=(number/2))
    {
        if (number%divisor==0)
        {
            contador = contador+divisor;
            cout<< divisor << "+" <<'\t';
        }
        divisor = divisor+1;
    }
    cout <<"= "<< contador << endl;
    if (contador==number)
    {
        cout<<number<<" es un número perfecto"<< endl;
    }
    else
    {
        cout << number << " no es un número perfecto"<< endl;
    }


    return 0;
}
