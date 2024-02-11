#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int x,y,z;
    while(cin >> x >> y >> z){
        int cat1 = 0, cat2 = 0, hip = 0, quadrado_dos_catetos = 0, quadrado_da_hip = 0;
        // o maior valor é a hipotenusa, então é preciso tratar assim:
        if(z > x && z > y){
            cat1 = x;
            cat2 = y;
            hip = z;
        }else if(y > x && y > z){
            cat1 = x;
            cat2 = z;
            hip = y;
        }else{
            cat1 = y;
            cat2 = z;
            hip = x;
        }
    
        quadrado_dos_catetos = pow(cat1,2) + pow(cat2, 2);
        quadrado_da_hip = pow(hip,2);
        int mdc = __gcd(__gcd(cat1, cat2),hip);

        //cout << "Quadrado dos catetos = " << quadrado_dos_catetos << endl;
        //cout << "Quadrado da hipotenusa = " << quadrado_da_hip << endl;
        //cout << "MDC = " << mdc << endl;
        
        if(mdc == 1 && quadrado_dos_catetos == quadrado_da_hip){
            cout << "tripla pitagorica primitiva" << endl;
        }else if(quadrado_dos_catetos == quadrado_da_hip){
            cout << "tripla pitagorica" << endl;
        }else{
            cout << "tripla" << endl;
        }
    }
    
    return 0;
}