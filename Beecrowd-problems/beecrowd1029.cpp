#include <bits/stdc++.h>
 
using namespace std;

int cont_calls; // variável global para guardar a quantidade de calls

int fib(int n){
    cont_calls += 1;
    if(n == 0){
        return 0;
    }else if(n == 1){
        return 1;
    }else{
        return fib(n-1) + fib(n-2);
    }
}

int main(){
    int qtd, n;

    cin >> qtd;
    
    for(int i = 0; i < qtd; i++){
        cin >> n;
        cont_calls = 0;
        int res = fib(n);
        cont_calls -= 1; // desconsiderando a primeira chamada
        cout << "fib(" << n << ") = " << cont_calls << " calls = " << res <<  endl;

    }
 
    return 0;
}