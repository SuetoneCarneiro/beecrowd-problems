#include <bits/stdc++.h>

using namespace std;
 
int main(){
    
    int a, b, elemento, res; //quantidade de cartas de cada uma

    while(true){
        set<int> setA = {}, setB = {};
        cin >> a >> b;
        if(a == 0 && b == 0) break;

        for(int i = 0; i < a; i++){
            cin >> elemento;
            setA.insert(elemento);
        }
        for(int j = 0; j < b; j++){
            cin >> elemento;
            setB.insert(elemento);
        }
        
        int elementos_iguais = 0;
        if(setA.size() > setB.size() || setA.size() == setB.size()){
            for (auto e: setA){
                if(setB.find(e) != setB.end()) elementos_iguais ++;
            }
            res = setB.size() - elementos_iguais;
            cout << res << endl;
        }
        if(setB.size() > setA.size()){
            for (auto e: setB){
                if(setA.find(e) != setA.end()) elementos_iguais ++;
            }
            res = setA.size() - elementos_iguais;
            cout << res << endl;
        }
    
    }
 
    return 0;
}