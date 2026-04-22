#include <iostream>
using namespace std;

int main() {
    string nomes[5];
    float precos[5];
    int quantidades[5];
    float total = 0;

    for(int i = 0; i < 5; i++) {
        cout << "Nome do item: ";
        cin >> nomes[i];
        cout << "Preco unitario: ";
        cin >> precos[i];
        cout << "Quantidade: ";
        cin >> quantidades[i];
    }

    cout << "\nSubtotais:\n";

    for(int i = 0; i < 5; i++) {
        float subtotal = precos[i] * quantidades[i];
        cout << nomes[i] << ": " << subtotal << " MT" << endl;
        total += subtotal;
    }

    if(total > 1000) {
        float desconto = total * 0.10;
        total -= desconto;
        cout << "Desconto aplicado: " << desconto << " MT" << endl;
    }

    cout << "Total da fatura: " << total << " MT" << endl;

    return 0;
}
