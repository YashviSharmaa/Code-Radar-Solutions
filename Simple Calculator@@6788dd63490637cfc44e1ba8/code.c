// Your code here...
#include,stdio.h>
int main(){
    int a,b;
    char x;
    scanf("%d %d %c",&a,&b,&x);
    if(x=='+')printf("%d",a+b);
    else if(x=='*')printf("%d",a*b);
    else if(x=='-')printf("%d",a-b);
    else if(x=='/')printf("%d",a/b);
}