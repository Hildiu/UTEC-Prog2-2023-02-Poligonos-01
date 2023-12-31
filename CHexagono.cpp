//
// Created by MARIA HILDA BERMEJO RIOS on 11/5/23.
//

#include "CHexagono.h"

CHexagono::CHexagono(TipoNumerico lado)
{
  m_lado = lado;
}

TipoNumerico CHexagono::Apotema()
{
  return( m_lado*sqrt(3.0)/2.0);
}

TipoNumerico CHexagono::SemiPerimetro()
{
  return(3.0* m_lado);
}

TipoNumerico CHexagono::Area()
{
  return(SemiPerimetro()*Apotema());
}
