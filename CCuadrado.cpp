//
// Created by MARIA HILDA BERMEJO RIOS on 11/5/23.
//

#include "CCuadrado.h"


CCuadrado::CCuadrado(TipoNumerico lado)
{
  m_lado = lado;
}

TipoNumerico CCuadrado::Apotema()
{
  return (m_lado/2.0);
}

TipoNumerico CCuadrado::SemiPerimetro()
{
  return( 2.0*m_lado);
}

TipoNumerico CCuadrado::Area()
{
  return(SemiPerimetro()*Apotema());
}

