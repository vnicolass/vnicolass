/*#include <iostream>
using namespace std;

void contagem(int n){
    if(n==0){
        cout << "FIM" << endl;
    }else{
        cout << n << endl;
        contagem(n-1);
    }
}
int main(){
   contagem(5);
    return 0;
}*/
#include <iostream>
using namespace std;

int fatorial(int n){
    if(n==0){
        return 1;
    }else{
        return(n*(fatorial(n-1)));
    }
}
int main(){
    int n;
    cin >> n;
    cout << fatorial(n) << endl;
    return 0;
}