#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int w;
    cin >> w;
    //if(w==2) cout << "NO";
    if(w != 2 &&w>=1 && w<=100 && w%2==0 ){
        cout << "YES";
    }else{
        cout << "NO";
    }
}