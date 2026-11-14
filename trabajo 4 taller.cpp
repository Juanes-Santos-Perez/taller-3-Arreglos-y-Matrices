#include <iostream>
#include <string>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <cstdlib>
// La función auxiliar va FUERA, muy molesto tuve que aprender pa que es asi
int calcular_factorial(int num) {int resultado = 1;
if (num == 0) {resultado = 1;} 
else {int contador = 1;
while (contador <= num) {resultado = resultado * contador;contador = contador + 1;}}
return resultado;}

int main() {std::cout << std::fixed << std::setprecision(2) << std::sqrt(2) << '\n'; // Ya me acostumbre
int n;
std::cout << "Ingrese un numero entero positivo n (ENTRE 0 Y 20, no hay que ser avaricioso): ";std::cin >> n;
if (n <= 0) {std::abort();}
else {if (n > 20) { // con numero mayor a 20, el vector se desborda, demasiado grande para el tamaño del vector, factorial de 20 es 2432902008176640000, que es demasiado grande para un int
std::abort();}}
int vector_original[20];int vector_factoriales[20];int i = 0;
while (i < n) {int aleatorio = std::rand() % 11; // 11 para que el numero aleatorio sea entre 0 y 10, no lo explique la otra vez
if (aleatorio >= 0) {if (aleatorio <= 10) {vector_original[i] = aleatorio;}}
i = i + 1;}
std::cout << "Vector generado entre 0 y 10: ";
i = 0;
while (i < n) {std::cout << vector_original[i];
if (i < n - 1) {std::cout << " ";}
i = i + 1;} // barra espaciadora, this code shi so easy
std::cout << '\n';
i = 0;
while (i < n) {vector_factoriales[i] = calcular_factorial(vector_original[i]);
i = i + 1;}
std::cout << "Vector de factoriales entre 0 y 10: ";
i = 0;
while (i < n) {std::cout << vector_factoriales[i];
if (i < n - 1) {std::cout << " ";}
i = i + 1;}
std::cout << '\n';
return 0;}