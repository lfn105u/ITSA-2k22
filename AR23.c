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
        if(isalpha(c))  
        {  
            num=(int)c;  
            //printf("%d", num);  
              
            if(num>=65 && num<=90)          //uppercase  
            {  
                if((num+13)>90)  
                {  
                    apd=((num+13)-90)+64;  
                    printf("%c", apd);  
                }  
                else  
                    printf("%c", c+13);  
            }  
            else if(num>=97 && num<=122)    //lowercase  
            {  
                if((num+13)>122)  
                {  
                    apd=((num+13)-122)+96;  
                    printf("%c", apd);  
                }  
                else  
                    printf("%c", c+13);  
            }  
        }  
              
          
        else   
            printf("%c", c);  
    }  
    printf("\n");  
  
      
    return 0;  
}  