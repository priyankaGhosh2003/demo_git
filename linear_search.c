#include<stdio.h>
int main()
{
int search(int a[100],int n,int ele);
int a[100],n,ele,x,i;
printf("enter the no of terms :");
scanf("%d",&n);
printf("enter the terms:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the number u want to search:");
scanf("%d",&ele);
x=search(a,n,ele);
if(x==-1)
printf("the element is not present\n");
else
printf("the element is present at position %d",x);
return 0;
}

int search(int a[100],int n,int ele)
{
int i;
for(i=0;i<n;i++)
if(a[i]==ele)
return i;
return -1;
}
