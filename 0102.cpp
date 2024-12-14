#include <iostream>
#include <string>

using namespace std;

int main () {
    string dna;
    cin >> dna;

    int sequencia_max = 0;
    int sequencia_atual = 1; // considerando que exista pelo menos uma letra na sequencia

    for (int i = 1; i < dna.size(); i++){

        // se a letra atual é igual a letra anterior a sequencia está adicionando mais um item ao valor atual, caso contrário o valor da sequencia é inicializado pra 1

        if (dna[i] == dna[i-1]){
            sequencia_atual++;
        }
        else { // primeiro elemento da nova sequencia
            sequencia_atual = 1;
        }

        // verificando o tamanho máximo da sequencia encontrado até agora
        if (sequencia_atual > sequencia_max){
            sequencia_max = sequencia_atual;
        }
    }

    cout << sequencia_max << endl;

    return 0;
}