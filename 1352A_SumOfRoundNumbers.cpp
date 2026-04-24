#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    long int number, mill=0, mi=0, cen=0, dec=0, uni=0, count=0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> number;
        if(number / 10000 != 0){
            mill = number / 10000;
            mill = mill*10000;
            number = number - mill;
            count++;
        }
        if(number / 1000 != 0){
            mi = number / 1000;
            mi = mi*1000;
            number = number - mi;
            count++;
        }
        if(number / 100 != 0){
            cen = number / 100;
            cen = cen*100;
            number = number - cen;
            count++;
        }
        if(number /10 != 0){
            dec = number /10;
            dec = dec*10;
            number = number - dec;
            count++;
        }
        if(number /1 != 0){
            uni = number /1;
            number = number - uni;
            count++;
        } 
            cout << count<< endl;
        if(mill != 0){
            cout << mill << " ";
        }
        if(mi != 0){
            cout << mi << " ";
        }
        if(cen != 0){
            cout << cen << " ";
        }
        if(dec != 0){
            cout << dec << " ";
        }
        if(uni != 0){
            cout << uni << endl;
        } 
        mill=0; mi=0; cen=0; dec=0; uni=0; count=0;
    }
    return 0;
}