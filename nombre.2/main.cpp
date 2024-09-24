#include <iostream>

using namespace std;
#include <conio.h>
#include <stdio.h>

int main()
{

    char nombre[20], apellido[20];
    int ano_nacimiento, ano_actual = 2024;
    int edad;

    printf("introduzaca su nombre:");
    scanf("%s", nombre);

    printf("introduzaca su apellido:");
    scanf("%s", apellido);

    printf("Introduzca su año de nacimiento: ");
    scanf("%d", &ano_nacimiento);

    edad = ano_actual - ano_nacimiento;

    printf(" Hola %s %s, buenos dias, tienes %d años.",nombre, apellido, edad );

    getch();


    return 0;
}


