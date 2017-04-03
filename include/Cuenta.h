//
// Created by Enzo Darío Quesada y Leonardo Hidalgo, 2/4/17 , all rights reserved.
//
#ifndef CUENTA_H
#define CUENTA_H
#include <iostream>
#include <sstream>
#include <stdlib.h>
using namespace std;

class Cuenta
{
public:
	Cuenta();
	Cuenta(long, long, long);
	virtual ~Cuenta();

	virtual long retiraSaldo()=0;//Método puro virtual

	void setSaldo(long);
	long getSaldo();

	void setMontoARetirar(long);
	long getMontoARetirar();

	void setLimite(long);
	long getLimite();

private:
	long saldo;
	long montoARetirar;
	long limite;

};

#endif // CUENTA_H
