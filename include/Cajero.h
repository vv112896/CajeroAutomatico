//
// Created by Enzo Darío Quesada y Leonardo Hidalgo, 2/4/17 , all rights reserved.
//
#ifndef CAJERO_H
#define CAJERO_H
#include "Cliente.h"
#include <sstream>

class Cajero
{
    public:
        Cajero();
        Cajero(int,int, double, long);

        virtual ~Cajero();


        bool verificaPin();
        void retiroManual();
        void retiroPredeterminado1();
        void retiroPredeterminado2();
        void retiroPredeterminado3();

        void setTruePin(int);
        void setVerificador(bool);

        int getTruePin();
        bool getVerificador();
        long consulataSaldo();


    private:

        Cliente miCliente;
        Cuenta_Ahorros miCuenta;
        int truePin;
        bool verificador;
};

#endif // CAJERO_H
