#include <iostream>
using namespace std;

int main(){
    float vetor[10] = {};
    int i, tamanho;
    float media;
    float soma = 0;

    cout << "Digite a quantidade de atletas: " << endl;
    cin >> tamanho;

    cout << "Digite o peso dos atletas: " << endl;
    for(i = 0; i < tamanho; i++) {
        cin >> vetor[i];
        soma+=vetor[i];    
    } 
    media = soma/tamanho;
    cout << "Posicoes dos atletas acima da media: " << endl;
    for(i = 0; i < tamanho; i++) {
        if (vetor[i] > media) {
            cout << i << endl; 
        }
    }
    return 0;
    
}
