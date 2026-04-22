#include <stdio.h>

int main(){
    int t, count = 0;
    long int a, b;
    
    scanf("%d", &t);
    for (int i = 0; i < t; i++){
        scanf("%ld %ld", &a, &b);
        while (a%b!=0){
            a++;
            count++;
        }
        printf("%d\n", count);
        count = 0;
    }
    

    return 0;
}

