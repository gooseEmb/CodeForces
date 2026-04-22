#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, count = 0;
    long int a , b;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> a >> b;
        while (a%b!=0){
            a++;
            count++;
        }
        cout << count << endl;
        count =0;
    }
    return 0;
}