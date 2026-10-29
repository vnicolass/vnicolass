/*#include <iostream>
using namespace std;

int main(){
   int A, B;
   int primos = 1;
   int qnt_primos = 0, soma = 0, maior = 0;
   double media;


    cout << "Digite o valor de A e B: " << endl;
    cin >> A >> B;

    while(A > B){
        cout << "Digite o valor de A menor ou igual a B: " << endl;
        cin >> A >> B;
    }
    int C = A;
    while(C <=B){
        primos +=2;
        if(C % primos == 0){
            primos +=1;
            C+=primos;
        }
        if(C % primos ==1){
            primos+=2;
            C+=primos;
        }
        if (C == primos){
            qnt_primos++;
            soma+=primos;
            media = soma/qnt_primos;
            if(maior < C){
                maior = C;
            }
        
        }
        
        


    }
    return 0;
}*/
#include <iostream>
using namespace std;

int main(){
   int A, B;
   int primos = 1;
   int qnt_primos = 0, soma = 0, maior = 0;
   double media = 0;


    cout << "Digite o valor de A e B: " << endl;
    cin >> A >> B;

    while(A > B){
        cout << "Digite o valor de A menor ou igual a B: " << endl;
        cin >> A >> B;
    }
    int C = A;
    while(C <=B){
        primos = 2;
        while(primos < C && C % primos != 0){
            primos++;
        }
        if (C == primos){
            cout << "Primo: " << C << endl;
            qnt_primos++;
            soma += C;
            media = (double) soma/qnt_primos;
            if(maior < C){
                maior = C;
            }
        }
        C++;
    }

    if(qnt_primos > 0){
        cout << "Quantidade de primos: " << qnt_primos << endl;
        cout << "Soma dos primos: " << soma << endl;
        cout << "Maior primo: " << maior << endl;
        cout << "Media dos primos: " << media << endl;
    }
    else{
        cout << "Nao existem numeros primos no intervalo." << endl;
    }

    return 0;
}
