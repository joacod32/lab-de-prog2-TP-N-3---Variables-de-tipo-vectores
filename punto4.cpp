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

    
    for (int i = 1; i < n; i++) {
        int clave = numeros[i];
        int j = i - 1;

        while (j >= 0 && numeros[j] > clave) {
            numeros[j + 1] = numeros[j];
            j--;
        }
        numeros[j + 1] = clave;
    }

    cout << "Vector ordenado:" << endl;
    for (int i = 0; i < n; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}

