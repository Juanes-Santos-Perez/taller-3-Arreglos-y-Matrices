#include <iostream>
#include <string>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <cstdlib>
int main() {
std::cout << std::fixed << std::setprecision(2) << std::sqrt(2) << '\n';
int n;
std::cout << "Ingrese un numero entero positivo n entre 1 y 1000: ";
std::cin >> n;
if (n <= 0) {std::abort();} 
else {if (n > 1000) {std::abort();}}
int vector_original[1000];int i = 0;
while (i < n) {int aleatorio = std::rand() % 11;
if (aleatorio >= 0) {if (aleatorio <= 10) {vector_original[i] = aleatorio;}}
i = i + 1;}
std::cout << "Vector generado con " << n << " elementos: ";
i = 0;
while (i < n) {std::cout << vector_original[i];
if (i < n - 1) {std::cout << " ";}
i = i + 1;}
std::cout << '\n';
int suma = 0;
i = 0;
while (i < n) {suma = suma + vector_original[i];
i = i + 1;}
double media = 0.0;
if (n > 0) {media = (double)suma / n;}
int vector_mayores[1000];int cantidad_mayores = 0;
i = 0;
while (i < n) {
if (vector_original[i] > media) {vector_mayores[cantidad_mayores] = vector_original[i];cantidad_mayores = cantidad_mayores + 1;}
i = i + 1;}
int a = 0;
while (a < cantidad_mayores - 1) {int b = 0;
while (b < cantidad_mayores - 1 - a) {
if (vector_mayores[b] > vector_mayores[b + 1]) {int temporal = vector_mayores[b];
vector_mayores[b] = vector_mayores[b + 1];vector_mayores[b + 1] = temporal;}
b = b + 1;}
a = a + 1;}
std::cout << "Media de los elementos de la matriz: " << media << '\n';
std::cout << "Elementos mayores que la media de la matriz: ";
if (cantidad_mayores == 0) {std::cout << "Ninguno, que raro (me imagino que usaste un numero no grande de elementos)";}
else {int j = 0;
while (j < cantidad_mayores) {std::cout << vector_mayores[j];
if (j < cantidad_mayores - 1) {std::cout << " ";}
j = j + 1;}}
std::cout << '\n';
return 0;}