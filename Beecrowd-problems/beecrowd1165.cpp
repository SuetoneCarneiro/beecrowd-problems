#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    
    int n, num;
    cin >> n;

    for(int i = 0; i < n; i++){
        int cont = 0;
        cin >> num;
        for(int j = 1; j <= num; j++){
            if(num%j == 0)cont++;
        }
        if(cont > 2){
            cout << num << " nao eh primo" << endl;
        }
        else{
            cout << num << " eh primo" << endl;
        }

    }
    return 0;
}