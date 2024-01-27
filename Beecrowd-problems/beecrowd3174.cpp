#include <bits/stdc++.h>
 
using namespace std;
 
int main(){

    pair<string, int> elfo; //elfo.first = GRUPO e elfo.second = Horas trabalhadas
    string nome;
    int soma_presentes, qtd;
    int hb = 0, ha = 0, hm = 0, hd = 0; // horas somadas pelos elfos de um mesmo grupo
    
    cin >> qtd;

    while(qtd--){
        soma_presentes = 0;
        cin >> nome >> elfo.first >> elfo.second;
        if(elfo.first == "bonecos") hb += elfo.second;
        if(elfo.first == "arquitetos") ha += elfo.second;
        if(elfo.first == "musicos") hm += elfo.second;
        if(elfo.first == "desenhistas") hd += elfo.second;
    }
    soma_presentes = hb/8 + ha/4 + hm/6 + hd/12;

    cout << soma_presentes << endl;
    
    return 0;
}