#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, count=0;
    int a, b, c;
    cin >> n;
    for(int i = 0; i<n;  i++){
        if(n>=1 && n<=1000){
            cin >> a >> b >> c;
            if(((b==1) &  (c==1)) | ((a==1) & (b==1)) | ((a==1) & (c==1) )| ((a==1) & (b==1) & (c==1))){
                count++;
            }
        }
    }
    cout << count;

    return 0;
}