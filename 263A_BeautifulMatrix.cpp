#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int matrix[5][5];
    int row_position, columm_position;
    //to fill the matrix
    for(int i=0; i<5;i++){
        for(int j=0; j<5; j++){
            cin >> matrix[i][j]; 
        }
            cout <<endl;
    }   
    //to search on the matrix 1 value
    for(int i=0; i<5;i++){
        for(int j=0; j<5; j++){
            if(matrix[i][j]==1){
                row_position = i;
                columm_position = j;
            }
        }
    }
    //the mayor movement are 2 in rows and 2 in columms so 
    //once we have the position only need rest by two.
    int movements = abs(row_position -2) + abs(columm_position-2);
    cout << movements;
    return 0;
}