// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum=0;
    for(int i=0 ; i<=n;i++){if(n%i==0){sum++;}}
    if(sum==2)printf("Prime");
    else{printf("Not Prime");}
}