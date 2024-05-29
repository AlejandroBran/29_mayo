#include <iostream>

using namespace std;

int main(){


    
    int numero = 0;
    int indicePar = 0;
    int indiceimpar = 0;
    int pares [100] = {};
    int impares [100] = {}; 

    do
    {
        cout << "Ingrese un numero: (Digite 0 para salir) ";
        cin >> numero;

        if((numero%2 == 0)&& numero!=0){

            pares[indicePar] = numero;
            indicePar++;

        }else if (numero%2 == 1) {

            impares[indiceimpar] = numero;
            indiceimpar++;

        }


    } while (numero!=0);

    cout << "El resultado es: "<<"\n";

    cout << "La cantidad de Pares es. "<<indicePar<<"\n";

    cout << "La cantidad de Impares es. "<<indiceimpar<<"\n";

   for(int  i = 0; i<indicePar; i++){

    cout << pares[i]<< " ";

   }
   for(int j = 0; j<indiceimpar; j++)

           

    return 0;
}