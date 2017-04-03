//
// Created by Enzo Darío Quesada y Leonardo Hidalgo, 2/4/17 , all rights reserved.
//
#include "Cajero.h"

Cajero::Cajero()
{
    this->truePin=0;// verificar si es así
    this->verificador=NULL;
}

Cajero::Cajero(int truePin, int pin, double cuenta, long limite)
{
    this->truePin=truePin;
    this->miCliente.setPin(pin);
    this->miCuenta.setSaldo(cuenta);
    this->miCuenta.setLimite(limite);
}

bool Cajero::verificaPin()
{
    if(miCliente.getPin()== getTruePin())
        {
        cout<<"Contrasenia Correcta"<<endl<<endl;
        setVerificador(true);
        return true;
        }
    else
        {
            cout<<"\nContrasenia Incorrecta"<<endl<<endl;
            setVerificador(false);
            return false;
        }
        return 0;
}

void Cajero::retiroManual()
{
    int monto;
    cout<<"Ingrese el monto a retirar"<<endl;
    cin>>monto;
    miCuenta.setMontoARetirar(miCuenta.getMontoARetirar()+monto);
    if(miCuenta.getMontoARetirar()>miCuenta.getLimite())//deberíamos introducir el monto en el costructor
    {
        cout<<"Ha alcanzado el limite diario"<<endl;
         miCuenta.setMontoARetirar(miCuenta.getMontoARetirar()- monto);
    }else{
        miCuenta.setSaldo(miCuenta.getSaldo()-monto);
        cout<<"Usted ha retirado: "<<monto<<endl;
    }

}

void Cajero::retiroPredeterminado1()
{
    int monto=10000;
    miCuenta.setMontoARetirar(miCuenta.getMontoARetirar()+monto);
    if(miCuenta.getMontoARetirar()>miCuenta.getLimite())//deberíamos introducir el monto en el costructor
        {
            cout<<"Ha alcanzado el limite diario"<<endl;
            miCuenta.setMontoARetirar(miCuenta.getMontoARetirar()- monto);
        }else{
                miCuenta.setSaldo(miCuenta.getSaldo()-monto);
                cout<<"Usted ha retirado: "<<monto<<endl;
            }
    system("pause");
}

void Cajero::retiroPredeterminado2()
{
    int monto=30000;
    miCuenta.setMontoARetirar(miCuenta.getMontoARetirar()+monto);
    if(miCuenta.getMontoARetirar()>miCuenta.getLimite())//deberíamos introducir el monto en el costructor
        {
            cout<<"Ha alcanzado el limite diario"<<endl;
            miCuenta.setMontoARetirar(miCuenta.getMontoARetirar()- monto);
        }else{
                miCuenta.setSaldo(miCuenta.getSaldo()-monto);
                cout<<"Usted ha retirado: "<<monto<<endl;
            }
    system("pause");
}

void Cajero::retiroPredeterminado3()
{
    int monto=50000;
    miCuenta.setMontoARetirar(miCuenta.getMontoARetirar()+monto);
    if(miCuenta.getMontoARetirar()>miCuenta.getLimite())//deberíamos introducir el monto en el costructor
        {
            cout<<"Ha alcanzado el limite diario"<<endl;
            miCuenta.setMontoARetirar(miCuenta.getMontoARetirar()- monto);
        }else{
                miCuenta.setSaldo(miCuenta.getSaldo()-monto);
                cout<<"Usted ha retirado: "<<monto<<endl;
            }
    system("pause");
}

void Cajero::setTruePin(int truePin)
{
    this->truePin=truePin;
}

void Cajero::setVerificador(bool verificador)
{
    this->verificador=verificador;
}

int Cajero::getTruePin()
{
  return truePin;
}

bool Cajero::getVerificador()
{
    return verificador;
}

long Cajero::consulataSaldo()
{
    return miCuenta.getSaldo();
}

Cajero::~Cajero()
{
    //dtor
}
