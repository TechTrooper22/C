#include<stdio.h>
void main()
{
    int i=0, n=5, j=n-1;
    int a[5] = {1,2,3,4,5};
    int mid = n/2;
    // for(int i=0; i<mid; i++){
    //     int temp = a[i];
    //     a[i] = a[n-1];
    //     a[n-1] = temp;
    //     n--;
    // }
    
    // while(i < n/2){
    //     int temp = a[i];
    //     a[i] = a[j];
    //     a[j] = temp;
    //     i++;
    //     j--;
    // }
    for(i=0;i<5; i++){
        printf("%d ",a[i]);
    }
}