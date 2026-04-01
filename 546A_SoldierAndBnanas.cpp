#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int k, n, w;
    int total_pay = 0;
    cin >> k >> n >> w;
    //for this problem it's not  necesary the condition abobe
    //if((k>=1) && (w>=k) && (w<= 1000) && (n>=0) && (n<=10000000000)){
        for(int i=1; i<=w; i++){
            total_pay = total_pay + (i * k);
        }
        if(total_pay-n <= 0)
            cout << "0";
        else
            cout << total_pay - n;
    //}
    return 0;
}