#include <iostream>
using namespace std;

int main(){
   int numero, impar = 1;
   int subtracoes = 0;

   cout << "Digite o número: " << endl;
   cin >> numero;

   while (numero < 0){
    cout << "Número invalido, digite um maior que 0: " << endl;
    cin >> numero;
   }

   while (numero >= impar){
        numero = numero - impar;
        impar += 2;
        subtracoes++;
   }

   cout << "Parte inteira da raiz: " << subtracoes << endl;
   cout << "Resto final: " << numero << endl;
   cout << "Quantidade de subtracoes: " << subtracoes << endl;

    return 0;
}
