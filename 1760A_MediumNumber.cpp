#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, a,b,c;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> a >> b >>c;
        if ((a <= b) & (a <=c) && (c >= a) & (c >= b))
            cout << b << endl;
        else if((a <= b) & (a <=c) && (b >= a) & (b >= c))
            cout << c << endl;
        else if(((b <= c) & (b <= a)) && ((a >= b) & (a >= c)))
            cout << c << endl; 
        else if(((b <= c) & (b <= a)) && ((c >= b) & (c>= a)))
            cout << a << endl;
        else if(((c <= a) & (c <= b)) && ((a >= b) & (a >= c)))
            cout << b << endl; 
        else if(((c <= a) & (c <= b)) && ((b >= a) & (b >= c)))
            cout << a << endl;
    }
    return 0;
}