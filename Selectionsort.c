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
  	int i,j,t,mp;
  	show(a,size);
  	printf("\n");
  	for(i=0;i<size-1;i++)
	   {
	   			mp=i;
				for(j=i+1;j<size;j++)
				   {
				   	if(a[j]>a[mp])
				         mp=j;	   
				   }    
			t=a[i];
			a[i]=a[mp];
			a[mp]=t;	 
			show(a,size);
  	}
  	printf("\n");   
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
   
