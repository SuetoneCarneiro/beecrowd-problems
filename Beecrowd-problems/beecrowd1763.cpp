#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    
    unordered_map <string, string> dictionary;
    dictionary.insert(make_pair("brasil","Feliz Natal!"));
    dictionary.insert(make_pair("alemanha","Frohliche Weihnachten!"));
    dictionary.insert(make_pair("austria","Frohe Weihnacht!"));
    dictionary.insert(make_pair("coreia" ,"Chuk Sung Tan!"));
    dictionary.insert(make_pair("espanha","Feliz Navidad!"));
    dictionary.insert(make_pair("grecia","Kala Christougena!"));
    dictionary.insert(make_pair("estados-unidos","Merry Christmas!"));
    dictionary.insert(make_pair("inglaterra","Merry Christmas!"));
    dictionary.insert(make_pair("australia","Merry Christmas!"));
    dictionary.insert(make_pair("portugal","Feliz Natal!"));
    dictionary.insert(make_pair("suecia","God Jul!"));
    dictionary.insert(make_pair("turquia","Mutlu Noeller"));
    dictionary.insert(make_pair("argentina","Feliz Navidad!"));
    dictionary.insert(make_pair("chile","Feliz Navidad!"));
    dictionary.insert(make_pair("mexico","Feliz Navidad!"));
    dictionary.insert(make_pair("antardida","Merry Christmas!"));
    dictionary.insert(make_pair("canada","Merry Christmas!"));
    dictionary.insert(make_pair("irlanda","Nollaig Shona Dhuit!"));
    dictionary.insert(make_pair("belgica","Zalig Kerstfeest!"));
    dictionary.insert(make_pair("italia","Buon Natale!"));
    dictionary.insert(make_pair("libia","Buon Natale!"));
    dictionary.insert(make_pair("siria","Milad Mubarak!"));
    dictionary.insert(make_pair("marrocos","Milad Mubarak!"));
    dictionary.insert(make_pair("japao","Merii Kurisumasu!"));

    string busca;
    while(getline(cin, busca)){

        if(dictionary.find(busca) == dictionary.end()){
            cout << "--- NOT FOUND ---" << endl;
        }else{
            cout << dictionary.find(busca)->second << endl;
        }
    }

    return 0;
}