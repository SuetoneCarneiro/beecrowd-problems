#include <bits/stdc++.h>
 
using namespace std;

void soma_seq(int m, int n){

    int maior, menor, somador = 0;

    if(m > n){
        maior = m;
        menor = n;
    }else{
        maior = n;
        menor = m;
    }

    for(int i = menor; i <= maior; i++){
        cout << i << " ";
        somador += i;
    }
    cout << "Sum=" << somador << endl;
    
}
 
int main(){

    int a, b;

    while(true){
        cin >> a >> b;
        if(a <= 0 || b <= 0) break;
        soma_seq(a,b);
    }
    
    return 0;
}