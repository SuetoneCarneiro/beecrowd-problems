#include <bits/stdc++.h> 
 
using namespace std;
 
int main(){
    // CRIVO 
    int64_t lim = pow(10,6);
    bool is_prime[lim + 1]; 
    for(int i=2; i<= lim; i++){
        is_prime[i] = true;
    }
    for(int64_t i=2; i<=lim; i++ ){
        if (!is_prime[i]) continue;
        for(int64_t j = i*i; j <= lim; j+=i){
            is_prime[j] = false;
        }
    }
    
    int num;
    
    while(cin >> num){
    
        if(is_prime[num] == 0){
            cout << "Nada" << endl;
            continue;
        }else{
            string n = to_string(num);
            int tam = n.size();
            bool flag = true;

            for(int j = 0; j < tam; j++){
                char comp = n[j];
                int comp_int = comp - '0'; // convertendo char para int - tabela ascii
                if(is_prime[comp_int] == false) flag = false;
            }

            if(flag == true) cout << "Super" << endl;
            else cout << "Primo" << endl;
        }
    }
 
    return 0;
}