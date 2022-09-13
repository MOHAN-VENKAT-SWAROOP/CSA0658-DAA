#include<stdio.h>  
int biggest(int num[], int n, int big)  
{  
    if(n < 0)  
        return big;  
    else  
    {  
        if(big < num[n])  
            big = num[n];  
  
        return biggest(num, --n, big);  
    }  
}  
  
int main()  
{  
    int a[100], i,n ;
     printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);
    for (i = 0; i < n; ++i)
   {
    printf("element-%d: ", i);
    scanf("%d", &a[i]);
       
   }
    printf("Largest element of an array is : %d\n", biggest(a, n - 1, a[0]));  
  
    return 0;  
}
