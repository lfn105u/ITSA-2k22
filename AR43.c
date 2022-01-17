#include <stdio.h>    
#include <string.h>    
#include <stdlib.h>    
#include <ctype.h>    
  
  
  
  
int main()    
{    
    int A[10][10], B[10][10], C[10][10];  
    int i,j,r,c;  
    i=j=r=c=0;  
      
    scanf("%d", &r);  
    scanf("%d", &c);  
      
    for(i=0;i<r;i++)  
    {  
        for(j=0;j<c;j++)  
        {  
            scanf("%d\n", &A[i][j]);  
        }  
    }  
      
    for(i=0;i<r;i++)  
    {  
        for(j=0;j<c;j++)  
        {  
            scanf("%d\n", &B[i][j]);  
        }  
    }  
      
    for(i=0;i<r;i++)  
    {  
        for(j=0;j<c;j++)  
        {  
            C[i][j]=A[i][j]+B[i][j];  
            if(j!=c-1)  
                printf("%d ", C[i][j]);  
            else  
                printf("%d\n", C[i][j]);  
        }  
    }  
      
      
      
          
    return 0;  
}  