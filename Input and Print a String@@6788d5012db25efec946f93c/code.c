#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char n[20];
    scanf("%s",&n);
    printf("You entered: %s",n);
    return 0;
}