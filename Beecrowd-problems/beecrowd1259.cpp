#include <bits/stdc++.h>
#include <vector>
 
using namespace std;
 
int main(){
    
    vector <int> impar;
    vector <int> par;

    int qtd, n;
    cin >> qtd;

    for(int i = 0; i < qtd; i++){
        cin >> n;
        if(n % 2 == 0) par.push_back(n);
        else impar.push_back(n);
    }
    sort(par.begin(), par.end());
    sort(impar.begin(), impar.end(), greater<int>());

    int tp = par.size();
    int ti = impar.size();

    for(int j = 0; j < tp; j++){
        cout << par[j] << endl;
    }
    for(int k = 0; k < ti; k++){
        cout << impar[k] << endl;
    }
 
    return 0;
}
