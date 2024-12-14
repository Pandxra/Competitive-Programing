#include <iostream>

using namespace std;

int main () {
    int n;
    cin >> n;

    vector <int> arr (n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int i; // somatório das somas feitas em cada rodada
    int rodadas = 0;

    do {

        // uma rodada de somas
        i = 0; 
        for (int j = 1; j < n; j++){
            
            // se o elemento atual é menor que o elemento anterior somamos 1
            if (arr[j] <= arr[j-1]){
                arr[j]++;
                i++; // incementamos o valor de somas ocorridas naquela rodada
            }
        }
        // se depois de sair da rodada as somas feitas forem maior que 1, aquela rodada teve modificacoes entao foi valida

        if (i > 0){
            rodadas++;
        }

    } while ( i > 0);

    cout << rodadas << endl;

    return 0;
}