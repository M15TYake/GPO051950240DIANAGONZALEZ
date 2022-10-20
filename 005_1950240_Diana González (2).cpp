// 005_1950240_Diana González (2).cpp 
// Segundo Avance

#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>
#include <stdio.h>
using namespace std;

struct info {
    int numart, year;
    float prunit, imp, total;
    string name, clasf, features, genre, descrip;
} artículo[2];

int main()
{
    int opt, opt2, search;
    do {
        printf("\t ***GAME BREAKERS*** \n");
        printf("\n 1.- Agregar art%cculos \n 2.- Modificar art%cculo \n 3.- Eliminar art%cculos \n 4.- Lista de art%cculos \n 5.- Limpiar pantalla \n 6.- Salir \n", 161, 161, 161, 161);
        scanf_s("%d", &opt);

        switch (opt) {
        case 1: //Agregar artículo
            for (int i = 0; i < 2; i++) {
                artículo[i].numart = 201021 + i;
                printf("N%cmero de art%cculo: %d \n", 163, 161, artículo[i].numart);
                printf("Ingresa el nombre del videojuego: \n");
                cin.ignore();
                getline(cin, artículo[i].name);
                printf("Ingresa el a%co de lanzamiento: \n", 164);
                scanf_s("%d", &artículo[i].year);
                printf("Ingresa la descripci%cn del videojuego: \n", 162);
                cin.ignore();
                getline(cin, artículo[i].descrip);
                printf("Ingresa la clasificaci%cn del videojuego: \n", 162);
                getline(cin, artículo[i].clasf);
                printf("Ingresa el g%cnero del videojuego: \n", 130);
                getline(cin, artículo[i].genre);
                printf("Ingresa las caracter%csticas del videojuego: \n", 161);
                getline(cin, artículo[i].features);
                printf("Ingrese el precio unitario: \n");
                scanf_s("%f", &artículo[i].prunit);
                artículo[i].imp = artículo[i].prunit * .16;
                artículo[i].total = artículo[i].prunit * 1.16;
                printf("\n");
            }
            return main();
            break;

        case 2://Modificar articulo

            return main();
            break;

        case 3://Eliminar artículo
            
            return main();
            break;

        case 4://Lista de artículos
            printf("Selecciona la forma de visualizaci%cn: \n 1.- Art%cculo en espec%cfico \n 2.- Lista completa \n", 162, 161, 161);
            scanf_s("%d", &opt2);
            if (opt2 == 1) {
                printf("Ingrese el n%cmero de art%cculo: \n", 163 ,161);
                scanf_s("%d", &search);
                for (int i = 0; i < 2; i++) {
                    if (search == artículo[i].numart) {
                        printf("\nNombre: %s \n", artículo[i].name.c_str());
                        printf("A%co de lanzamiento: %d \n", 164, artículo[i].year);
                        printf("Descripci%cn: %s \n", 162, artículo[i].descrip.c_str());
                        printf("Clasificaci%cn: %s \n", 162, artículo[i].clasf.c_str());
                        printf("Caracter%csticas: %s \n", 161, artículo[i].features.c_str());
                        printf("G%cnero: %s \n", 130, artículo[i].genre.c_str());
                        printf("Precio Unitario: %f \n", artículo[i].prunit);
                        printf("Impuesto: %f \n", artículo[i].imp);
                        printf("Total: %f \n", artículo[i].total);
                        printf("\n");
                    }
                 }
            }
            else {
                printf("LISTA DE ARTICULOS: \n");
                for (int i = 0; i < 2; i++) {
                    if (artículo[i].numart != 0) {
                        printf("\nN%cmero de art%cculo: %d \n", 163, 161, artículo[i].numart);
                        printf("Nombre: %s \n", artículo[i].name.c_str());
                        printf("A%co de lanzamiento: %d \n", 164, artículo[i].year);
                        printf("Descripci%cn: %s \n", 162, artículo[i].descrip.c_str());
                        printf("Clasificaci%cn: %s \n", 162, artículo[i].clasf.c_str());
                        printf("Caracter%csticas: %s \n", 161, artículo[i].features.c_str());
                        printf("G%cnero: %s \n", 130, artículo[i].genre.c_str());
                        printf("Precio Unitario: %f \n", artículo[i].prunit);
                        printf("Impuesto: %f \n", artículo[i].imp);
                        printf("Total: %f \n", artículo[i].total);
                        printf("\n");
                    }
                    
                }
            }
            
            system("pause");
            return main();
            break;

        case 5://Limpiar pantalla

            system("cls");
            return main();
            break;

        case 6://Salir

            printf("\t %c%cGRACIAS POR VISITARNOS!! \n", 173, 173);
            break;

        default:
            printf("\t Opci%cn inv%clida, vuelva a intentarlo... \n", 162, 160);
            printf("\n");
            system("pause");
            return main();
            break;
        }
    } while (opt != 6);



}

