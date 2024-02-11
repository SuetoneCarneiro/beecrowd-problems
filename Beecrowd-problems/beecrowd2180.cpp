#include <bits/stdc++.h>
 
using namespace std;

int main(){
    // Crivo
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
    
    int peso;
    cin >> peso;

    int qt = 0;
    int v = 0;

    while(qt < 10){
        if(is_prime[peso] == 1){
            v += peso;
            peso++;
            qt++;
        }else{
            peso++;
            continue;
        }
    }

    int distance_to_mars = 60000000;
    int hours = distance_to_mars/v;
    int days = hours/24;

    cout << v << " km/h" << endl;
    cout << hours << " h / " << days << " d" << endl;

    return 0;
}