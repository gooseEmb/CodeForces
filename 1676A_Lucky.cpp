#include <bits/stdc++.h>
using namespace std;

int count_numbers(int x);

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, number,last_numbers, first_numbers;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> number;
        last_numbers = number % 1000;
        first_numbers = number / 1000;
        if(count_numbers(last_numbers) == count_numbers(first_numbers))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

int count_numbers(int x){
    int sum = 0;
    for (int i = 0; i < 3; i++){
        sum = sum + x % 10;
        x = x /10;
    }
    return sum;
}