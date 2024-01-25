#include <bits/stdc++.h>
#include<math.h>
 
using namespace std;

string jogo(int x, int y){
    int r, b, c;
    r = pow((3*x),2) + pow(y,2);
    b = 2*(pow(x,2)) + pow(5*y,2);
    c = -100*x + pow(y, 3);
    if(r > b and r > c) return "Rafael ganhou";
    if(b > r and b > c) return "Beto ganhou";
    if(c > b and c > r) return "Carlos ganhou";
 }
 
int main(){
    
    int n, x, y;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> x >> y;
        cout << jogo(x, y) << endl;
    }
 
    return 0;
}