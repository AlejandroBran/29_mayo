#include <iostream>

using namespace std;

int main(){

    int numero = 0;
    int pares = 0;
    int impares = 0; 

    do
    {
        cout << "Ingrese un numero: (Digite 0 para salir) ";
        cin >> numero;

        if((numero%2 == 0)&& numero!=0){

            pares++;
        }else if (numero%2 == 1) {

            impares++;

        }


    } while (numero!=0);

    cout << "Cantidad de numeros pares: "<<pares << "\n";

    cout << "Cantidad de numeros impares: "<<impares << "\n";
    

           

    return 0;
}