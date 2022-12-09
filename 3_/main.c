#include<stdio.h>
#include<stdlib.h>

int main()
{
   int n,i,j;
   printf("adedi girin:");
   scanf("%d",&n);
   int dizi[n];
   for(i=0;i<n;i++)
   {
   	printf("%d.elemani girin:",i);
   	scanf("%d",&dizi[i]);
   }
	
   for(i=0;i<n-1;i++)
   {
   	for(j=0;j<n-i-1;j++)
   	{
   		if(dizi[j]>dizi[j+1])
   		{
   			int temp=dizi[j];
   			dizi[j]=dizi[j+1];
   			dizi[j+1]=temp;
		   }
	   }
   }
   printf("siralamasi:\n");
   for(i=0;i<n;i++)
   {
   	 printf("%d\n",dizi[i]);
   }
   return 0;	
}
	
