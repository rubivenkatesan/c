#include <stdio.h>


int main(void)
 {

int a[10],n,i,temp,j;

scanf("%d",&n);

for(i=0;i<n;i++)

{
 
   scanf("%d",&a[i]);

}

for(i=0;i<n;i++)

{
  
  temp=a[i];
  
  a[i]=a[j];

    a[j]=temp;

}

for(i=0;i<n;i++)

{

    printf("%d ",a[i]);

}


	return 0;

}

