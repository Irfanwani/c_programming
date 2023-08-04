#include<stdio.h>
#include <string.h>

int main()
{
    char st1[20], st2[20];
    int l, r;
    printf("Input string: ");
    scanf("%s", st1);
    printf("string=%s", st1);
    l = strlen(st1);
    printf("\nstringlength=%d", 
    l);
    
    printf("\nenter second string: ");
    scanf("%s", st2);
    
    // strcpy(st2, st1);
    // printf("\nstring 2 = %s", st2);
    
    // strcat(st1, st2); // concatenate st2 into st1;
    
    // printf("\nstring after concatenation: %s", st1);
    
    r = strcmp(st1, st2);
    if(r == 0) {
        printf("Strings are same");
    }else {
        printf("Strings are different");
    }
    
    return 0;
    
}
