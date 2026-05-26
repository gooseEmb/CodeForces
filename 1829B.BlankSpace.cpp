#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n, count=0, max=0;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> n;
        int A[n];
        for (int j = 0; j < n; j++){
            cin >> A[j];
        }
        for (int k = 0; k < n; k++){
            if(A[k] == 1){
                if(max <= count)
                    max = count;
                count = 0;
            }else{
                count++;
            }
        }
        if (count > max)
            cout << count << endl;
        else
            cout << max << endl;
        count = 0;
        max = 0;
    }
    return 0;
}