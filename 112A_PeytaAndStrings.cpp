#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    char string1[100], string2[100];
    int count =0;
    cin >> string1;
    cin >> string2;
    if(strlen(string1) && strlen(string2)<=100){
        for(int i = 0; i <int(strlen(string1)); i++){
            string1[i] = tolower(string1[i]);
            string2[i] = tolower(string2[i]);
        }
        for(int i = 0; i <int(strlen(string1)); i++){
            if(int(string1[i])-int(string2[i])<=-1){
                count--;
                break;
            }
            else if (int(string1[i])-int(string2[i])>=1){
                count++;
                break;
            }
        }
    }
    cout << count;
    return 0;
}