// Juan Pablo Andrade
//8978239
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int cant_vueltas, num_pilotos, sistemas_puntuacion;
    cin >> cant_vueltas >> num_pilotos;
    
    while (cant_vueltas != 0 && num_pilotos != 0) {
        vector<vector<int>> resultados(cant_vueltas, vector<int>(num_pilotos));
        for (int i= 0; i < cant_vueltas; i++) {
            for (int j= 0; j < num_pilotos; j++) {
                cin >> resultados[i][j];
            }
        }
        cin >> sistemas_puntuacion;
        while (sistemas_puntuacion--) {
            int num_posiciones;
            cin >> num_posiciones;
            vector<int> puntos(num_posiciones);
            for (int i= 0; i < num_posiciones; i++) {
                cin >> puntos[i];
            }
            vector<int> total_puntos(num_pilotos);
            for (int i= 0; i < cant_vueltas; i++) {
                for (int j= 0; j < num_pilotos; j++) {
                    int posicion= resultados[i][j] - 1;
                    if (posicion < num_posiciones) {
                        total_puntos[j] += puntos[posicion];
                    }
                }
            }
            int max_puntos= *max_element(total_puntos.begin(), total_puntos.end());

            bool piloto_maximo= true;
            for (int i = 0; i < num_pilotos; i++) {
                if (total_puntos[i] == max_puntos) {
                    if (!piloto_maximo) {
                        cout << " ";
                    }
                    cout << i+1;
                    piloto_maximo= false;
                }
            }
            cout << endl;
        }
        cin >> cant_vueltas >> num_pilotos;
    }

    return 0;
}
//la complejidad del codigo es O(c * p * s * log p)
//esto porque el bucle interno todavía tiene que procesar todos los resultados de cada vuelta para cada sistema de puntuación 
//y el acceso a los elementos de los vectores que almacenan los puntos sigue siendo necesario
