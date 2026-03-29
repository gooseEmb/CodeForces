#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string name;
    int count=0;
    cin >> name;
    sort(name.begin(), name.end());
    for(int i=1; i< int(name.size()); i++){
        if(name[i]!=name[i-1]){
            count++;
        } 
    }
    //cout << count;
    if((count+1)%2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
    return 0;
    }