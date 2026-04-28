#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, count=0, min=0, max=0;
    cin >> n;
    int array1[n]={0};
    for (int i = 0; i < n; i++){
        cin >> array1[i];
    }
    max = array1[0];
    min = array1[0];

    for (int j = 0; j< n; j++){
        if(array1[j] > max){
            max=array1[j];
            count++;
        }
        if(array1[j] < min){
            min =array1[j];
            count++;
        }
    }
    cout <<count;
    return 0;
}