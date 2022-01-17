#include <stdio.h>    
#include <string.h>    
#include <stdlib.h>    
#include <ctype.h>    
    
int main()    
{    
    int i,j,boy,girl,input,n,m;  
    i=j=boy=girl=input=n=m=0;  
      
    scanf("%d %d", &n, &m);  
      
    for(i=0;i<n;i++)  
    {  
        for(j=0;j<m;j++)  
        {  
            scanf("%d", &input);  
            if(input==0)  
                girl++;  
            else if(input==1)  
                boy++;  
        }  
    }  
      
    if(boy>girl)  
        printf("1\n");  
    else if(girl>boy)  
        printf("0\n");  
    else  
        printf("2\n");  
          
    return 0;  
}  