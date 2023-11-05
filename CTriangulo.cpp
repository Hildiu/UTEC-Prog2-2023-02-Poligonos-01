//
// Created by MARIA HILDA BERMEJO RIOS on 11/5/23.
//

#include "CTriangulo.h"

CTriangulo::CTriangulo(TipoNumerico lado)
{
  m_lado = lado;
}

TipoNumerico CTriangulo::Apotema()
{
  return (m_lado * sqrt(3)/6.0);
}

TipoNumerico CTriangulo::SemiPerimetro()
{
  return (3.0 * m_lado/2.0);
}

TipoNumerico CTriangulo::Area()
{
  return(SemiPerimetro()*Apotema());
}
