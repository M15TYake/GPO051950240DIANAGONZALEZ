//005_1950240_Diana María González Abrego
//Tercer avance

#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>
#include <stdio.h>
#include <stdlib.h> //Para los punteros
#include <fstream> //Para archivos

using namespace std;

int *numart, *year, cant;
float *prunit, *imp, *total;
string *name, *clasf, *features, *genre, *descrip;

void add();
void erase();
void mod();
void list();
void archiv();

int main()
{
    int opt;
    printf("\t ***GAME BREAKERS*** \n");
    printf("\n 1.- Agregar art%cculos \n 2.- Modificar art%cculos \n 3.- Eliminar art%cculos \n 4.- Lista de art%cculos \n 5.- Limpiar pantalla \n 6.- Salir \n", 161, 161, 161, 161);
    scanf_s("%d", &opt);

    switch (opt) {
    case 1: //Agregar artículo
        add();
        return main();
        break;

    case 2: //Modificar artículo
        mod();
        return main();
        break;

    case 3: //Eliminar artículo
        erase();
        printf("Se ha eliminado el art%cculo de la lista!~ \n",161);
        return main();
        break;

    case 4: //Lista de artículos
        list();
        system("pause");
        return main();
        break;

    case 5: //Limpiar pantalla
        system("cls");
        return main();
        break;

    case 6: //Salir del programa
        printf("\t %c%cGRACIAS POR VISITARNOS!! \n", 173, 173);
        archiv();
        exit(1);
        break;

    default:
        printf("\t Opci%cn inv%clida, vuelva a intentarlo... \n", 162, 160);
        system("pause");
        return main();
        break;
    }

}

void add() {
    
    printf("Ingrese cuantos videojuegos desea registrar: \n");
    scanf_s("%d", &cant);

    numart = new int[cant];
    name = new string[cant];
    clasf = new string[cant];
    features = new string[cant];
    genre = new string[cant];
    descrip = new string[cant];
    year = new int[cant];
    prunit = new float[cant];
    total = new float[cant];
    imp = new float[cant];


    for (int i = 0; i < cant; i++) {
        numart[i] = 201021 + i;
        printf("N%cmero de art%cculo: %d \n", 163, 161, numart[i]);
        printf("Ingresa el nombre del videojuego: \n");
        cin.ignore();
        getline(cin, name[i]);
        printf("Ingresa el a%co de lanzamiento: \n", 164);
        scanf_s("%d", &year[i]);
        printf("Ingresa la descripci%cn del videojuego: \n", 162);
        cin.ignore();
        getline(cin, descrip[i]);
        printf("Ingresa la clasificaci%cn del videojuego: \n", 162);
        getline(cin, clasf[i]);
        printf("Ingresa el g%cnero del videojuego: \n", 130);
        getline(cin, genre[i]);
        printf("Ingresa las caracter%csticas del videojuego: \n", 161);
        getline(cin, features[i]);
        printf("Ingrese el precio unitario: \n");
        scanf_s("%f", &prunit[i]);
        imp[i] = prunit[i]*.16;
        total[i] = prunit[i]*1.16;
        printf("\n");
    }
}

void erase() {
    int search2;
    printf("Ingresa el n%cmero de art%cculo: \n", 163, 161);
    scanf_s ("%d", &search2);

    for (int i = 0; i < cant; i++) {
        if (search2 == numart[i]) {
            numart[i] = 0;
        }
    }
}

