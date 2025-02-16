// Your code here...
#include<stdio.h>
int main(){
    int a,b;
    scanf("%u",&a);
    b=(a>>31)&1;
    if(b==1){printf("Set");}
    else{printf("Not Set");}
}