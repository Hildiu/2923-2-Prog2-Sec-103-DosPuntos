//------------------------------------------------
// Dato de Entrada: x1, y1, x2, y2 (double)
// Dato de Salida: distancia (double)
//-------------------------------------------------

#include "CPunto.h"

int main()
{ tnumero x1, y1, x2, y2;

  cout << "Punto 1\n";
  cout << "x1 : " ; cin >> x1;
  cout << "y1 : ";  cin >> y1;

  cout << "Punto 2\n";
  cout << "x2 : " ; cin >> x2;
  cout << "y2 : ";  cin >> y2;

  CPunto  p1(x1,y1);
  CPunto  p2(x2, y2);

  cout << "La distancia es: " << p1.distancia(p2) << "\n";
  cout << "La distancia es: "  << p2.distancia(p1) << "\n";

  //---- ahora los puntos seran creados como objetos dinamicos
  cout << "Usando objetos dinamicos\n";
    cout << "Punto 1\n";
    cout << "x1 : " ; cin >> x1;
    cout << "y1 : ";  cin >> y1;

    cout << "Punto 2\n";
    cout << "x2 : " ; cin >> x2;
    cout << "y2 : ";  cin >> y2;

    CPunto *pP1 = new CPunto(x1,y1);
    CPunto *pP2  = new CPunto(x2,y2);

    cout << "La distancia entre los puntos es: " << pP1->distancia(*pP2) << "\n";
    delete  pP1;
    pP1 = nullptr;
    delete pP2;
    pP2 = nullptr;
    return 0;
}
