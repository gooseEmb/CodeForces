#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, t;
    string queueOrder, newQueue;
    cin >> n >>t;
    cin >> queueOrder;
    for(int i = 0; i < t; i++){
        for (int j = 0; j < n; j++){
            if(queueOrder[j] == 'B' && (queueOrder[j+1]) == 'G'){
                newQueue[j+1] = queueOrder[j];
                newQueue[j] = queueOrder[j+1];
                j++;
            }else{
                newQueue[j] = queueOrder[j];
            }
        }
        if(t!=1){
            for(int l = 0; l < n; l++)
                queueOrder[l] = newQueue[l];
        }
    }
    for(int i = 0; i < n; i++)
        cout << newQueue[i];
    return 0;
}
