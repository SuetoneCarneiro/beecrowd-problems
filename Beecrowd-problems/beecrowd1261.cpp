#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    unordered_map<string, long int> hay_point;
    string palavra, temp;
    long int valor, total = 0;
    int m, n;

    cin >> m >> n;

    for(int i = 0; i < m; i++){
        cin >> palavra >> valor;
        hay_point.insert(make_pair(palavra, valor));
    }

    for(int j = 0; j < n; j++){
        total = 0;
        while(cin >> temp){
            if(temp == ".") break;
            for(auto it : hay_point){
                if(temp == it.first){
                    total += it.second;
                }
            }
            temp.clear();
        }
        cout << total << endl;
    }

    return 0;
}