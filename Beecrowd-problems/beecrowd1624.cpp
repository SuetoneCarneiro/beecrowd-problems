#include <bits/stdc++.h>
 
using namespace std;

int promo(vector<pair<int,int>> vp, int c, int q){
    if(q == 0 || c <= 0) return 0;
    if(vp[q-1].second > c) return promo(vp, c, q - 1);
    else{
        return max(promo(vp, c, q - 1), vp[q-1].first + promo(vp, c - vp[q-1].second, q - 1));
    }
    
}
 
int main(){
    
    int qtd, cap;
    while(true){
        cin >> qtd;
        if(qtd == 0) break;

        vector<pair<int,int>> vp = {};
        
        for(int i = 0; i < qtd; i++){
            pair<int,int> entrada = {}; // first = valores , second = pesos
            cin >> entrada.first >> entrada.second;
            vp.push_back(entrada);
        }
        cin >> cap;
        sort(vp.begin(),vp.end());
        int res = promo(vp,cap,qtd);
        cout << res << endl;

    }
    
    return 0;
}