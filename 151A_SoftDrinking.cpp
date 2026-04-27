#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k,l, c, d, p, nl, np;
    int drink_total=0, limes_total=0, salt_total=0;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    drink_total = (k*l)/nl;
    limes_total = (c*d);
    salt_total = (p/np);
    if(drink_total <= limes_total && drink_total <= salt_total)
        cout << drink_total/n;
    else if(limes_total <= drink_total && limes_total<=salt_total)
        cout << limes_total/n;
    else if(salt_total <= limes_total && salt_total <= drink_total)
        cout << salt_total/n;
    return 0;
}