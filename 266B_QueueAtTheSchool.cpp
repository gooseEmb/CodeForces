#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, t;
    string queueOrder;
    cin >> n >>t;
    cin >> queueOrder;
    for(int i = 0; i < t; i++){
        for (int j = 0; j < n; j++){
            if(queueOrder[j] == 'B' && (queueOrder[j+1]) == 'G'){
                swap(queueOrder[j], queueOrder[j+1]);
                j++;
            }
        }
    }
    cout << queueOrder;
    return 0;
}
