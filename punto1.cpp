#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> paises(5);

    cout << "Ingrese el nombre de 5 países:" << endl;

    for (int i = 0; i < 5; i++) {
        cout << "Pais " << i + 1 << ": " << endl;
        cin >> paises[i];
    }

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (paises[i] > paises[j]) {
                string aux = paises[i];
                paises[i] = paises[j];
                paises[j] = aux;
            }
        }
    }

    cout << "Países ordenados alfabéticamente:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << paises[i] << endl;
    }

    return 0;
}

