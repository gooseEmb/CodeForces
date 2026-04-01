#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string word, mod_word;
    cin >> word;
    int count_may = 0, count_min = 0;
    for(int i = 0; i < int(word.size()); i++){
        if(int(word[i]) >= 65 && int(word[i]) <=90){
            count_may ++;
        }else if(int(word[i]) >= 97 && int(word[i]) <=122){
            count_min++;
        }
    }
    if(count_min >= count_may){
        for (int i = 0; i < int(word.size()); i++){
            if (word[i] >= 65  && word[i] <= 90)
                word[i] = word[i]+32;
        }
    }
    else{
        for (int i = 0; i < int(word.size()); i++){
            if (word[i] >= 97  && word[i] <= 122)
                word[i] = word[i]-32;
        } 
    }
    cout << word;
    return 0;
}