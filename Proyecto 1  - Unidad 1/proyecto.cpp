#include <iostream>
#include "starShip.h"
#include "snake.h"

using namespace std;

int main(int argc, char const *argv[])
{
    int opcion = 0;

    while (true)
    {
        cout << "*****************" << endl;
        cout << " MENU DE JUEGOS " << endl;
        cout << "*****************" << endl;

        cout << "Seleccione un juego" << endl;
        cout << "1 - StarShip" << endl;
        cout << "2 - Snake" << endl;

        cout << "Ingrese un numero del menu para seleccionar un juego:: ";
        cin >> opcion;


        if ( opcion == 1 )
        {
            system ("cls");
            starShip();
            cout << endl;
            system ("pause");
        }
        
        if ( opcion == 2 )
        {
            system ("cls");
            snake();
			cout << endl;
            system ("pause");
        }

        if (opcion == 0)
        {
            break;
        }
        
        
    }

    cout << endl;
    cout << "Saliste del sistema";

    return 0;
}
