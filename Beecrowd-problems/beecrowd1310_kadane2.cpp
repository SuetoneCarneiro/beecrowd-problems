#include <bits/stdc++.h>
 
using namespace std;

int main(){
    
    vector<int> fat_liquido;
    int dias;

    while(cin >> dias){
        int custo = 0;
        int faturamento = 0;
        
        cin >> custo;

        for(int i = 0; i < dias; i++){
            cin >> faturamento;
            fat_liquido.push_back(faturamento - custo); // liquido = bruto - custos
        }
        // KADANE 
        int max_sum = 0;
        int current_sum = 0;
        int t = fat_liquido.size();

        for(int i = 0; i < t; i++){
            current_sum = max(current_sum + fat_liquido[i], fat_liquido[i]);
            max_sum = max(max_sum, current_sum);
        }
        // ----------------------------------------
        cout << max_sum << endl;

        fat_liquido.clear();
    }
 
    return 0;
}