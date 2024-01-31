#include <bits/stdc++.h>

using namespace std;
 
int main(){
    int linhas, colunas, tamanho; //H, P e F - altura, quantidade de pilhas e tamanho do bloco
    deque <int> bloco;

    while(true){
        cin >> linhas >> colunas >> tamanho;
        if(linhas == 0 and colunas == 0 and tamanho == 0) break;
        int matriz[linhas][colunas];
        for(int i = 0; i < linhas; i++){
            for(int j = 0; j < colunas; j++){
                cin >> matriz[i][j];
            }
        }
        int v;
        for(int x = 0; x < tamanho; x++){
            cin >> v;
            bloco.push_back(v);
        }
        
        for(int i = colunas - 1; i >= 0; i--){
            if(bloco.begin() == bloco.end()) break;
            for(int j = linhas - 1; j >= 0; j--){
                if(matriz[j][i] == 0){
                    matriz[j][i] = bloco.front();
                    bloco.erase(bloco.begin());
                }
                if(bloco.begin() == bloco.end()) break;
            }
        }

        for(int i = 0; i < linhas; i++){
            for(int j = 0; j < colunas; j++){
                cout << matriz[i][j];
                if(j != colunas - 1){
                    cout << " ";
                }
            }
            cout << "\n";
        }
        
        bloco.clear();
        
    }
    
    return 0;
}