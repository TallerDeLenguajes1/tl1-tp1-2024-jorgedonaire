#include <iostream>
using namespace std;

int main(){

    int * puntero;
    int numero = 33;
    puntero = &numero;

    cout << "Contenido del puntero es: "<< *puntero << endl;
    cout << "La direccion de memoria almacenada por el puntero es: "<< puntero << endl;
    cout << "La direccion de memoria de la variable es: "<< &numero << endl;
    cout << "La direccion de memoria del puntero es: "<< &puntero << endl;
    cout << "El tamaño de memoria utilizado por esa variable es: "<< sizeof(numero) << endl;

    return 0;
}

