#include <iostream>
#include <string>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <cstdlib>
int main() {
std::cout << std::fixed << std::setprecision(2) << std::sqrt(2) << '\n'; //ya eso lo tengo por costumbre
// INICIO DEL PUNTO A (:
int n; std::cout << "Ingrese un valor de n entre 0 y 50: "; std::cin >> n; 
if (n < 0 || n > 50) {std::abort();} //Breve, o me sirve o no le sirve a nadie
int matriz[50][50];int i = 0;
while (i < n) {int j = 0;
while (j < n) { matriz[i][j] = std::rand() % 51; j = j + 1;}
i = i + 1;}
std::cout << "Matriz:\n";
i = 0;
while (i < n) {int j = 0;
while (j < n) { std::cout << std::setw(4) << matriz[i][j]; j = j + 1;}
std::cout << '\n';
i = i + 1;}
// FIN DEL PUNTO A (:
// INICIO DEL PUNTO B {:
int suma_principal = 0;int suma_secundaria = 0;
i = 0;
while (i < n) {suma_principal = suma_principal + matriz[i][i];suma_secundaria = suma_secundaria + matriz[i][n - 1 - i];
i = i + 1;}
std::cout << "Suma de la diagonal principal: " << suma_principal << '\n';
std::cout << "Suma de la diagonal secundaria: " << suma_secundaria << '\n';
// FIN DEL PUNTO B {:
// INICIO DEL PUNTO C {:
int primera_fila[50];int ultima_columna[50];int vector_suma[50];
i = 0;
while (i < n) {primera_fila[i] = matriz[0][i];ultima_columna[i] = matriz[i][n - 1];
i = i + 1;}
i = 0;
while (i < n) {int c1 = primera_fila[i] * primera_fila[i];int c2 = ultima_columna[i] * ultima_columna[i];vector_suma[i] = c1 + c2; 
i = i + 1;}
std::cout << "Vector resultante : ";
i = 0;
while (i < n) {std::cout << vector_suma[i] << " ";
i = i + 1;}
std::cout << '\n';
// FIN DEL PUNTO C {:
// INICIO DEL PUNTO D [:
int contador_primos = 0;
i = 0;
while (i < n) {int j = 0;
while (j < n) {int num = matriz[i][j];int es_primo = 1;
if (num <= 1) {es_primo = 0;} 
else {int div = 2; 
while (div * div <= num) {if (num % div == 0) {es_primo = 0;}div = div + 1;}}
if (es_primo == 1) {contador_primos = contador_primos + 1;}
j = j + 1;}
i = i + 1;}
std::cout << "Numeros de elementos primos de la matriz: " << contador_primos << '\n';
// FIN DEL PUNTO D [:
// INICIO DEL PUNTO E /:
int pares = 0;int impares = 0;int div_tres = 0;
i = 0;
while (i < n) {int j = 0;
while (j < n) {int num = matriz[i][j];
if (num % 2 == 0) {pares = pares + 1;}else {impares = impares + 1;}if (num % 3 == 0) {div_tres = div_tres + 1;}
j = j + 1;}
i = i + 1;}
std::cout << "Numero de elementos pares de la matriz: " <<pares<< " | Numero de elementos impares de la matriz: " <<impares<< " | Numero de elementos divisibles por 3 de la matriz: " <<div_tres<< '\n';
// FIN DEL PUNTO E /:
// INICIO DEL PUNTO F ):
int suma_columnas[50];
i = 0;
while (i < n) {int suma_col = 0;int j = 0;
while (j < n) {suma_col = suma_col + matriz[j][i];j = j + 1;}suma_columnas[i] = suma_col;
i = i + 1;}
std::cout << "Tabla (Suma | Seno):\n";
i = 0;
while (i < n) {double rad = suma_columnas[i] * (3.141592653589793 / 180.0);double seno_val = std::sin(rad);
std::cout << std::setw(6) << suma_columnas[i] << " | " << std::setw(10) << seno_val << '\n';
i = i + 1;}
// FIN DEL PUNTO F ):
// INICIO DEL PUNTO G >:
int vector_1d[2500];int total_elem = n * n;int suma_total = 0;
i = 0;
while (i < n) {int j = 0;
while (j < n){ vector_1d[i * n + j] = matriz[i][j];suma_total = suma_total + matriz[i][j];
j = j + 1;}
i = i + 1;}
double promedio = (double)suma_total / total_elem;
std::cout << "Promedio de todos los elementos: " << promedio << '\n';std::cout << "Vector 1D dividido por promedio: ";
i = 0;
while (i < total_elem) {double res = 0.0;
if (promedio != 0.0) {res = vector_1d[i] / promedio;}std::cout << res << " ";
i = i + 1;}
std::cout << '\n';
return 0;}
//EL FINAL FELIZ