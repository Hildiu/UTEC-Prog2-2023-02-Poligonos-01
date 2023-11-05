//
// Created by MARIA HILDA BERMEJO RIOS on 11/5/23.
//

#ifndef INC_03_POLIGONOS_01_CTRIANGULO_H
#define INC_03_POLIGONOS_01_CTRIANGULO_H

#include "Definiciones.h"

class CTriangulo
{
private:
    TipoNumerico m_lado;
public:
    CTriangulo() {};
    CTriangulo(TipoNumerico lado);
    virtual ~CTriangulo(){};
    //---metodo de acceso
    void set_m_Lado(TipoNumerico lado) {m_lado=lado;}
    TipoNumerico getLado(){ return m_lado;}

    TipoNumerico Apotema();
    TipoNumerico SemiPerimetro();
    TipoNumerico Area();
};


#endif //INC_03_POLIGONOS_01_CTRIANGULO_H
