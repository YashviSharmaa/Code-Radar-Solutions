// Your code here...
#include<stdio.h>
int main(){
    char n;
    scanf("%d",&n);
    if(n>=97 && n<=122){printf("Lowercase");}
    else if(n>=65 && n<=90){printf("Uppercase");}
    else{printf("Not an alphabet");}

}