void mod() {
    int search3, opt3;
    do {
        printf("Ingresa el n%cmero de art%cculo a modificar: \n", 163, 161);
        scanf_s("%d", &search3);
    } while (search3 <= 0);

    printf("\t Selecciona el tipo de modificaci%cn va a hacer: \n", 162);
    printf(" 1.- Total \n 2.- Nombre \n 3.- A%co de lanzamiento \n 4.- Descripci%cn \n 5.- Clasificaci%cn \n 6.- G%cnero \n 7.- Caracter%csticas \n 8.- Precio Unitario \n", 164, 162, 162, 130, 161);
    scanf_s("%d", &opt3);

    switch (opt3) {
    case 1://Completo
        for (int i = 0; i < cant; i++) {
            if (search3 == numart[i]) {
                numart[i] = 201021 + i;
                printf("N%cmero de art%cculo: %d \n", 163, 161, numart[i]);
                printf("Ingresa el nombre del videojuego: \n");
                cin.ignore();
                getline(cin, name[i]);
                printf("Ingresa el a%co de lanzamiento: \n", 164);
                scanf_s("%d", &year[i]);
                printf("Ingresa la descripci%cn del videojuego: \n", 162);
                cin.ignore();
                getline(cin, descrip[i]);
                printf("Ingresa la clasificaci%cn del videojuego: \n", 162);
                getline(cin, clasf[i]);
                printf("Ingresa el g%cnero del videojuego: \n", 130);
                getline(cin, genre[i]);
                printf("Ingresa las caracter%csticas del videojuego: \n", 161);
                getline(cin, features[i]);
                printf("Ingrese el precio unitario: \n");
                scanf_s("%f", &prunit[i]);
                imp[i] = prunit[i] * .16;
                total[i] = prunit[i] * 1.16;
            }
        }
        break;

    case 2://Editar nombre
        for (int i = 0; i < cant; i++) {
            if (search3 == numart[i]) {
                numart[i] = 201021 + i;
                printf("N%cmero de art%cculo: %d \n", 163, 161, numart[i]);
                printf("Ingresa el nombre del videojuego: \n");
                cin.ignore();
                getline(cin, name[i]);
            }
        }
        break;

    case 3://Editar año
        for (int i = 0; i < cant; i++) {
            if (search3 == numart[i]) {
                numart[i] = 201021 + i;
                printf("N%cmero de art%cculo: %d \n", 163, 161, numart[i]);
                printf("Ingresa el a%co de lanzamiento: \n", 164);
                scanf_s("%d", &year[i]);
            }
        }
        break;

    case 4://Editar descripcion
        for (int i = 0; i < cant; i++) {
            if (search3 == numart[i]) {
                numart[i] = 201021 + i;
                printf("N%cmero de art%cculo: %d \n", 163, 161, numart[i]);
                printf("Ingresa la descripci%cn del videojuego: \n", 162);
                cin.ignore();
                getline(cin, descrip[i]);
            }
        }
        break;

    case 5://Editar clasificacion
        for (int i = 0; i < cant; i++) {
            if (search3 == numart[i]) {
                numart[i] = 201021 + i;
                printf("N%cmero de art%cculo: %d \n", 163, 161, numart[i]);
                printf("Ingresa la clasificaci%cn del videojuego: \n", 162);
                cin.ignore();
                getline(cin, clasf[i]);
            }
        }
        break;

    case 6://Editar género
        for (int i = 0; i < cant; i++) {
            if (search3 == numart[i]) {
                numart[i] = 201021 + i;
                printf("N%cmero de art%cculo: %d \n", 163, 161, numart[i]);
                printf("Ingresa el g%cnero del videojuego: \n", 130);
                cin.ignore();
                getline(cin, genre[i]);
            }
        }
        break;

    case 7://Editar caracteristicas
        for (int i = 0; i < cant; i++) {
            if (search3 == numart[i]) {
                numart[i] = 201021 + i;
                printf("N%cmero de art%cculo: %d \n", 163, 161, numart[i]);
                printf("Ingresa las caracter%csticas del videojuego: \n", 161);
                cin.ignore();
                getline(cin, features[i]);
            }
        }
        break;

    case 8://Editar precio
        for (int i = 0; i < cant; i++) {
            if (search3 == numart[i]) {
                numart[i] = 201021 + i;
                printf("N%cmero de art%cculo: %d \n", 163, 161, numart[i]);
                printf("Ingrese el precio unitario: \n");
                scanf_s("%f", &prunit[i]);
                imp[i] = prunit[i] * .16;
                total[i] = prunit[i] * 1.16;
            }
        }
        break;

    default:
        printf("\t Opci%cn inv%clida, vuelva a intentarlo... \n", 162, 160);
        printf("\n");
        system("pause");
        return mod();
        break;

    }
}

