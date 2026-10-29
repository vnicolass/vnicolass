/*#include <iostream>
using namespace std;
int main (){
    int vetor[8]{};
    int i, tamanho=8;
    int maior = 0, menor = 0, indice_maior, indice_menor, acima_media=0, abaixo_media=0, soma_pares = 0;
    float media;

    for(i=0;i<tamanho;i++){
        cin>>vetor[i];
        if (vetor[i] < maior){
            maior = vetor[i];
        }
        if (vetor[i] > menor){
            menor = vetor[i];
        }         
    } 
    media = vetor[i]/tamanho;
    cout << "Indice do maior: " << endl;
    for(i = 0; i < tamanho; i++) {
        i+=2;
        if (vetor[i] == maior){
            indice_maior = i;
        }
        if (vetor[i] == menor){
            indice_menor = i;
        }
        if (vetor[i] > media){
            acima_media++;
        }
        if (vetor[i] < media){
            abaixo_media++;
        }
        if (i % 2 = 0){
            soma_pares +=i;
        }
    }
    cout << "Maior elemento: " << maior << endl;
    cout << "posição maior elemento: " << indice_maior << endl;
    cout << "Menor elemento: " << menor << endl;
    cout << "posição menor elemento: " << indice_menor << endl;
    cout << "Media: " << media << endl;
    cout << "elementos acima da media: " << acima_media << endl;
    cout << "elementos abaixo da media: " << abaixo_media << endl;
    cout << "soma dos pares " << soma_pares << endl;
    return 0;
    
}*/
#include <iostream>
using namespace std;
int main (){
    int vetor[8]{};
    int i, tamanho=8;
    int maior, menor, indice_maior = 0, indice_menor = 0, acima_media=0, abaixo_media=0, soma_pares = 0;
    float media;
    float soma = 0;

    for(i=0;i<tamanho;i++){
    cout << "Digite os numeros: " << endl;
        cin>>vetor[i];
        soma += vetor[i];
    } 
    
    maior = vetor[0];
    menor = vetor[0];
    
    media = soma/tamanho;

    for(i = 0; i < tamanho; i++) {
        if (vetor[i] > maior){
            maior = vetor[i];
            indice_maior = i;
        }
        if (vetor[i] < menor){
            menor = vetor[i];
            indice_menor = i;
        }
        if (vetor[i] > media){
            acima_media++;
        }
        if (vetor[i] < media){
            abaixo_media++;
        }
        if (i % 2 == 0){
            soma_pares += vetor[i];
        }
    }
    
    cout << "Maior elemento: " << maior << endl;
    cout << "posição maior elemento: " << indice_maior << endl;
    cout << "Menor elemento: " << menor << endl;
    cout << "posição menor elemento: " << indice_menor << endl;
    cout << "Media: " << media << endl;
    cout << "elementos acima da media: " << acima_media << endl;
    cout << "elementos abaixo da media: " << abaixo_media << endl;
    cout << "soma dos pares " << soma_pares << endl;
    return 0;
}

