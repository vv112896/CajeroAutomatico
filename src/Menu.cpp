//
// Created by Enzo Darío Quesada y Leonardo Hidalgo, 2/4/17 , all rights reserved.
//
#include "Menu.h"

void Menu::menuPrincipal()

{
    string tarjetaNum;
    int pin;

    cout<<" ___________________________________"<<endl;
    cout<<"|  Bienvenido al Cajero Automatico  |"<<endl;
    cout<<"|-----------------------------------|"<<endl;
    cout<<"|   Ingrese su                      |"<<endl;
    cout<<"|             numero de tarjeta     |"<<endl;
    cout<<"|___________________________________|"<<endl;
    cin>>tarjetaNum;
    a:
    cout<<" -----------------------------------"<<endl;
    cout<<"|   Por favor, Ingrese su Pin:      |"<<endl;
    cout<<"|___________________________________|"<<endl;
    cin>>pin;
    Cajero miCajero(777,pin,280000,200000);// clave correcta, pin, saldo, limite

    miCajero.verificaPin();
    if (miCajero.getVerificador())
    {
        int opc=-1;
        while ( opc != 4 )
        {
            system("cls");
            cout <<"La contrasenia es correcta, Bienvenido al menu princpipal"<<endl<<endl;
            cout <<" ________________________________________"<<endl;
            cout <<"|Ingrese la opcion que desee realizar:   |"<<endl;
            cout <<"|________________________________________|"<<endl;
            cout <<"|                                        |"<<endl;
            cout <<"| [1] Consultar saldo                    |"<<endl;
            cout <<"| [2] Retirar saldo                      |"<<endl;
            cout <<"| [3] Retirar saldo predeterminado       |"<<endl;
            cout <<"| [4] Salir                              |"<<endl;
            cout <<"|________________________________________|"<<endl;
            cin>>opc;
            //system("cls");

            switch (opc){

                case 1: cout<<"Su saldo es de: "<<miCajero.consulataSaldo()<<endl;system("pause");break;
                case 2: miCajero.retiroManual();system("pause");break;
                case 3:

                        while (opc != 4)
                        {
                            system("cls");
                            cout <<" ______________________________________"<<endl;
                            cout <<"|   Cuanto dinero desea retirar?       |"<<endl;
                            cout <<"|______________________________________|"<<endl;
                            cout <<"|                                      |"<<endl;
                            cout <<"|   [1] 10000                          |"<<endl;
                            cout <<"|   [2] 30000                          |"<<endl;
                            cout <<"|   [3] 50000                          |"<<endl;
                            cout <<"|   [4] Volver al menu principal       |"<<endl;
                            cout <<"|______________________________________|"<<endl;


                            cin >> opc;

                            switch (opc)
                            {
                                case 1: miCajero.retiroPredeterminado1();break;
                                case 2: miCajero.retiroPredeterminado2();break;
                                case 3: miCajero.retiroPredeterminado3();break;

                                default: cout<<"Opcion invalida"<<endl;system("pause"); break;
                            }
                        }

                default: cout<<"Opcion invalida"<<endl;system("pause"); break; //salir del menu (retirar la tarjeta)
                        }
        }
    }else
        goto a;


}

