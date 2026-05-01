#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, rating;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> rating;
        if(rating >= 1900 )
            cout << "Division 1" << endl;
        if((rating >= 1600) && (rating <= 1899))
            cout << "Division 2" << endl;
        if((rating >= 1400) && (rating <= 1599))
            cout << "Division 3" << endl;
        if(rating <= 1399)
            cout << "Division 4" << endl;
    }
    return 0;
}