#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(){
    
    vector<long long> fib;
    vector<int> entrada;
    long long num;
    int n;
    
    cin >> n;
    
    fib.push_back(0);
    fib.push_back(1); // fib = [0, 1]
    
    for(int i = 0; i < n; i++){
        cin >> num;
        entrada.push_back(num);
    }
    vector<int> entrada_organizada(entrada.begin(),entrada.end());
    sort(entrada_organizada.begin(),entrada_organizada.end());
    
    for(int j = 2; j <= entrada_organizada[n-1]; j++){
        fib.push_back(fib[j-2] + fib[j-1]);
    }
    
    for(int k = 0; k < n; k++){
        cout << "Fib(" << entrada[k] << ") = " << fib[entrada[k]] << endl;
    }

    return 0;
}