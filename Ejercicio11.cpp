/*
Ejercicio 11: 
Escribe la siguiente expresión en C++. Use precisión para la salida del cout.
A) f(a,b)= (a/b) + 1
B) f(a,b)= (a+b)/(c+d)
C) f(a,b)= (a+(b/c))/(d+(e/f))
D) f(a,b)= a + (b/(c-d))
*/



#include <iostream>
#include <iomanip> // Para configurar la precisión

using namespace std; //Para no colocar el std:: en cout

int main() {
    // Expresión A) f(a,b) = (a/b) + 1
    int a = 5;
    int b = 2;
    double resultadoA = static_cast<double>(a) / b + 1;
    cout << "A) Resultado: " << setprecision(2) << resultadoA << endl;

    // Expresión B) f(a,b) = (a+b)/(c+d)
    int c = 10;
    int d = 3;
    double resultadoB = static_cast<double>(a + b) / (c + d);
    cout << "B) Resultado: " << setprecision(2) << resultadoB << endl;

    // Expresión C) f(a,b) = (a+(b/c))/(d+(e/f))
    int e = 4;
    int f = 7;
    double resultadoC = (a + (static_cast<double>(b) / c)) / (d + (static_cast<double>(e) / f));
    cout << "C) Resultado: " << setprecision(2) << resultadoC << endl;

    // Expresión D) f(a,b) = a + (b/(c-d))
    int c_d = c - d;
    double resultadoD = a + (static_cast<double>(b) / c_d);
    cout << "D) Resultado: " << setprecision(2) << resultadoD << endl;

    return 0;
}

