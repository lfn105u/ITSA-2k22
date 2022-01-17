#include <stdio.h>  
#include <string.h>  
#include <stdlib.h>  
#include <ctype.h>  
  
  
int main()  
{  
    int n,m,c,i,k;  
    int A[1000][1000], B[1000][1000];  
    i=k=0;  
      
    scanf("%d %d %d", &n, &m, &c);  
      
    int C[n][m];  
    int T[m][n];  
      
    for(i = 0; i < n; i++)  
    {  
        for(k = 0; k < m; k++)  
        {  
            scanf("%d", &(A[i][k]));     
        }  
    }  
      
    for(i = 0; i < n; i++)  
    {  
        for(k = 0; k < m; k++)  
        {  
            scanf("%d", &(B[i][k]));      
        }  
    }  
      
    //scalar multiplication  
    for(i = 0; i < n; i++)  
    {  
        for(k = 0; k < m; k++)  
        {  
            C[i][k]=(A[i][k]+B[i][k])*c;  
        }  
    }  
      
    //transpose  
    for(i = 0; i < n; i++)  
    {  
        for(k = 0; k < m; k++)  
        {  
            T[k][i]=C[i][k];  
        }  
    }  
      
    for(i = 0; i < m; i++)  
    {  
        for(k = 0; k < n; k++)  
        {  
            if(k!=n-1)  
                printf("%d ", T[i][k]);   
            else  
                printf("%d\n", T[i][k]);  
        }  
    }  
  
    return 0;  
}  