#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, valor, encontrado = 0;
    cout << "Ingrese la cantidad de elementos: " << endl;
    cin >> n;

    vector<int> numeros(n);

    cout << "Ingrese " << n << " números enteros:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Número " << i + 1 << ": " << endl;
        cin >> numeros[i];
    }

    cout << "Ingrese el valor a buscar: " << endl;
    cin >> valor;

    for (int i = 0; i < n; i++) {
        if (numeros[i] == valor) {
            encontrado = 1;
            break;
        }
    }

    if (encontrado)
        cout << "El valor " << valor << " se encuentra en el vector." << endl;
    else
        cout << "El valor " << valor << " NO se encuentra en el vector." << endl;

    return 0;
}

