#include <iostream>

using namespace std;

string productos [5][2] = {
    {"001", "iPhone x"},
    {"002", "Laptop Dell"},
    {"003", "Monitor Samsung"},
    {"004", "Mause"},
    {"005", "HeadSet"},
};

void listarProductos ()
{
    system ("cls"); 
    cout << endl;
    cout << "Listado de productos" << endl;
    cout << "*********************" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << productos [i][0] << "   " << productos [i][1] << endl;
    }
}

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
            listarProductos ();
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
