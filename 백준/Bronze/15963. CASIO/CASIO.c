#include<stdio.h>
int main(){
    long long a, b;
    scanf("%lld %lld", &a, &b);
    if(a == b)
        printf("1");
    else
        printf("0");
    return 0;
}