#include <iostream>
using namespace std;

int main() {
    string nomes[15];
    float notas[15];
    int aprovados = 0;

    for(int i = 0; i < 15; i++) {
        cout << "Nome: ";
        cin >> nomes[i];
        cout << "Nota: ";
        cin >> notas[i];
    }

    cout << "\nAlunos aprovados:\n";

    for(int i = 0; i < 15; i++) {
        if(notas[i] >= 10) {
            cout << nomes[i] << endl;
            aprovados++;
        }
    }

    float percentagem = (aprovados / 15.0) * 100;
    cout << "Percentagem de aprovacao: " << percentagem << "%" << endl;

    return 0;
}
