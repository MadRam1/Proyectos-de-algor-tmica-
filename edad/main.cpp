#include <iostream>

using namespace std;
#include <conio.h>
#include <stdio.h>

int main()
{

    int ano_nacimiento, ano_actual = 2024;
    int edad;

    printf("Introduzca su a�o de nacimiento: ");
    scanf("%d", &ano_nacimiento);

    edad = ano_actual - ano_nacimiento;

    printf(" Hola, buenos dias, tienes %d a�os.",edad );

    getch();


    return 0;
}
