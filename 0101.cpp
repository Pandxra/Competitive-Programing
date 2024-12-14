#include <iostream>
#include <cmath>
using namespace std;

int main (){
    int arr_size = 0;
    cin >> arr_size;
    arr_size--;

    vector < int > arr_numbers (arr_size); // declaracao de veetor dinamico

    for (int i = 0; i < arr_size; i++){
        cin >> arr_numbers[i];
    }
    // ordenacao do vetor
    sort(arr_numbers.begin(), arr_numbers.end());

    // procura pelo item faltando

    for (int i = 0; i < arr_size - 1; i++){
        // se a difenca absoluta entre dois valores consectuvos for maior que 1, siginifica que o digito faltante e o valor atual + 1
        if (abs(arr_numbers[i] - arr_numbers[i+1]) > 1){
            cout << arr_numbers[i] + 1 << endl;
        }
    }

    return 0;
}