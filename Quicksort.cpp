#include <stdio.h>
#include <stdlib.h>
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
void show(int arr[], int size){
    for (int i = 0; i < size; i++){
        printf("%d\n",arr[i]);
    }
    return;
}
int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++){
        if (arr[j] < pivot){
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    i++;
    swap(&arr[high], &arr[i]);
    return i;
}
void quickSort(int arr[], int low, int high){
    if (low < high)
    {
        int pivotIndex = partition(arr, low, high);
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
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
		quickSort(arr,0,s);		
		show(arr,s);
}
