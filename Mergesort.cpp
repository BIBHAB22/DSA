#include<stdio.h>
#include<stdlib.h>
void merge(int arr[],int low,int mid,int high){
	int i=low,j=mid+1,k=low;
	int c[100];
	while(i<=mid && j<=high){
		if(arr[i]<arr[j]){
			c[k]=arr[i];
			i++;
		}
		else{
			c[k]=arr[j];
			j++;
		}
		k++;
	}
	while(i<=mid){
		c[k]=arr[i];
		i++;
		k++;
	}
	while(j<=high){
		c[k]=arr[j];
		j++;
		k++;
	}
	for(i=low;i<=high;i++)
		arr[i]=c[i];
}
void mergesort(int arr[],int low,int high){
	if(low<high){
		int mid=(low+high)/2;
		mergesort(arr,low,mid);
		mergesort(arr,mid+1,high);
		merge(arr,low,mid,high);
	}
}
void show(int arr[],int s) 
  {
  	int i;
  	for(i=0;i<s;i++)
  	  {
  	      printf("%4d",arr[i]);	
	  }
	  printf("\n");
   } 
int main(){
		int arr[100];
		int s,i;
		printf("Enter the number:");
		scanf("%d",&s);
		for(i=0;i<s;i++){
			printf("Enter number %d:-  ",(i+1));
		    scanf("%d",&arr[i]);	
		}
		mergesort(arr,0,s);		
		show(arr,s);
}
