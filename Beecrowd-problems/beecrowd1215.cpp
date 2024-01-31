#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    
    set<string> dic;
    string temp;
    char c;
    
    while(cin.get(c)){
        if(isalpha(c)){
            temp += tolower(c);
        }else{
            dic.insert(temp);
            temp.clear();
        }
    }

    if(!temp.empty()){
        dic.insert(temp);
        temp.clear();
    }

    for(auto e : dic){
        if(!e.empty()){
            cout << e << endl;
        }

    }
    
    return 0;
}