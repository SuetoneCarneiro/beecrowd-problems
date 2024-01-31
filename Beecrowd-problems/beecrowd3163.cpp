#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    // -4: Leste | -3: Norte | -2: Sul | -1: Oeste
    string temp, aeronave;
    int coordenada;
    queue<string> fila_oeste, fila_norte, fila_sul, fila_leste;
    vector<string> aeronaves_enfileiradas;

    while(true){
        getline(cin, temp);
        if(temp == "0") break;

        if(temp == "-1" || temp == "-2" || temp == "-3" || temp == "-4"){
            coordenada = stoi(temp);
            temp.clear();
        }
        else{
            aeronave = temp;
        }

        if(coordenada == -1 and !temp.empty()){
            fila_oeste.push(aeronave);
        }
        if(coordenada == -2 and !temp.empty()){
            fila_sul.push(aeronave);
        }
        if(coordenada == -3 and !temp.empty()){
            fila_norte.push(aeronave);
        }
        if(coordenada == -4 and !temp.empty()){
            fila_leste.push(aeronave);
        }

    }
    int flag = fila_leste.size() + fila_norte.size() + fila_sul.size() + fila_oeste.size();
    
     while(flag--){
        if(!fila_oeste.empty()){
            aeronaves_enfileiradas.push_back(fila_oeste.front());
            fila_oeste.pop();
        }
        if(!fila_norte.empty()){
            aeronaves_enfileiradas.push_back(fila_norte.front());
            fila_norte.pop();
        }
        if(!fila_sul.empty()){
            aeronaves_enfileiradas.push_back(fila_sul.front());
            fila_sul.pop();
        }
        if(!fila_leste.empty()){
            aeronaves_enfileiradas.push_back(fila_leste.front());
            fila_leste.pop();
        }
     }
    
    for(auto aviao : aeronaves_enfileiradas){
        cout << aviao << " ";
    }
    cout << "\n" << endl;

    return 0;
}