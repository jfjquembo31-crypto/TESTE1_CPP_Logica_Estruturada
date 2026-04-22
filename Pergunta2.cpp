#include <iostream>
using namespace std;

int main() {
    int codigos[10], quantidades[10], busca;
    bool encontrado = false;

    for(int i = 0; i < 10; i++) {
        cout << "Codigo do produto: ";
        cin >> codigos[i];
        cout << "Quantidade em stock: ";
        cin >> quantidades[i];
    }

    cout << "Digite o codigo a pesquisar: ";
    cin >> busca;

    for(int i = 0; i < 10; i++) {
        if(codigos[i] == busca) {
            cout << "Quantidade: " << quantidades[i] << endl;
            if(quantidades[i] < 5) {
                cout << "Stock Critico!" << endl;
            }
            encontrado = true;
            break;
        }
    }

    if(!encontrado) {
        cout << "Produto nao encontrado." << endl;
    }

    return 0;
}
