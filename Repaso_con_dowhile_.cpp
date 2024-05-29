#include <iostream>

using namespace std;

int main(){

    int Menu = 0;
    bool continuar = true;
    string nombres [100] ={};
    int edades [100]={};
    string usuario [100]={};
    string contrasena [100]={};
    int indiceUsuario = 0;
    string UsuarioTemporal = "";
    string ContrasenaTemporal = "";
    bool inicioSesion = false;

    
    do{
        cout <<"<--->Menu de Inicio de Seccion<---> "<<"\n";

    cout <<"1) Es Inicio de Seccion. \n 2) Registro. \n 3) Salir. \n";
    
    cin>> Menu;
    switch(Menu){

        case 1:
        cout << "Ingrese nombre de Usuario: ";
        cin>> UsuarioTemporal;

        for(int i = 0; i<100; i++){

            if(UsuarioTemporal == usuario[i]){
               do{
                cout << "Ingrese la contrasena: ";
                cin>> ContrasenaTemporal;
                if(ContrasenaTemporal == contrasena[i]){
                    inicioSesion=true;
                    break;
                }else {
                    cout <<"Contrasena incorrecta. \n";
                }

               }while(true);        
                                     
            }
            
     }
      if(inicioSesion==false){

            cout <<"<---Bievenido.---> ";
            continue;
        }

        break;

        case 2:

        cout << "Ingrese nombre completo. ";
        cin>> nombres[indiceUsuario];

        cout << "Ingrese Edad: ";
        cin>>edades[indiceUsuario];

        cout << "Ingrese el nombre de Usuario. ";
        cin>> usuario[indiceUsuario];

        cout << "Ingrese Contrasena. ";
        cin>>contrasena[indiceUsuario];
        indiceUsuario++;


        break;

        case 3:
        continuar = false;

        break;

        default:

        cout << "Opcion Invalidad.### \n";
    }
        
       
    }while(continuar == true);

    return 0;
}