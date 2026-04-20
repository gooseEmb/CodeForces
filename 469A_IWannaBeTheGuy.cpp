#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int levels, p, q;
    int flag = 0;
    int array[210];
    cin >> levels >> p;
    
    for (int i = 0; i < p; i++){
        cin >> array[i] ;
    }
    cin >> q;
    for (int j = p; j < p+q; j++){
        cin >> array[j];
    }
    sort(array, array+(p+q));
    for(int i=0; i< p+q; i++){
        if (array[i]!=array[i+1] ){
            flag++;
        }
    }
    if (flag == levels)
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";
    return 0;
}