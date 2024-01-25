#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    int soma2 = 2, soma3 = 3, soma4 = 4, soma5 = 5, soma6 = 6, soma7 = 7, tam;
    string num;

    cin >> n;

    for(int i = 0; i < n; i++){
        int total = 0;
        cin >> num;
        tam = num.length();
        for(int j = 0; j < tam;j++){
            if(num[j] == *"1")total += soma2;
            if(num[j] == *"7")total += soma3;
            if(num[j] == *"4")total += soma4;
            if(num[j] == *"2" || num[j] == *"3" || num[j] == *"5")total += soma5;
            if(num[j] == *"6" || num[j] == *"9" || num[j] == *"0")total += soma6;
            if(num[j] == *"8")total+=soma7;
        }
        cout << total << " leds" << endl;
    }

    return 0;
}