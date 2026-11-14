#include <iostream>
#include <string>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <cstdlib>
// Función extra, hate this somuch
int sumar_fila(int fila[], int columnas) {int suma = 0;int j = 0;
while (j < columnas) {suma = suma + fila[j];
j = j + 1;}
return suma;}
int main() {
std::cut << std::fixed << std::setprecision(2) << std::sqrt(2) << '\n';
int m, p_A, p_B, q; // NO SE VE TAN BIEN CON LOS _ PERO ES PARA QUE SEA MAS CLARO CUAL ES CUAL, LUEGO ME TROLLEO
// INICIO DEL PUNTO A (:
int dimensiones_validas = 0;
while (dimensiones_validas == 0) {
std::cout << "Ingrese las filas de la matriz A (m, entre 1 y 50): ";std::cin >> m;
std::cout << "Ingrese las columnas de la matriz A (p_A, entre 1 y 50): ";std::cin >> p_A;
std::cout << "Ingrese las filas de la matriz B (p_B, entre 1 y 50): ";std::cin >> p_B;
std::cout << "Ingrese las columnas de la matriz B (q, entre 1 y 50): ";std::cin >> q;
if (m <= 0 || m > 50 || p_A <= 0 || p_A > 50 || p_B <= 0 || p_B > 50 || q <= 0 || q > 50) {std::cout << "Error: Las dimensiones deben estar estrictamente entre 1 y 50. Avaro.\n";
std::abort();} 
else {if (p_A == p_B) {dimensiones_validas = 1;} 
else {std::cout << "Error: El numero de columnas de A (" << p_A << ") debe ser igual al numero de filas de B (" << p_B << "). Intente nuevamente /: .\n\n";}}}
int matrizA[50][50];int matrizB[50][50];int matrizC[50][50];
// FIN DEL PUNTO A (:
// INICIO DEL PUNTO B /:
std::cout << "\nIngreso de datos para la matriz A (" << m << " x " << p_A << ")\n";
int i = 0;
while (i < m) {int j = 0;
while (j < p_A) {std::cout << "A[" << i << "][" << j << "]: ";std::cin >> matrizA[i][j];
j = j + 1;}
i = i + 1;}
std::cout << "\nIngreso de datos para la Matriz B (" << p_B << " x " << q << ")\n";
i = 0;
while (i < p_B) {int j = 0;
while (j < q) {std::cout << "B[" << i << "][" << j << "]: "; std::cin >> matrizB[i][j];
j = j + 1;}
i = i + 1;}
// FIN DEL PUNTO B /:
// INICIO DEL PUNTO C |:
i = 0;
while (i < m) {int j = 0;
while (j < q) {matrizC[i][j] = 0;
j = j + 1;}
i = i + 1;}
i = 0;
while (i < m) {int j = 0;
while (j < q) {int k = 0;
while (k < p_A) {matrizC[i][j] = matrizC[i][j] + (matrizA[i][k] * matrizB[k][j]);
k = k + 1;} // usando k, Los Desperados
j = j + 1;}
i = i + 1;}
std::cout << "\n MATRIZ A \n";
i = 0;
while (i < m) {int j = 0;
while (j < p_A) {std::cout << std::setw(6) << matrizA[i][j];
j = j + 1;}
std::cout << '\n';
i = i + 1;}
std::cout << "\n MATRIZ B \n";
i = 0;
while (i < p_B) {int j = 0;
while (j < q) {std::cout << std::setw(6) << matrizB[i][j];
j = j + 1;}
std::cout << '\n';
i = i + 1;}
std::cout << "\n MATRIZ C (A x B) =\n";
i = 0;
while (i < m) {int j = 0;
while (j < q) {std::cout << std::setw(6) << matrizC[i][j];
j = j + 1;}
std::cout << '\n';
i = i + 1;}
// FIN DEL PUNTO C |:
// INICIO DEL PUNTO D ):
std::cout << "\nd) Suma de los elementos de cada fila de la matriz C\n";
i = 0;
while (i < m) {int suma_fila_actual = sumar_fila(matrizC[i], q);
std::cout << "Suma de la fila " << i << ": " << suma_fila_actual << '\n';
i = i + 1;}
return 0;}