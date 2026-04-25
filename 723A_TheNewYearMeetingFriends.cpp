#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c, mid=0, max;
    cin >> a >> b >> c;
    max =b;
    if(a>b & a >c & b < c){
        mid = a-c + c-b;
    }else if (a>b & a >c & b > c){
        mid = a-b + b-c;
    }else if(b > a & b >c & a < c){
        mid = b-c + c-a;
    }else if (b > a & b >c & a > c)
        mid = b-a + a-c;
    else if(c > a & c > b & a < b){
        mid = c-b + b-a;
    }else if(c > a & c > b & a > b)
        mid = c-a + a-b;
    cout << mid;
    return 0;
}