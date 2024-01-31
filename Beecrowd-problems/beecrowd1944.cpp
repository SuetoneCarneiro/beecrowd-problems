#include <bits/stdc++.h>

using namespace std;
    
int main(){
    stack<string> painel;
    int participantes, premios = 0;
    string blocos;
    char c1, c2, c3, c4;
    painel.push("FACE"); // inicialmente já tem o FACE

    cin >> participantes;
    
    while(participantes--){
        if(painel.empty()){
            painel.push("FACE");
        }   
        cin >> c1 >> c2 >> c3 >> c4;
        blocos.push_back(c1);
        blocos.push_back(c2);
        blocos.push_back(c3);
        blocos.push_back(c4);
        reverse(blocos.begin(), blocos.end());
        if(painel.top().compare(blocos) == 0){
            premios ++;
            painel.pop();
            for(int i = 0; i < 4; i++){
                blocos.pop_back();
            }
        }
        else{
            reverse(blocos.begin(), blocos.end());
            painel.push(blocos);
        }
        blocos.erase();
    }
    cout << premios << endl;
    
    return 0;
}