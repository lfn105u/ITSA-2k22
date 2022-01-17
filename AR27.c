#include <stdio.h>    
#include <string.h>    
#include <stdlib.h>    
#include <ctype.h>    
    
int main()    
{    
    int i,j,total,missing,sum;  
    i=j=total=missing=sum=0;  
      
    scanf("%d", &total);  
      
    int student[total];  
      
    for(i=0;i<total-1;i++)  
        scanf("%d", &student[i]);  
      
    for(i = 1; i <= total; i++){  
        missing = missing ^ i;  
    }  
    /* Take the xor of all array elements */  
    for(i = 0; i < total-1; i++){  
        missing = missing ^ student[i];  
    }  
    printf("%d\n", missing);  
          
    return 0;  
}  