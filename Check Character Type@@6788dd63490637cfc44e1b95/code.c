// Your code here...
#include<stdio.h>
#include<ctype.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(('A'>=ch || ch<='Z' ) ||('a'>=ch || ch<='z')){
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')printf("Vowel");
    else{printf("Consonant");}
    }
    else if(isdigit(ch))printf("Digit");
    else{printf("Special Character");}
}