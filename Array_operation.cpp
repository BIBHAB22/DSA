#include <stdio.h>
#define MAX_SIZE 100
int arr[MAX_SIZE];
int size;
void update(int x, int k) {
    if (k < 0 || k >= size) {
        printf("Invalid position\n");
        return;
    }
    arr[k] = x;
    printf("Element updated at position %d\n", k);
}

void insert(int x, int k) {
    if (size == MAX_SIZE) {
        printf("Array is full\n");
        return;
    }
    if (k < 0 || k > size) {
        printf("Invalid position\n");
        return;
    }
    int i;
    for (i = size - 1; i >= k; i--) {
        arr[i + 1] = arr[i];
    }
    arr[k] = x;
    size++;
    printf("Element inserted at position %d\n", k);
}
int search(int x) {
    int i;
    for (i = 0; i < size; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}
void remove(int x) {
    int i, pos = search(x);
    if (pos == -1) {
        printf("Element not found\n");
        return;
    }
    for (i = pos; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
    printf("Element removed\n");
}

void display() {
    int i;
    printf("Array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int choice, x, k;
    while (1) {
        printf("1. Update\n");
        printf("2. Insert\n");
        printf("3. Search\n");
        printf("4. Remove\n");
        printf("5. Display\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter the element and position: ");
                scanf("%d%d", &x, &k);
                update(x, k);
                break;
            case 2:
                printf("Enter the element and position: ");
                scanf("%d%d", &x, &k);
                insert(x, k);
                break;
            case 3:
                printf("Enter the element: ");
                scanf("%d", &x);
                int pos = search(x);
                if (pos == -1) {
                    printf("Element not found\n");
                } else {
                    printf("Element found at position %d\n", pos);
                }
                break;
            case 4:
                printf("Enter the element: ");
                scanf("%d", &x);
				remove(x);
            case 5:
                display();
                break;
            case 6:
                return 0;
            default:
                printf("Invalid choice\n");
                break;
        	}
    	}
		return 0;
