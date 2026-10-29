#include <iostream>
using namespace std;

int main(){
    float vetor[10] = {};
    int tamanho=10, i;
    float soma = 0;
    int quantidade_pstv= 0;

    
    for(i=0;i<tamanho;i++){
    cout << "Digite os numeros: "<< i + 1 << ": " << endl;   
         cin>>vetor[i];
        if(vetor[i] >= 0){
            quantidade_pstv++;
        }
        if(vetor[i] < 0){
            soma += vetor[i];
        }
        
    }
    cout << " Numeros digitados de tras para frente: " << endl;
    for(int j = tamanho - 1; j >= 0; j--) {
        cout << vetor[j] << endl;
    }
    
    cout << "Quantidade de positivos: " << quantidade_pstv << " A soma dos negativos: " << soma << endl;


    return 0;
}
