// Juan Pablo Andrade
//8978239
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<char> alfabeto = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
                      'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
                      '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '.', ',', '?', '\'',
                      '!', '/', '(', ')', '&', ':', ';', '=', '+', '-', '_', '\"','@'};

vector<string> codigo_morse = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---",
                        "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-",
                        "..-", "...-", ".--", "-..-", "-.--", "--..", "-----", ".----", "..---",
                        "...--", "....-", ".....", "-....", "--...", "---..", "----.", ".-.-.-",
                        "--..--", "..--..", ".----.", "-.-.--", "-..-.", "-.--.", "-.--.-", ".-...",
                        "---...", "-.-.-.", "-...-", ".-.-.", "-....-", "..--.-", ".-..-.",".--.-."};
                        
int buscarCodigo(string codigo) {
    for (int i= 0; i < codigo_morse.size(); i++) {
        if (codigo_morse[i] == codigo) {
            return i;
        }
    }
    return -1; 
}

int main() {
    int t;
    cin >> t;
    cin.ignore(); 

    int i = 1;
    while (i <= t) {
        string mensaje;
        getline(cin, mensaje);

        cout << "Message #" << i << endl;

        string codigo_actual= "";
        int j = 0;
        while (j < mensaje.size()) {
            if (mensaje[j] == ' ') {
                if (codigo_actual != "") {
                    int indice= buscarCodigo(codigo_actual);
                    if (indice != -1) {
                        cout << alfabeto[indice];
                    }
                    else if (codigo_actual == "  ") { 
                        cout << " ";
                    }
                    codigo_actual = "";
                }
                else {
                    cout << " ";
                }
            }
            else {
                codigo_actual += mensaje[j];
            }
            j++;
        }

        int indice= buscarCodigo(codigo_actual);
        if (indice != -1) {
            cout << alfabeto[indice];
        }

        cout << endl << endl;

        i++;
    }
    return 0;
}

//complajidad :el código tiene una complejidad lineal O(n*m)
//La complejidad del código es proporcional al número de mensajes a decodificar, esto se multiplica con la longitud del mensaje más largo.

