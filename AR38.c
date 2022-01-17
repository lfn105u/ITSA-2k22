#include <stdio.h>    
#include <string.h>    
#include <stdlib.h>    
#include <ctype.h>    
    
int main()    
{    
    int S,m,n,k,tc,i,j,x,l;  
      
    scanf("%d", &tc);  
      
    for(i=0;i<tc;i++)  
    {  
        scanf("%d %d %d", &S, &m, &k);  
        int array[S], used[S]; //used = 1 -> used, 0 -> not use  
        int result=0;  
        for(j=0;j<S;j++)  
        {  
            scanf("%d", &array[j]);  
            //printf("%d\n", array[j]);  
        }  
              
        for(j=0;j<S;j++)  
            used[j]=0;  
          
        for(x=0;x<S;x++)  
        {  
            if(used[x]==0) //not use  
            {  
                for(l=x+1;l<S;l++)  
                {  
                    if(used[l]==0)  
                    {  
                        if(array[x]+array[l]==k)  
                        {  
                            //printf("%d %d\n", array[x], array[l]);  
                            used[x]=1;  
                            used[l]=1;  
                            result++;  
                            break;  
                        }  
                    }  
                }  
            }  
        }  
          
        printf("%d\n", result);  
    }  
          
    return 0;  
}  