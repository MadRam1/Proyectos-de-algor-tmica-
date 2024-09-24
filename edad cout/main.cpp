#include <iostream>

using namespace std;

int main()
{
    int actual=2024;
    int nacimiento;int edad;char nombre [20];

    cout<<"Introduzaca su nombre: ";
    cin>>nombre;
    cout<<"Introduzca su año de nacimiento: ";
    cin>>nacimiento;
    edad= actual-nacimiento;
    cout<<"Su nombre es:"<<nombre;
    cout<<"Su edad es: "<<edad;

    return 0;
}
