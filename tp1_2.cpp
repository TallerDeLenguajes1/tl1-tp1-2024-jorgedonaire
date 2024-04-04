#include <iostream>

using namespace std;
int cuadradoNumero(int a);
void cuadrado(int a);
void mostrarVariable(int a);
void invertir(int a, int b);
void orden(int a, int b);

int main(){

    cuadrado(4);
    mostrarVariable(5);

    //Prueba de funcion invertir
    cout << "Funcion invertir" << endl;
    int a,b;
    cout << "Ingresar el valor a: " << endl;
    cin >> a;
    cout << "Ingresar el valor b: " << endl;
    cin >> b;
    invertir(a,b);

    //Prueba de funcion orden
    cout << "Funcion orden" << endl;
    cout << "Ingresar el valor a: " << endl;
    cin >> a;
    cout << "Ingresar el valor b: " << endl;
    cin >> b;
    orden(a,b);


    return 0;
}

int cuadradoNumero(int a){
    return a*a;
}

void cuadrado(int a){
    cout << "El cuadrado es: " << a*a << endl;
}

void mostrarVariable(int a){
    // cout << "Ingresar el valor de la variable a: " << endl;
    // cin >> a;
    cout << "La direccion de memoria de la variable es: " << &a << endl;
    cout << "El contenido de la variable es: " << a << endl;
}

void invertir(int a, int b){
    int temp;
    int *aux;
    aux = &a;
    temp=*aux;
    
    *aux=b;
    b = temp;
    
    cout << "La variable a es: " << a << endl;
    cout << "La variable b es: " << b << endl;
}

void orden(int a, int b){
    if (a > b)
    {
        invertir(a,b);
    }else
    {
        cout << "La variable a es: " << a << endl;
        cout << "La variable b es: " << b << endl;
    }
    
}