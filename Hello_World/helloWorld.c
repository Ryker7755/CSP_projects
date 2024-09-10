#include <stdio.h>

int main(void){
    char name[20];
    printf("tell me your name: \n");
    scanf("%s", name);
    printf("hello %s", name);
    return 0;
}