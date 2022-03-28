#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int caraDado; //valores aleatorios del juego
    int tiroDado; // contador de los tiros del juego

    srand (time (NULL)); //semilla (lo primero)

    cout << "**************************************************" << endl;
    cout << "             Bienvenido al juego                  " << endl; 
    cout << "**************************************************" << endl;
    cout << "Cara" << endl;

    for (caraDado = 1; caraDado < 7; caraDado++)
    {
        caraDado = rand () % 6 + 1;

        cout  << caraDado << frecuenciaJuego << endl;
    }
    
    return 0;
}
