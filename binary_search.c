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
printf("the element is present at position %d",x+1);
return 0;
}

int search(int a[100],int n,int ele)
{
int i,r,l,mid;
l=0;
r=n-1;
while(l<=r)
{
mid=(l+r)/2;
if(a[mid]==ele)
return mid;
else if(ele>a[mid])
l=mid+1;
else
r=mid-1;
}
return -1;
}
