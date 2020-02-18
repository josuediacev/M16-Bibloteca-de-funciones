#include <iostream>
#include "BiblioEcu2grado.h"
using namespace std;
//Variables globales
double a, b, c;
double x1, x2;
int numSols;

void pedirCoeficientes(double&, double&, double&);
void presentarResultados(double, double, double, double, double, int);

int main() {
    pedirCoeficientes(a, b, c);
    numSols = calcularResultados(a, b, c, x1, x2);
    presentarResultados(a, b, c, x1, x2, numSols);
}

void pedirCoeficientes(double& oa, double& ob, double& oc) {
    setlocale(LC_ALL, "");
    cout << "Introduzca el valor del coeficiente a: ";
    cin >> oa;
    cout << "Introduzca el valor del coeficiente b: ";
    cin >> ob;
    cout << "Introduzca el valor del coeficiente c: ";
    cin >> oc;
}

void presentarResultados(double ea, double eb, double ec, double ix1, double ix2, int inumSols) {
    cout << "La ecuación con coeficientes a= " << ea << " b=" << eb << " c=" << ec;
    if (numSols == 0) {
        cout << " no tiene soluciones reales";
    }
    if (numSols == 1) {
        cout << " tiene una solucion real: " << endl << "x1=" << ix1;
    }
    if (numSols == 2) {
        cout << " tiene dos soluciones reales: " << endl << "x1=" << ix1 << endl << "x2=" << ix2;
    }
}