void list() {
    int opt2, search;
    string type;
    printf("Selecciona la forma de visualizaci%cn: \n 1.- Art%cculo en espec%cfico \n 2.- Lista completa \n 3.- Clasificaci%cn \n 4.- G%cnero \n", 162, 161, 161, 162, 130);
    scanf_s("%d", &opt2);

    switch (opt2) {
    case 1://Articulo en especifico
        printf("Ingrese el n%cmero de art%cculo: \n", 163, 161);
        scanf_s("%d", &search);
        for (int i = 0; i < cant; i++) {
            if (search == numart[i]) {
                printf("\nNombre: %s \n", name[i].c_str());
                printf("A%co de lanzamiento: %d \n", 164, year[i]);
                printf("Descripci%cn: %s \n", 162, descrip[i].c_str());
                printf("Clasificaci%cn: %s \n", 162, clasf[i].c_str());
                printf("Caracter%csticas: %s \n", 161, features[i].c_str());
                printf("G%cnero: %s \n", 130, genre[i].c_str());
                printf("Precio Unitario: $%f \n", prunit[i]);
                printf("Impuesto: $%f \n", imp[i]);
                printf("Total: $%f \n", total[i]);
                printf("\n");
            }
        }
        break;

    case 2://Lista completa
        printf("LISTA DE ARTICULOS: \n");
        for (int i = 0; i < cant; i++) {
            if (numart[i] != 0) {
                printf("\nN%cmero de art%cculo: %d \n", 163, 161, numart[i]);
                printf("Nombre: %s \n", name[i].c_str());
                printf("A%co de lanzamiento: %d \n", 164, year[i]);
                printf("Descripci%cn: %s \n", 162, descrip[i].c_str());
                printf("Clasificaci%cn: %s \n", 162, clasf[i].c_str());
                printf("Caracter%csticas: %s \n", 161, features[i].c_str());
                printf("G%cnero: %s \n", 130, genre[i].c_str());
                printf("Precio Unitario: $%f \n", prunit[i]);
                printf("Impuesto: $%f \n", imp[i]);
                printf("Total: $%f \n", total[i]);
                printf("\n");
            }

        }
        break;

    case 3://Por clasificacion
        printf("Ingrese la clasificacion a buscar: \n");
        cin.ignore();
        getline(cin, type);

        for (int i = 0; i < cant; i++) {
            if (clasf[i] == type) {
                if (numart[i] != 0) {
                    printf("\nN%cmero de art%cculo: %d \n", 163, 161, numart[i]);
                    printf("Nombre: %s \n", name[i].c_str());
                    printf("A%co de lanzamiento: %d \n", 164, year[i]);
                    printf("Descripci%cn: %s \n", 162, descrip[i].c_str());
                    printf("Clasificaci%cn: %s \n", 162, clasf[i].c_str());
                    printf("Caracter%csticas: %s \n", 161, features[i].c_str());
                    printf("G%cnero: %s \n", 130, genre[i].c_str());
                    printf("Precio Unitario: $%f \n", prunit[i]);
                    printf("Impuesto: $%f \n", imp[i]);
                    printf("Total: $%f \n", total[i]);
                    printf("\n");
                }
            }
        }
        break;

    case 4://Por genero
        printf("Ingrese el genero a buscar: \n");
        cin.ignore();
        getline(cin, type);

        for (int i = 0; i < cant; i++) {
            if (genre[i] == type) {
                if (numart[i] != 0) {
                    printf("\nN%cmero de art%cculo: %d \n", 163, 161, numart[i]);
                    printf("Nombre: %s \n", name[i].c_str());
                    printf("A%co de lanzamiento: %d \n", 164, year[i]);
                    printf("Descripci%cn: %s \n", 162, descrip[i].c_str());
                    printf("Clasificaci%cn: %s \n", 162, clasf[i].c_str());
                    printf("Caracter%csticas: %s \n", 161, features[i].c_str());
                    printf("G%cnero: %s \n", 130, genre[i].c_str());
                    printf("Precio Unitario: $%f \n", prunit[i]);
                    printf("Impuesto: $%f \n", imp[i]);
                    printf("Total: $%f \n", total[i]);
                    printf("\n");
                }
            }
        }
        break;
    }

}

void archiv() {
    ofstream archiv;
    string namearch;
    namearch = "GAME BREAKERS";

    archiv.open(namearch.c_str(), ios::out);
    if (archiv.fail()) {
        printf("\t ¡ERROR 404! \n ARCHIVO INEXISTENTE \n");
        system("pause");
        exit(1);
    }

    archiv << "\t \t ***LISTA DE ARTICULOS*** \n \n";

    for (int i = 0; i < cant; i++) {
        if (numart[i] != 0) {
            archiv << "NUMERO DE OC: ";
            archiv << numart[i] << "\n";
            archiv << "NOMBRE DEL VIDEOJUEGO: ";
            archiv << name[i].c_str() << "\n";
            archiv << "FECHA DE LANZAMIENTO : ";
            archiv << year[i] << "\n";
            archiv << "DESCRIPCION: ";
            archiv << descrip[i].c_str() << "\n";
            archiv << "CLASIFICACION: ";
            archiv << clasf[i].c_str() << "\n";
            archiv << "CARACTERISTICAS: ";
            archiv << features[i].c_str() << "\n";
            archiv << "GENERO: ";
            archiv << genre[i].c_str() << "\n";
            archiv << "PRECIO: $";
            archiv << prunit[i] << "\n";
            archiv << "IVA: $";
            archiv << imp[i] << "\n";
            archiv << "TOTAL: $";
            archiv << total[i] << "\n \n";
        }
    }

    archiv.close();
}