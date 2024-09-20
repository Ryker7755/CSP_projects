#include <stdio.h>
#include <string.h>

int main(void){
    char sufix[]= "(:< ";
    char name[20];
    char prefix[]= " >:)";

    printf("Name here: ");
    scanf("%s",name);
    strcat(sufix,name);
    printf("%s",sufix);
    printf("%s", prefix);
 return 0;   
}