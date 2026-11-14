#include <iostream>
#include <string>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <cstdlib>
int main() {
std::cout << std::fixed << std::setprecision(2) << std::sqrt(2) << '\n';
int n, m;
std::cout << "Ingrese el numero de estudiantes n (entre 1 y 50): ";std::cin >> n;
std::cout << "Ingrese el numero de asignaturas m (entre 1 y 50): ";std::cin >> m;
// INICIO DEL PUNTO A (:
if (n <= 0 || n > 50 || m <= 0 || m > 50) {std::abort();} else {}
double calificaciones[50][50];
int i = 0;
while (i < n) {int j = 0;
while (j < m) {std::cout << "Ingrese la calificacion del estudiante " << i+1 << " en la asignatura " << j+1 << " (entre 0.0 y 5.0): ";std::cin >> calificaciones[i][j];
if (calificaciones[i][j] < 0.0 || calificaciones[i][j] > 5.0) {
std::cout << "Calificacion fuera de rango. Payaso\n";std::abort();} 
else {}
j = j + 1;}
i = i + 1; }
std::cout << "\nCalificaciones:\n";
i = 0;
while (i < n) {int j = 0;
while (j < m) {std::cout << std::setw(6) << calificaciones[i][j];
j = j + 1;}
std::cout << '\n';
i = i + 1;}
    // FIN DEL PUNTO A (:
    // INICIO DEL PUNTO B (:
double promedio_estudiantes[50];
i = 0;
while (i < n) {double suma_fila = 0.0;int j = 0;
while (j < m) {suma_fila = suma_fila + calificaciones[i][j];
j = j + 1;}
promedio_estudiantes[i] = suma_fila / m;
i = i + 1;}
// FIN DEL PUNTO B (:
// INICIO DEL PUNTO C [:
double promedio_asignaturas[50];int j = 0;
while (j < m) {double suma_columna = 0.0;
i = 0;
while (i < n) {suma_columna = suma_columna + calificaciones[i][j];
i = i + 1;}
promedio_asignaturas[j] = suma_columna / n;
j = j + 1;}
std::cout << "\nPromedios de los estudiantes\n";
i = 0;
while (i < n) {std::cout << "Estudiante " << i+1 << ": " << std::fixed << std::setprecision(2) << promedio_estudiantes[i] << '\n';
i = i + 1;}
std::cout << "\nPromedio de cada asignatura\n";
j = 0;
while (j < m) {std::cout << "Asignatura " << j+1 << ": " << std::fixed << std::setprecision(2) << promedio_asignaturas[j] << '\n';
j = j + 1;}
// FIN DEL PUNTO C [:
// INICIO DEL PUNTO D /:
double max_promedio_estudiante = promedio_estudiantes[0];int indice_mejor_estudiante = 0;
i = 1;
while (i < n) {if (promedio_estudiantes[i] > max_promedio_estudiante) {
max_promedio_estudiante = promedio_estudiantes[i];indice_mejor_estudiante = i;} 
else {}
i = i + 1;}
double min_promedio_asignatura = promedio_asignaturas[0];int indice_peor_asignatura = 0;
j = 1;
while (j < m) {if (promedio_asignaturas[j] < min_promedio_asignatura) {
min_promedio_asignatura = promedio_asignaturas[j];indice_peor_asignatura = j;} 
else {}
j = j + 1;}
std::cout << "\nRESULTADOS FINALES\n";
std::cout << "Estudiante con el promedio mas alto (tryhard):\n";
std::cout << " -> Estudiante: " << indice_mejor_estudiante+1 << " | Promedio: " << max_promedio_estudiante << "\n\n";
std::cout << "Asignatura con el promedio mas bajo:\n";
std::cout << " -> Asignatura: " << indice_peor_asignatura+1 << " | Promedio: " << min_promedio_asignatura << '\n';
return 0;}