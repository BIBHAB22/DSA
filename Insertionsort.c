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
		isort(a,s);		
	}
void isort(int a[],int size)
  {
    int i,key,j;
    show(a,size);
   for(i=1;i<size;i++)
     {
   	   j=i-1;
   	   key=a[i];
   	   while(key<a[j]&& j>=0)
   	     {
	        a[j+1]=a[j];
	        j--;
	     }
	    a[j+1]=key; 
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
   
