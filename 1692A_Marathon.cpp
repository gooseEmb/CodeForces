#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, a,b,c,d, count = 0;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> a >> b >> c >>d;
        if (a<b)
            count++;
        if(a < c)
            count++;
        if(a < d)
            count++;
        cout << count << endl;
        count = 0;
    }
    return 0;
}