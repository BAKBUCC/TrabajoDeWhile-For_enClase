#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    bool NoEncontre= true;
    int guardo;
    guardo = n;

    int cont = 5;
    int var1 = cont++;
    cout<<var1<<endl;

    int var2 = ++cont;
    cout<<var2<<endl;

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

    int m ;
    cin >>m;
    float esPrimo = true;
    for (int divisor=2; divisor!=m && esPrimo && m>0; ++divisor)
    {
          if(m%divisor==0)
        {
            cout<< m << "no es primo" << endl;
            esPrimo = false;
        }
    }
    if (esPrimo==true && m>0)
        cout << m << " es primo" << endl;

    cin >> m;
    esPrimo = true;
    int divisor = 2;
    while (divisor!=m && esPrimo && m>0)
    {
        if(m%divisor==0)
        {
            cout<< m << "no es primo" << endl;
            esPrimo = false;
        }
        ++divisor;
    }
    if (esPrimo==true && m>0)
        cout << m << " es primo" << endl;

    //implemente un programa que imprima los números primos menores a 100. WHILE-FOR





    //implemente un  programa que reciba un número por teclado e indique si dicho número es PERFECTO WHILE-FOR
    return 0;
}
