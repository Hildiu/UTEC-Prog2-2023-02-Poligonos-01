
#include "Definiciones.h"
#include "CCuadrado.h"
#include "CTriangulo.h"
#include "CHexagono.h"

using namespace std;

int main()
{
  EnteroSinSigno Opcion;
  TipoNumerico lado;

  CTriangulo *pTriangulo= nullptr;
  CCuadrado *pCuadrado= nullptr;
  CHexagono *pHexagono = nullptr;

  do
  {
    cout << "Seleccione el tipo de poligono que quiere crear \n";
    cout << "1. Triangulo \n";
    cout << "2. Cuadrado \n";
    cout << "3. Hexagono \n";
    cout << "Ingresa el tipo : ";
    cin >> Opcion;
  }while( Opcion<1 || Opcion>3);

  cout <<"Lado : ";
  cin >> lado;
  cout << "\n";
  switch(Opcion)
  {
    case 1:
      pTriangulo = new CTriangulo(lado);
      cout << "El apotema del triangulo " << pTriangulo->Apotema()<<"\n";
      cout << "El semiperimetro del triangulo " << pTriangulo->SemiPerimetro()<< "\n";
      cout << "El area es " << pTriangulo->Area()<< "\n";
      delete pTriangulo;
      pTriangulo = nullptr;
      break;
    case 2:
      pCuadrado = new CCuadrado(lado);
      cout << "Apotema : "<< pCuadrado->Apotema() <<"\n";
      cout << "Semiperimetro :" << pCuadrado->SemiPerimetro() << "\n";
      cout << "El area es " << pCuadrado->Area()<< "\n";
      delete pCuadrado;
      pCuadrado = nullptr;
      break;
    case 3:
      pHexagono = new CHexagono(lado);
      cout << "Apotema : "<< pHexagono->Apotema() <<"\n";
      cout << "Semiperimetro :" << pHexagono->SemiPerimetro() << "\n";
      cout << "El area es " << pHexagono->Area()<< "\n";
      delete pHexagono;
      pHexagono = nullptr;
  }
  return 0;
}

