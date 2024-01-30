#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    // Humanos, elfos, anões, orcs, wargs, águias(exército extra)
    int h, e, a, o, w, x;
    int bem, mal;

    cin >> h >> e >> a >> o >> w >> x;
    
    bem = h + e + a + x;
    mal = o + w;

    if(bem > mal || bem == mal) cout << "Middle-earth is safe." << endl;
    else cout << "Sauron has returned." << endl;
 
    return 0;
}