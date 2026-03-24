#include <algorithm>
#include <vector>
using namespace std;

int busqueda_dos_en_dos(vector<int>& lista, int n, int objetivo) {
    int i = 0;

    while (i < n && lista[i] < objetivo) {
        i += 2;
    }

    i = i - 1;

    int inicio = max(0, i);
    int fin = min(i + 1, n - 1);

    for (int j = inicio; j <= fin; j++) {
        if (lista[j] == objetivo) {
            return j;
        }
    }

    return -1;
}