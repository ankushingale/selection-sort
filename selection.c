#include<stdio.h>
int main()
{
int a[100],n,i,j,min,swap;
printf("Enter the array size");
scanf("%d",&n);
printf("Enter the %d elements",n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
	
}
for(i=0;i<n-1;i++)
{
	min=i;
	
for(j=i+1;j<n;j++)
{
   if(a[min]>a[j])
	min=j;
}
	swap=a[i];
	a[i]=a[min];
	a[min]=swap;
}
printf("New array is ");
for(i=0;i<n;i++)
{
	printf("%d",a[i]);
}
return 0;
}

