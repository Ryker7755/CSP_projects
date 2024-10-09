#include <stdio.h>

char siblingsAndCousins[8][20] = {"Juni","Ryker","Tyson","Cooper","James"};
int i;
int main(void){
    while (i < 5){
        printf("%s Rich\n ", siblingsAndCousins[i]);
        i+=1;
    }
    return 0;   
}