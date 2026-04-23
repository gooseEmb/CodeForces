#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int  n, m;
    bool flag = true;
    cin >> m >> n;
    for(int i=0; i < m; i++){
        if(i%2 ==0){
            for(int j=0; j < n; j++){
                cout << "#";
            }
            cout << endl;
        }else{
            for(int j=0; j < n; j++){
                if(flag){
                    if(j==n-1){
                        cout << "#";
                        flag = false;
                    }else
                        cout << ".";
                }else{
                    if(j==0){
                        cout << "#";
                    }else{
                        cout << ".";
                    }
                    if(j==n-1)
                        flag = true;
                    
                }
                }
            cout << endl;  
            }
        }    
    return 0;
}