#include <bits/stdc++.h>

using namespace std;
 
int main(){
    
    string frase, palavras, letra;
    int dif;
     
    while(true){
        getline(cin, frase);
        if(frase == "*") break;
        letra = frase[0];
        dif = 0;
        stringstream ref(frase);
        while (getline(ref, palavras, ' ')){
            if(toupper(palavras[0]) != toupper(letra[0])){ 
                dif++;
            }
        }
        if(dif != 0){
            cout << "N" << endl;
        }else cout << "Y" << endl;
    }    
    return 0;
}