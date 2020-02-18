// array rotation by 2 positions
#include<stdio.h>
void rotate(int arr[], int d, int n)
{
    int i,j;
    int a = 0;
    int temp[n];
    for(i=0; i<n; i++)
    {
        temp[i] = arr[i];
    }
    for(i=0;i<d-n;i++)
    {
        arr[i] = arr[i+n];
    }
    for(i=d-n;i<d;i++)
    {
        arr[i] = temp[a];
        a = a+1;
    }
    for(i=0;i<d;i++)
    {
        printf("%d\n",arr[i]);
    }
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    rotate(arr,7,2);
    return 0;
}
