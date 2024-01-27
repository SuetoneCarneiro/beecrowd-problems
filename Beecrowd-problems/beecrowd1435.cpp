#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int matriz[100][100];
    int ordem, ordem_aux, index_aux;
    int estou_imprimindo;
    int maior_elemento;

    while(true){
    cin >> ordem;
    if(ordem == 0) break;
    ordem_aux = ordem;
    if(ordem % 2 == 0) maior_elemento = ordem/2;
    else maior_elemento = ordem/2 + 1;

    estou_imprimindo = 0;
    index_aux = 0;
    while(true){
        estou_imprimindo ++;
        for(int i = 0; i < ordem_aux;i++){
            for(int j = 0; j < ordem_aux; j++){
                if((i == 0 || j == 0) || (i == ordem_aux - 1 || j == ordem_aux -1)){
                    matriz[i + index_aux][j + index_aux] = estou_imprimindo;
                }
            }
        }
        ordem_aux -= 2;
        index_aux ++;
        if(estou_imprimindo == maior_elemento) break;
    }

    // Exibir matriz
     for(int i = 0; i < ordem; i++){
        for(int j = 0; j < ordem; j++){
            if(j == 0){
                cout << setw(3) << matriz[i][j];
            }else cout << " " << setw(3) << matriz[i][j];
        }
        cout << "\n";
    }
    cout << "\n";
    }

 
    return 0;
}