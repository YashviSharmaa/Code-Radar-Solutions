// Your code here...
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int sum=0;
    for(int i=0;i<=a;i--){
        if((a>>i)&1){sum++}
    }
    printf("%d",sum);
}