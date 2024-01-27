#include <bits/stdc++.h>
#include <vector>
 
using namespace std;
 
int main(){
    vector<int> impar;
    vector<int> par;
    int n, flag = 0;
    
    while(flag != 15){
        if(par.size() == 5){
            for(int i = 0; i < 5; i++){
                cout << "par[" << i << "] = " << par[i] << endl;
            }
            par.clear();
        }
        if(impar.size() == 5){
            for(int i = 0; i < 5; i++){
                cout << "impar[" << i << "] = " << impar[i] << endl;
            }
            impar.clear();
        }
        cin >> n;
        if(n % 2 == 0) par.push_back(n);
        else impar.push_back(n);
        flag++;
    }
    
    for(int i = 0; i < impar.size(); i++){
        cout << "impar[" << i << "] = " << impar[i] << endl;
    }
    for(int i = 0; i < par.size(); i++){
        cout << "par[" << i << "] = " << par[i] << endl;
    }

 
    return 0;
}