// 005_1950240_Diana González.cpp 
//Primer avance

#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>
using namespace std;

int main()
{
    int numart, year, opt;//Como ahora el código y el año no tienen relevancia (busqueda de categorías en el futuro) se va a utilizar como int.
    float prunit, imp, total;
    string name, clas, features, genre, descrip;

    cout << "\t *** GAME BREAKERS *** \n";
    cout << " 1.-Agregar articulo\n 2.-Modificar articulo\n 3.-Eliminar articulo\n 4.-Lista de articulos vigentes\n 5.-Limpiar pantalla\n 6.-Salir\n";
    cin >> opt;

    switch (opt) {
    case 1: //Agregar articulo
        cout << "Ingrese el numero del videojuego: \n";
        cin >> numart;
        cout << "Ingrese el nombre del videojuego: \n";
        cin.ignore();//Ignora el primer espacio.
        getline(cin, name);//Acepta los espacios del texto.
        cout << "Ingrese el anio de lanzamiento: \n";
        cin >> year;
        cout << "Ingrese la descripcion del videojuego: \n";
        cin.ignore();
        getline(cin, descrip);
        cout << "Ingrese la clasificacion del videojuego: \n";
        cin >> clas;//Aunque sea un string, en este caso la clasificación no cuenta con espacios.
        cout << "Ingrese las caracteristicas del videojuego: \n";
        cin.ignore();
        getline(cin, features);
        cout << "Ingrese el genero del videojuego: \n";
        cin.ignore();
        getline(cin, genre);
        cout << "Ingrese el precio unitario del videojuego: \n";
        cin >> prunit;
        imp = (prunit * 16) / 100;//Sacar el 16% del precio unitario.
        total = prunit + imp;//Agregar el 16% al precio dado del usuario.

        return main();
        break;
    
    case 2://Modificar articulo
        return main();
        break;

    case 3://Eliminar articulo
        return main();
        break;

    case 4://Lista de articulos vigentes
        return main();
        break;

    case 5://Limpiar pantalla
        system("cls");
        return main();
        break;

    case 6://Salir
        cout << " \t Gracias por visitarnos, vuelva pronto! \n";
        break;

    default:
        cout << "Opcion invalida, intentelo de nuevo \n";
        return main();
    }
    
}
