#include<stdio.h>
int main()
{
    int n,i,temp,mid,j;
    printf("enter n");
    scanf("%d",&n);

    int a[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    mid=n/2;

    printf("%d",a[mid]);
    return 0;

}