#include <stdio.h>    
#include <string.h>    
#include <stdlib.h>    
#include <ctype.h>    
    
int main()    
{    
    char c;    
    int num=0, apd=0;    
        
    while((scanf("%c", &c)!=EOF) && c!="\n")    
    {    
       printf("%c", c-3);       
    }    
    printf("\n");    
    
        
    return 0;    
}  