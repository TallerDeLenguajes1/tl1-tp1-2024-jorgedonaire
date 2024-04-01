#include <iostream>

using namespace std;
int cuadradoNumero(int a);
void cuadrado(int a);
void mostrarVariable(int a);
void invertir(int a, int b);
int main(){

    return 0;

}

int cuadradoNumero(int a){
    return a*a;
}

void cuadrado(int a){
    cout << "El cuadrado es: " << a*a << endl;
}

void mostrarVariable(int a){
    cout << "La direccion de memoria de la variable es: " << &a << endl;
    cout << "El contenido de la variable es: " << a << endl;
}

void invertir(int a, int b){
    cin >> "Ingresar el valor a: " << a << endl;
    cin
}