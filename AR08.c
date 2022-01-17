#include <stdio.h>  
#include <string.h>  
#include <stdlib.h>  
#include <ctype.h>  

int max1(int a, int b) 
{ 
    return (a > b) ? a : b; 
    
}

int max2(int a, int b, int c) 
{ 
    return max1(max1(a, b), c); 
    
}

int maxCrossingSum(int arr[], int l, int m, int h)
{
    int sum = 0;
    int left_sum = 0;
    for (int i = m; i >= l; i--) {
        sum = sum + arr[i];
        if (sum > left_sum)
            left_sum = sum;
    }
 
    sum = 0;
    int right_sum = 0;
    for (int i = m + 1; i <= h; i++) {
        sum = sum + arr[i];
        if (sum > right_sum)
            right_sum = sum;
    }
 
    return max2(left_sum + right_sum, left_sum, right_sum);
}

int maxSubArraySum(int arr[], int l, int h)
{
    if (l == h)
        return arr[l];
 

    int m = (l + h) / 2;
 
    return max2(maxSubArraySum(arr, l, m), maxSubArraySum(arr, m + 1, h), maxCrossingSum(arr, l, m, h));
}


int main()  
{  
    int A[100][100], input[1000];
    int i,j,sum,n,result;
    i=j=sum=n=result=0;
    
    
    while(scanf("%d", &input[n])!=EOF)
        n++;
        
    result=maxSubArraySum(input, 0, n-1);\
    printf("%d\n", result);
    
     
    return 0;
}  