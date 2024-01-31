#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    
    deque <int> cartas = {}, descartes = {};
    int entrada;

    while(true){
        cin >> entrada;
        if(entrada == 0) break;
        
        for(int i = 1; i <= entrada; i++){ // cria a pilha de cartas
            cartas.push_back(i);
        }
        while(cartas.size() != 1){
            descartes.push_back(cartas.front());
            cartas.pop_front();
            cartas.push_back(cartas.front());
            cartas.pop_front();
        }
        cout << "Discarded cards: ";
        for(auto e: descartes){
            cout << e;
            if (e != descartes.back())cout << ", "; 
        }
        
        cout << endl;
        cout << "Remaining card: " << cartas.back() << endl;
        cartas.clear();
        descartes.clear();
    }
 
    return 0;
}