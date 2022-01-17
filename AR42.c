#include <stdio.h>    
#include <string.h>    
#include <stdlib.h>    
#include <ctype.h>    
  
  
void bubbleSort(int array[], int size)   
{  
  
  // loop to access each array element  
  for (int step = 0; step < size - 1; ++step)   
  {  
        
    // loop to compare array elements  
    for (int i = 0; i < size - step - 1; ++i)   
    {  
        
      // compare two adjacent elements  
      // change > to < to sort in descending order  
      if (array[i] > array[i + 1])   
      {  
          
        // swapping occurs if elements  
        // are not in the intended order  
        int temp = array[i];  
        array[i] = array[i + 1];  
        array[i + 1] = temp;  
      }  
    }  
  }  
}  
  
int main()    
{    
    int total=10;  
    int i,j,input[total],result;  
    int min,max;  
    min=max=0;  
      
      
    for(i=0;i<total;i++)  
        scanf("%d\n", &input[i]);  
      
    bubbleSort(input, total);  
      
    printf("Largest number = %d\nSmallest number = %d\n", input[9], input[0]);  
      
      
          
    return 0;  
}  