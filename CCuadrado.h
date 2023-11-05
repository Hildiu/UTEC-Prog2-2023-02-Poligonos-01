//
// Created by MARIA HILDA BERMEJO RIOS on 11/5/23.
//

#ifndef INC_03_POLIGONOS_01_CCUADRADO_H
#define INC_03_POLIGONOS_01_CCUADRADO_H


#include "Definiciones.h"

class CCuadrado
{
private:
    TipoNumerico m_lado;
public:
    CCuadrado() {};
    CCuadrado(TipoNumerico lado);
    virtual ~CCuadrado(){};
    //---metodo de acceso
    void set_m_Lado(TipoNumerico lado){m_lado=lado;}
    TipoNumerico getLado(){ return m_lado;}

    TipoNumerico Apotema();
    TipoNumerico SemiPerimetro();
    TipoNumerico Area();
};


#endif //INC_03_POLIGONOS_01_CCUADRADO_H
