#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> n;
        int array[n];
        for (int  j = 0; j < n; j++)
            cin >> array[j];
        for (int k = 0; k < n; k++){
            if(array[0]==array[1]){
                for (int  l = 1; l < n; l++){
                    if (array[l]!=array[l+1]){
                        cout << l << endl;
                        break;
                    }
                }
            }else{
                if(array[0]==array[2])
                    cout<< 2 << endl;
                else
                    cout << 1 << endl;
                }
        }
    }
    return 0;
}