#include <bits/stdc++.h>
#include <vector>

using namespace std;
 
int main(){
    
    double a, b, c;
    cin >> a >> b >> c;

    vector<double> v = {a,b,c};
    sort(v.begin(),v.end());
    a = v[2];
    b = v[1];
    c = v[0];

    if(a >= (b+c)){
        cout << "NAO FORMA TRIANGULO" << endl;
        return 0;
    }
    if(pow(a,2) == (pow(b,2) + pow(c,2))) cout << "TRIANGULO RETANGULO" << endl;
    if(pow(a,2) > (pow(b,2) + pow(c,2))) cout << "TRIANGULO OBTUSANGULO" << endl;
    if(pow(a,2) < (pow(b,2) + pow(c,2))) cout << "TRIANGULO ACUTANGULO" << endl;
    if(a == b && b == c) cout << "TRIANGULO EQUILATERO" << endl;
    if((a == b || a == c || b == c) && (a != b || a != c || b != c)) cout << "TRIANGULO ISOSCELES" << endl; 

    return 0;
}