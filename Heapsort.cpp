#include<stdio.h>
#include<stdlib.h>
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
void show(int arr[],int s){
  	int i;
  	for(i=0;i<s;i++){
  	      printf("%4d",arr[i]);	
	  }
	  printf("\n");
   } 
void heapify(int arr[], int n, int i){
	int largest = i;
	int left = 2*i + 1;
	int right = 2*i + 2;

	if(left < n && arr[left] > arr[largest]){
		largest = left;
	}
	if(right < n && arr[right] > arr[largest]){
		largest = right;
	}
	if(i != largest){
		swap(&arr[i],&arr[largest]);
		heapify(arr,n,largest);
	}
}	
void heapSort(int arr[], int n){
	for(int i = n/2 - 1; i >= 0; i--)
		heapify(arr, n, i);
	for(int i = n-1; i >= 0; i--){
		swap(&arr[i],&arr[0]);
		heapify(arr, i, 0);
	}
}
int main(){
		int arr[100];
		int s,i;
		printf("Enter the number:");
		scanf("%d",&s);
		for(i=0;i<s;i++){
			printf("Enter number %d:- ",(i+1));
		    scanf("%d",&arr[i]);	
		}
		heapSort(arr,s);		
		show(arr,s);
}
