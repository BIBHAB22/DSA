#include<stdio.h>
#include<stdlib.h>
void adjustHeap(int arr[],int i,int n){
	int j=2*i;
	int key=arr[i];
	while(j<=n){
		if(j<n && arr[j]<arr[j+1])
			j=j+1;
		if(key>arr[j])
			break;
		arr[j/2]=arr[j];
			j=j*2;
	}
	arr[j/2]=key;
}
void makeHeap(int arr[],int n){
	for(int i=n/2;i>=1;i--)
		adjustHeap(arr,i,n);
}
void heapsort(int arr[],int n){
	makeHeap(arr,n);
	for(int i=n;i>=2;i--){
		int temp=arr[1];
		arr[1]=arr[i];
		arr[i]=temp;
		adjustHeap(arr,1,i-1);
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
		heapsort(arr,s);		
		show(arr,s);
}
