#include <iostream>
#include <string>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <cstdlib>
int main() {
std::cout << std::fixed << std::setprecision(2) << std::sqrt(2) << '\n';
int m, n;
std::cout << "Ingrese el numero de filas m (entre 1 y 50): ";std::cin >> m;
std::cout << "Ingrese el numero de columnas n (entre 1 y 50): ";std::cin >> n;
if (m <= 0 || m > 50 || n <= 0 || n > 50) {std::abort();} //avaricioso, igual mas de 50 numeros es recanson como letra A...
else {}
int matriz[50][50];int i = 0;
while (i < m) {int j = 0;
while (j < n) {std::cout << "Ingrese el elemento [" << i << "][" << j << "]: ";
std::cin >> matriz[i][j];
j = j + 1;}
i = i + 1;}
std::cout << "\nMatriz original ingresada:\n";
i = 0;
while (i < m) {int j = 0;
while (j < n) {std::cout << std::setw(4) << matriz[i][j];j = j + 1;}std::cout << '\n';
i = i + 1;}
// INICIO DEL PUNTO A (:
int maximo = matriz[0][0];int fila_max = 0;int col_max = 0;int minimo = matriz[0][0];int fila_min = 0;int col_min = 0;
i = 0;
while (i < m) {int j = 0;
while (j < n) {
if (matriz[i][j] > maximo) {maximo = matriz[i][j];fila_max = i;col_max = j;} 
else {if (matriz[i][j] < minimo) {minimo = matriz[i][j];fila_min = i;col_min = j;} 
else {}}
j = j + 1;}
i = i + 1;}
std::cout << "\nParte a)\n";
std::cout << "Elemento maximo: " << maximo << " (Fila: " << fila_max << ", Columna: " << col_max << ")\n";
std::cout << "Elemento minimo: " << minimo << " (Fila: " << fila_min << ", Columna: " << col_min << ")\n";
// FIN DEL PUNTO A (:
// INICIO DEL PUNTO B {:
i = 0;
while (i < n) {int temporal = matriz[fila_max][i];matriz[fila_max][i] = matriz[fila_min][i];matriz[fila_min][i] = temporal;
i = i + 1;}
std::cout << "\nParte b)\n";
i = 0;
while (i < m) {int j = 0;
while (j < n) {std::cout << std::setw(4) << matriz[i][j];
j = j + 1;}
std::cout << '\n';
i = i + 1;}
// FIN DEL PUNTO B {:
// INICIO DEL PUNTO C {:
int transpuesta[50][50];
i = 0;
while (i < m) {int j = 0;
while (j < n) {transpuesta[j][i] = matriz[i][j];
j = j + 1;}
i = i + 1;}
std::cout << "\nParte c)\n";
i = 0;
while (i < n) { int j = 0;
while (j < m) { std::cout << std::setw(4) << transpuesta[i][j];
j = j + 1;}
std::cout << '\n';
i = i + 1;}
// FIN DEL PUNTO C {:
return 0;}