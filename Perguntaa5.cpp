#include <iostream>
using namespace std;

int main() {
    string nomes[8];
    float tempos[8];

    for(int i = 0; i < 8; i++) {
        cout << "Nome do atleta: ";
        cin >> nomes[i];
        cout << "Tempo (s): ";
        cin >> tempos[i];
    }

    for(int i = 0; i < 8; i++) {
        for(int j = i + 1; j < 8; j++) {
            if(tempos[i] > tempos[j]) {
                swap(tempos[i], tempos[j]);
                swap(nomes[i], nomes[j]);
            }
        }
    }

    cout << "\nClassificacao:\n";
    for(int i = 0; i < 8; i++) {
        cout << i+1 << " - " << nomes[i] << " (" << tempos[i] << " s)" << endl;
    }

    return 0;
}
