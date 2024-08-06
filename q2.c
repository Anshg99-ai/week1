#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
     double avg=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        avg+=arr[i];
    }

    avg=(avg/n);
    printf("%f",avg);
}
