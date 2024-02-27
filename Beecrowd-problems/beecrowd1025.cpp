#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n, q, marmore, cont = 1;
    vector<int> v, buscas;
    
    while(true){
        cin >> n >> q;
        if(n == 0 && q ==0) break;
        for(int i = 0; i < n; i++){ //recebe marmores
            cin >> marmore;
            v.push_back(marmore);
        }
        sort(v.begin(), v.end());

        int busca;
        for(int j = 0; j < q; j++){ // recebe buscas
            cin >> busca;
            buscas.push_back(busca);
        }

        cout << "CASE# " << cont << ":" << endl;

        for(int k = 0; k < q; k++){
            auto it = lower_bound(v.begin(), v.end(), buscas[k]);
            if(it == v.end() || *it != buscas[k]){
                cout << buscas[k] << " not found" << endl;
            }else{
                
                cout << buscas[k] << " found at " << (it - v.begin() + 1) << endl;
            }
        }
        v.clear();
        buscas.clear();
        cont++;
    }
    
    return 0;
}