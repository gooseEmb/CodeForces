#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, heights, min=0, max=0, posmin=0, posmax=0, count =0;
    int swap_between_min_max = 0, max_swaps=0, min_swaps=0;
    int array[101];
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> heights;
        array[i] = heights;
    }
    min = array[0];
    max = array[0];
    for (int i = 0; i < n; i++){
        if(array[i] <= min){
            min = array[i];
            posmin = i;
        }else if(array[i]>max){
            max = array[i];
            posmax = i;
        }
    }
    if (posmin<posmax){
        swap_between_min_max = 1;
    }
    
        max_swaps = posmax-0;
        min_swaps = n - 1 - posmin;
        count = max_swaps +min_swaps - swap_between_min_max;
    
    cout << count;
    
    return 0;
}
