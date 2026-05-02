#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k, free_minutes, problems=0, count=1;
    cin >> n >> k;
    free_minutes = 240 - k;
    if(free_minutes !=0 && free_minutes >=5){
        for(int i=1; i< n; i++){
            problems = 5*i + problems;
            if(free_minutes - problems >= 5 *(i+1))
                count++;
        }
        cout << count;
    }else
        cout << 0;
    
    return 0;
}