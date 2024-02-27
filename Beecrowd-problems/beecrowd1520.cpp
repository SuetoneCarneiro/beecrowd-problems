#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    
    int n; // quantidade de caixas
    vector<int> tamanhos;
    while(cin >> n){
        int x, y;
        while(n--){
            cin >> x >> y;
            for (int i = x; i <= y;i++){
                tamanhos.push_back(i);
            }
        }
        sort(tamanhos.begin(), tamanhos.end());

        int busca;
        cin >> busca;
        
        auto it = equal_range(tamanhos.begin(), tamanhos.end(), busca);

        if(it.first == tamanhos.end() && it.second == tamanhos.end()){
            cout << busca << " not found" << endl;
        }else if(*(it.first) != busca && *(it.second) != busca){
            cout << busca << " not found" << endl;
        }   
        else cout << busca << " found from " << (it.first - tamanhos.begin()) << " to " << (it.second - tamanhos.begin() - 1) << endl;
        
        tamanhos.clear();

    }
 
    return 0;
}