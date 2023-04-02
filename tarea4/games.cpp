// Juan Pablo Andrade
//8978239
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int cantidad_palabras;
    while (cin >> cantidad_palabras && cantidad_palabras != 0) {
        vector<string> palabras(cantidad_palabras);
        for (int i= 0; i < cantidad_palabras; i++) {
            cin >> palabras[i];
        }

        sort(palabras.begin(), palabras.end());

        string respuesta= "";
        string primera_palabra= palabras[(cantidad_palabras - 1) / 2];
        string segunda_palabra= palabras[cantidad_palabras / 2];
        int tam_minimo= min(primera_palabra.size(), segunda_palabra.size());

        bool bandera_salida= false;
        for (int i= 0; i < tam_minimo && !bandera_salida; i++) {
            if (primera_palabra[i] == segunda_palabra[i]) {
                respuesta += primera_palabra[i];
            } else {
                respuesta += primera_palabra[i] + 1;
                bandera_salida= true;
            }
        }

        cout << respuesta << endl;
    }

    return 0;
}



//El código tiene una complejidad de O(n log n + m)
// complejidad será O(n log n + m). 
//la complejidad dependerá de la cantidad de palabras y del tamaño de las palabras, pero en la gran mayoría de los casos la complejidad será dominada por la ordenación de las palabras
