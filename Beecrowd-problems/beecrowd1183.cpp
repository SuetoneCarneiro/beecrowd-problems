#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    cout << fixed << setprecision(1);
    int lc = 12;
    float soma = 0, media;
    float matriz[lc][lc];

    char o;
    cin >> o;

    for(int i = 0; i < lc; i++){
        for(int j = 0; j < lc; j++){
            cin >> matriz[i][j];
            if(i <= (j-1)){
                soma+= matriz[i][j];
            }
        }
    }

    media = soma/66;

    if (o == 'S'){
        cout << soma << endl;
    }
    if (o == 'M'){
        cout << media << endl;
    }


    return 0;
}