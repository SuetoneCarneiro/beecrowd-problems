#include <bits/stdc++.h>

using namespace std;

int main(){
    string a, b;
    int n, ta, tb, dif;

    cin >> n;

    for(int i = 0; i < n;i++){
        cin >> a >> b;
        ta = a.size();
        tb = b.size();
        dif = abs(ta-tb);

        if(tb > ta){
            cout << "nao encaixa" << endl;
        }
        else{
            if(a.substr(dif,ta) == b){
                cout << "encaixa" << endl;
            }
            else{
                cout << "nao encaixa" << endl;
            }
        }

    }

    return 0;
}