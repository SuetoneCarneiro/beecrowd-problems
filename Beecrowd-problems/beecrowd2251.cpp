#include <bits/stdc++.h>
 
using namespace std;

int hanoi(int n){

     if (n == 1) {
        return 1;
    } else {
        return 2 * hanoi(n - 1) + 1;
    }

}

int main(){
    
    int n, cont_testes = 1;
    
    while(true){
        cin >> n;
        if(n == 0) break;

        cout << "Teste " << cont_testes << endl;
        cont_testes++;
        cout << hanoi(n) << "\n" << endl;

    }
    
    return 0;
}