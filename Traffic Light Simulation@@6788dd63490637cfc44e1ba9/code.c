// Your code here...
#include<stdio.h>
int main(){
    char x;
    scanf("%c",&x);
    if(x=='R')printf("Stop");
    else if (x=='G')printf("Slow Down");
    else printf("Go");
}