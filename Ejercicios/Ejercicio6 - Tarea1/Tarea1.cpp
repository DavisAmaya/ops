#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 0;
    int b = 0;
    int resultadoSuma = 0, resultadoResta = 0, resultadoMultipicacion = 0, resultadoDivision = 0;

    cout << "Ingrese el valor de a:  "; //Se solicita el primer numero que se almacenara en la variable int a
    cin >> a;
    cout << endl;

    cout << "Ingrese el valor de b: "; //Se solicita el segundo numero que se almacenara en la variable int b
    cin >> b;

    resultadoSuma = a + b;    //Procedimientos
    resultadoResta = a - b;
    resultadoMultipicacion = a * b;
    resultadoDivision = a / b;

    //salida de informacion 
    cout << endl;

    cout << "La suma de a + b es: "  << resultadoSuma << endl;  
    cout << "La resta de a - b es: "  << resultadoResta << endl;
    cout << "La multiplicacion de a * b es: "  << resultadoMultipicacion << endl;
    cout << "La division de a / b es: "  << resultadoDivision << endl;
    return 0;
}
