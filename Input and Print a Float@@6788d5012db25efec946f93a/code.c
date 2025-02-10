#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float n;
    printf("");
    scanf("%f",&n);
    printf("You entered: %.2f",n);
    return 0;
}