#include <bits/stdc++.h>
 
using namespace std;

struct produtos_disponiveis{
    string produto;
    float preco;
};

struct lista_de_compras{
    string item;
    int quantidade;
};

int main(){
    cout << fixed << setprecision(2);
    int m, n, p, flag;
    cin >> n;
    flag = 0;
    while(flag != n){
        float valor_total = 0;
        cin >> m;
        produtos_disponiveis estoque[m];
        for (int i = 0; i < m; i++){
            cin >> estoque[i].produto >> estoque[i].preco;
        }
        cin >> p;
        lista_de_compras feirinha[p];
        for(int j = 0; j < p; j++){
            cin >> feirinha[j].item >> feirinha[j].quantidade;
        }

        for(int k = 0; k < m; k ++){
            for(int l = 0; l < p; l++){
                if(estoque[k].produto == feirinha[l].item){
                    valor_total += (estoque[k].preco*feirinha[l].quantidade);
                }
            }
        }
        cout << "R$ " << valor_total << endl;
        flag++;
    }

    return 0;
}