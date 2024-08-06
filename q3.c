#include<stdio.h>
int main()
{
    char arr[100];
    scanf("%s",&arr);
    int i=0,j=strlen(arr);
    j--;
    while(i<j)
    {
      char t=arr[i];
      arr[i]=arr[j];
      arr[j]=t;
      i++;
      j--;
    }
    printf("%s",arr);
}
