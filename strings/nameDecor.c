#include <stdio.h>

int main(void){
    char sufix[]= "(:< ";
    char name[20];
    char prefix[]= " >:)";

    printf("Name here: ");
    scanf("%s", &name);
    strcat(name,prefix);
    strcat(name,sufix);
    printf("%s", sufix, name);
    printf("%s\n", prefix);
 return 0;   
}