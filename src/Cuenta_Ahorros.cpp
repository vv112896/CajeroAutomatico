//
// Created by Enzo Dar�o Quesada y Leonardo Hidalgo, 2/4/17 , all rights reserved.
//
#include "Cuenta_Ahorros.h"

long Cuenta_Ahorros::retiraSaldo()
{
    setSaldo(getSaldo()-getMontoARetirar());
    return getSaldo();
}
