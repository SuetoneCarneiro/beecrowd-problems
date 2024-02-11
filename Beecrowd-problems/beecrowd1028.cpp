#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    
    int qtd;
    cin >> qtd;

    while(qtd--){
        int f1, f2;
        
        cin >> f1 >> f2;

        cout << __gcd(f1,f2) << endl;
    }
 
    return 0;
}