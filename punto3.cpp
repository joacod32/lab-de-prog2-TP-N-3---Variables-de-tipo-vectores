#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de elementos: " << endl;
    cin >> n;

    vector<int> numeros(n);

    cout << "Ingrese " << n << " números enteros:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Número " << i + 1 << ": " << endl;
        cin >> numeros[i];
    }

    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (numeros[j] > numeros[j + 1]) {
                int aux = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = aux;
            }
        }
    }

    cout << "Vector ordenado:" << endl;
    for (int i = 0; i < n; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}

