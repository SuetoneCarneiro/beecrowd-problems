#include <bits/stdc++.h>

using namespace std;

int main()
{
    int km, cap, radares = 0;
    int casos;
    cin >> casos;
    for(int i = 0; i < casos; i++){
        radares = 0;
        cin >> km >> cap;
        
        while(km > 0){
            radares += 1;
            km -= cap;
        }
        
        cout << radares << endl;
    }
    
    return 0;
}