#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string numbers, onlyletters;
    int count =0 ;
    getline(cin, numbers);
    for(char c  : numbers){
        if(isalpha(c)){
            onlyletters+= c;
        }
    }
    sort(onlyletters.begin(), onlyletters.end());
    for(int i = 0; i < int(onlyletters.size()); i++){
        if (onlyletters[i] != onlyletters[i+1])
        {
            count++;
        }
        
    }
    cout << count;
    return 0;
}