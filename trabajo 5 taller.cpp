#include <iostream>
#include <string>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <cstdlib>
int main() {
std::cout << std::fixed << std::setprecision(2) << std::sqrt(2) << '\n';
int n;std::cout << "Ingrese el tamano n de la matriz cuadrada (entre 1 y 50) : "; // numeros por encima de 50, es muy odee, demasiado pastel para esta vela
std::cin >> n;
if (n <= 0 || n > 50) {std::abort();}
int matriz[50][50];int i = 0;
while (i < n) {int j = 0;
while (j < n) {std::cout << "Ingrese el elemento [" << i << "][" << j << "]: ";
std::cin >> matriz[i][j];
j = j + 1;}
i = i + 1;}
std::cout << "\nMatriz ingresada:\n";
i = 0;
while (i < n) {int j = 0;
while (j < n) {std::cout << std::setw(4) << matriz[i][j];j = j + 1;}
std::cout << '\n';
i = i + 1;}
int es_triangular_superior = 1;int es_triangular_inferior = 1;
i = 0;
while (i < n) {int j = 0;
while (j < n) {
if (i > j && matriz[i][j] != 0) {es_triangular_superior = 0;}
else {if (i < j && matriz[i][j] != 0) {es_triangular_inferior = 0;}
else {}}
j = j + 1;}
i = i + 1;}
std::cout << "\nResultado:\n";
if (es_triangular_superior == 1 && es_triangular_inferior == 1) {std::cout << "La matriz es DIAGONAL.\n";} 
else if (es_triangular_superior == 1) {std::cout << "La matriz es TRIANGULAR SUPERIOR.\n";} 
else if (es_triangular_inferior == 1) {std::cout << "La matriz es TRIANGULAR INFERIOR.\n";} 
else {std::cout << "La matriz NO es triangular superior, ni triangular inferior, ni diagonal.\n";}
return 0;} // quiero usar or y and, quiero salir de esta carcel de && y ||