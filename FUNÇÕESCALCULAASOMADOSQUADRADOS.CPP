#include <iostream>
#include <iomanip>
using namespace std;
//prot�tipos das 3 fun��es abaixo
float somasqr(float m, float n);//prot�tipo
float sqr(float z); //prot�tipo
float soma(float m, float n); //prot�tipo

int main()
{
     setlocale(LC_ALL, "Portuguese");
     float a,b;
     cout << "Digite dois n�meros: ";
     cin >> a >> b;
     cout << "A soma dos quadrados � " << somasqr(a, b);
     cout << endl;
     cin.get();
     return 0;
}
//somasqr()
//Calcula a soma dos quadrados de dois n�meros
float somasqr(float m, float n)
{
     return soma( sqr(m), sqr(n) );
}

//sqr()
//Calcula o quadrado de um n�mero
float sqr(float z)
{
     return z*z;
}
//soma()
//Calcula a soma de dois n�meros
float soma(float m, float n)
{
     return m+n;
}
