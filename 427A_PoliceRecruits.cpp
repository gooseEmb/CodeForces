#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long int n;
    int cases = 0, recruits=0;
    cin >> n;
    int array[n] = {0};
    for(int i = 0; i < n; i++)
        cin >> array[i];
    for (int j = 0; j < n; j++){
        if((array[j] >= 1) & (array[j] <= 10))
        recruits = recruits + array[j];
        else if((array[j] == -1) & (recruits >=1)){
            recruits--;
        }
        else if((array[j] == -1) & (recruits == 0))
            cases++;
        }
    cout << cases;
    return 0;
}