#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int opcion = 0;

    while (true)
    {
        system("cls");

        cout << "Sistema de iventario" ;
        cout << endl;
        cout << "********************";
        
        cout << endl;
        cout << endl;

        cout << "1 - Productos" << endl;
        cout << "2 - Ingreso de inventario" << endl;
        cout << "3 - Salida de inventario" << endl;
        cout << "0 - Salir" << endl;

        cout << "Ingrese una opcion del menu: "; 
        cin >> opcion; 

        switch (opcion) 
        {
        case 1:
            cout << "Escogiste 1  ";
            break;
        case 2:
            cout << "Escogiste 2  ";
            break;
        case 3:
            cout << "Escogiste 3  ";
            break;
            
        default:
            break;
        }

        
        system("pause");
        cout << endl;

        if (opcion == 0)
        {
            break;
        }
    }
    

    return 0;
}
