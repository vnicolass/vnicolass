#include <iostream>
using namespace std;

int main(){
    int positivos = 0, negativos = 0;
    int soma_pos = 0, soma_neg = 0, total = 0, soma = 0;
    int num, media = 0;
    int total_geral = 0; 

    cin >> num;
    
    int maior = num;
    int menor = num;

    while (num != 0){
        
        cin >> num;

        if (num != 0) {
            total_geral++; 

            if (num > 0){
                positivos++;
                soma_pos = soma_pos + num;
            }
            if (num < 0){
                negativos++;
                soma_neg = soma_neg + num;
            }
            if (num % 2 == 0){
                soma = soma + num;
                total++;
            }
            if (maior < num){
                maior = num;
            }
            if (menor > num){
                menor = num;
            }
        }
    }

    if (total_geral == 0) {
        cout << "Nenhum numero foi informado." << endl;
    }
    
    if (total_geral > 0) {
        cout << "Quantidade de positivos: " << positivos << endl;
        cout << "Quantidade de negativos: " << negativos << endl;
        cout << "Soma dos positivos: " << soma_pos << endl;
        cout << "Soma dos negativos: " << soma_neg << endl;
        
        if (total == 0) {
            cout << "Media dos pares: Nao e possivel calcular a media dos pares" << endl;
        }
        if (total > 0) {
            media = soma / total;
            cout << "Media dos pares: " << media << endl;
        }
        
        cout << "Maior numero: " << maior << endl;
        cout << "Menor numero: " << menor << endl;
    }

    return 0;
}
