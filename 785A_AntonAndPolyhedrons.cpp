#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, count =0;
    string names;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> names;
        if(names =="Tetrahedron")
            count = count + 4;
        if(names =="Cube")
            count = count + 6;
         if(names =="Octahedron")
            count = count + 8;
         if(names =="Dodecahedron")
            count = count + 12;
         if(names =="Icosahedron")
            count = count + 20;
        names.clear();
    }
    cout << count <<endl;
    return 0;
}