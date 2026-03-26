#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string string1, string2;
    int count =0;
    cin >> string1;
    cin >> string2;
    if(string1.size() >= 100)
        cout << "-1";
    else{
        for(int i = 0; i <int (string1.size()); i++){
            string1[i] = tolower(string1[i]);
            string2[i] = tolower(string2[i]);
        }
        for(int i = 0; i < int(string1.size()); i++){
            if(string1[i] < string2[i]){
                count--;
                break;
            }
            else if (string1[i] > string2[i]){
                count++;
                break;
            }
        }
        cout << count;
    }
    return 0;
}