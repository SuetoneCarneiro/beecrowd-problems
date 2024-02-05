#include <bits/stdc++.h>
 
using namespace std;

bool cops_vs_robbers(int quintal[7][7], int i, int j, bool & flag){
    if(quintal[1][1] == 1 || quintal[5][5] == 1){ // a posição inicial e a final preenchidas com 1 => robbers win
        return false;
    }
    if(quintal[5][5] == -1){ // posição final livre => cops win
        flag = true;
        return flag;
    }

    if(quintal[i][j+1] == 0){ // testando se a direita está livre
        quintal[i][j+1] = -1;
        cops_vs_robbers(quintal, i, j+1, flag);
    }
    if(quintal[i+1][j] == 0){ // testando se para baixo está livre
        quintal[i+1][j] = -1;
        cops_vs_robbers(quintal, i+1, j, flag);
    }
    if(quintal[i-1][j] == 0){ // testando se para cima está livre
        quintal[i-1][j] = -1;
        cops_vs_robbers(quintal, i-1, j, flag);
    }
    if(quintal[i][j-1] == 0){ // testando se a esquerda está livre
        quintal[i][j-1] = -1;
        cops_vs_robbers(quintal, i, j-1, flag);
    }
    return 0;
}
 
int main(){
    int qtd;
    cin >> qtd;
    int matriz[7][7];
    for(int k = 0; k < qtd; k++){

        for (int u = 0; u < 7; ++u){ // completando espaços extras da matriz
            matriz[0][u] = 1;
        }

        for (int d = 0; d < 7; ++d){
            matriz[6][d] = 1;
        }

        for (int l = 1; l < 6; ++l){
            matriz[l][0] = 1;
        }

        for (int r = 1; r < 6; ++r){
            matriz[r][6] = 1;
        }

        for(int x = 1; x < 6; x++){
            for(int y = 1; y < 6; y++){
                cin >> matriz[x][y];
            }
        }
    
        int i = 1;
        int j = 1;
        bool flag = false;
        cops_vs_robbers(matriz, i, j, flag);
        if(flag) cout << "COPS" << endl;
        else cout << "ROBBERS" << endl;
    }

    return 0;
}