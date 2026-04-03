#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, h, height, count = 0;
    cin >> n >> h;
    for(int i = 0; i<n ; i++){
        cin >> height;
        if(height <= h){
            count++;
        }else if(height > h){
            count = count + height/h;
            if(height%h != 0)
                count++;
        }
    }
    cout << count;


    return 0;
} 