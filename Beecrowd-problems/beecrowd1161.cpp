#include <bits/stdc++.h>
 
using namespace std;
 
unsigned long long int fat_sum (long long int m, long long int n){
    
    long long int i = 2, j = 2;
    
    unsigned long long int fatm = 1, fatn = 1, sum;

    while(i <= m){
        fatm*=i;
        i++;
    }
    while(j <= n){
        fatn *= j;
        j++;
    }

    sum = fatm + fatn;

    return sum;
}

int main(){
    
    long int a, b;
    while(cin >> a >> b){
        cout << fat_sum(a, b) << endl;
    }
    
    return 0;
}