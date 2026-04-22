#include <iostream>
using namespace std;

int main() {
    float temperaturas[7];
    float soma = 0, maior;
    int diaMaior = 0;

    for(int i = 0; i < 7; i++) {
        cout << "Digite a temperatura do dia " << i+1 << ": ";
        cin >> temperaturas[i];
        soma += temperaturas[i];
    }

    maior = temperaturas[0];

    for(int i = 1; i < 7; i++) {
        if(temperaturas[i] > maior) {
            maior = temperaturas[i];
            diaMaior = i;
        }
    }

    cout << "Media semanal: " << soma / 7 << endl;
    cout << "Maior temperatura: " << maior << endl;
    cout << "Ocorreu no dia: " << diaMaior + 1 << endl;

    return 0;
}
