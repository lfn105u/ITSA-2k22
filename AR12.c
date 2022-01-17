#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int i=0, n=0, input=0, temp=0, j=0;
    int array[50];
    
    while(scanf("%d", &input))
    {
        //printf("%d\n", input);
        if(input!=-999)
        {
            array[n]=input;
            n++;
        }
        else
            break;
    }
    
    int visited[n]; //1=true, 0=false
    
    for(i=0;i<n;i++)
        visited[i]=0;
    
    //bubble sorting the input
    for (i = 0; i < n; ++i) 
    {
        for (j = i + 1; j < n; ++j) 
        {
            if (array[i] < array[j]) 
            {
                    temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
            }
        }
    }
    /*for(i=0;i<n;i++)
    {
        printf("%d\n", array[i]);
    }*/
    
    //counting number begin here
    for (int i = 0; i < n; i++)
    {
     

        if (visited[i] == 1)
                continue;
     
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (array[i] == array[j])
            {
                    visited[j] = 1;
                    count++;
            }
        }
        printf("%d %d\n", array[i], count);
    }

    
    return 0;
}