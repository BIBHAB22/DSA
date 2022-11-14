#include<stdio.h>
#include<stdlib.h>
void show(int[],int);
void bsort(int[],int);
void main()
	{
		int a[100];
		int s,i;
		printf("Enter the number:");
		scanf("%d",&s);
		for(i=0;i<s;i++){
			printf("Enter number %d:-  ",(i+1));
		    scanf("%d",&a[i]);	
		}
		bsort(a,s);		
	}
void bsort(int a[],int size)
  {
  	int i,j,t;
  	show(a,size);
  	printf("\n");
  	for(i=0;i<size-1;i++)
	   {
	   	for(j=0;j<size-1-i;j++)
		     {
		        if(a[j]>a[j+1])	
		           {
		           	t=a[j];
		           	a[j]=a[j+1];
		           	a[j+1]=t;
				   }
				show(a,size);   
			 }
	     printf("\n");		 
	   }
  }
void show(int a[],int s) 
  {
  	int i;
  	for(i=0;i<s;i++)
  	  {
  	      printf("%4d",a[i]);	
	  }
	  printf("\n");
   } 
   
