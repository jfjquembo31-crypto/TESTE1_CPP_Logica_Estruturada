#include <iostream>
using namespace std;

int main() {
    string nomes[20];
    float precos[20];
    string busca;
    bool encontrado = false;

    for(int i = 0; i < 20; i++) {
        cout << "Nome do produto: ";
        cin >> nomes[i];
        cout << "Preco: ";
        cin >> precos[i];
    }

    cout << "Digite o nome do produto: ";
    cin >> busca;

    for(int i = 0; i < 20; i++) {
        if(nomes[i] == busca) {
            cout << "Preco: " << precos[i] << " MT" << endl;
            encontrado = true;
            break;
        }
    }

    if(!encontrado) {
        cout << "Produto nao encontrado." << endl;
    }

    return 0;
}
