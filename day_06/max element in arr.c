#include <stdio.h>
 #include <limits.h>

int main()
{
    int arr[]={-1,-2,-3,-4,-5,-5};
    int max=INT_MIN;
    int length=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<length;i++){
        if(max<arr[i]) max=arr[i];
    }
        printf("%d",max);
    }