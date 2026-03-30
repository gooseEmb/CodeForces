#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //it's necesary initialize countStep = 0 because it have garbage when initialize 
    int steps, countSteps=0;
    cin >> steps;
    while(steps>5){
        countSteps++;
        steps = steps - 5;
    }
    if((steps >= 1) & (steps<=5)){
        countSteps++;
    }
    cout << countSteps;
    return 0;
}