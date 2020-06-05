#include <random>
#include <vector>

#include "funciones.h"

int aleatoreo() {
    return aleatoreo(0, 2000000);
}

int aleatoreo(int inferior, int superior) {
    std::random_device dispositivo;

    std::uniform_int_distribution<int> distribucion(inferior, superior);

    return distribucion(dispositivo);
}

std::vector<int> generarVector(int largo) {
    std::vector<int> arreglo;
    for (int i = 0; i < largo; i++) {
        int numero = aleatoreo();
        arreglo.push_back(numero);
    }
    return arreglo;
}

void imprimirVector(std::vector<int> arreglo) {
    std::cout << std::endl << "=== Vector ===" << std::endl;
    for (long unsigned int i = 0; i < arreglo.size(); i++) {
        std::cout << "vector[" << i << "] = " << arreglo.at(i) << std::endl;
    }
}

void participantes() {
    std::cout << std::endl << "=== Ejemplo de Analisis ===" << std::endl;
    std::cout << std::endl << "Jennifer Portiño" << std::endl;
    std::cout << std::endl << "Braulio Argadoña" << std::endl;
    std::cout << std::endl << "Fanny Rivero" << std::endl;
}

