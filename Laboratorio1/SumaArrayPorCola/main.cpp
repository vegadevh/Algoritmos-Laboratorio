/* 
 * File:   main.cpp
 * Author: 00148816
 *
 * Created on August 25, 2019, 8:55 PM
 */

#include <iostream>

using namespace std;

int sumar(int suma, int numeros[], int paso, int tam){
    if(paso!=tam){
        suma=suma+numeros[paso];
        paso++;
        sumar(suma, numeros, paso, tam);
    }
    else{
        return suma;
    }
}

int arreglo(int suma,int numeros[], int paso){
    cout<<"Ingrese el tamanio del array: ";
    int tam;
    cin>>tam;
    
    for(int i=0;i<tam;i++){
        cout<<i+1<<". Ingrese un numero numero: ";
        cin>>numeros[i];
    }
    return sumar(suma, numeros, paso, tam);
}

int main(int argc, char** argv) {
    
    int numeros[100];
    int suma=0, paso;
    
    int respuesta=arreglo(suma, numeros, paso);
    cout<<"La suma de los elementos del arreglo es: "<<respuesta;
            
    return 0;
}

