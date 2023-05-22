// Bubble sort program

#include<stdio.h>
 
void printArray(int A[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", A[i]);
    }
    printf("\n");
}
 
void bubbleSort(int A[], int n){
    int temp;
    int flag = 0;
    for (int pass = 0; pass < n-1; pass++) 
    {
        printf("pass number %d\n", pass+1);
        flag = 1;
        for (int j = 0; j <n-1-pass ; j++) 
        {
            if(A[j]>A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                flag = 0;
            }
        } 
        if(flag){
            return;
        }
    } 
}
 
int main(){
    int A[20],n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter array elements for sorting:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Element before sorting: ");
    printArray(A, n); 
    bubbleSort(A, n); 
    printf("Elements after sorting: ");
    printArray(A, n); 
    return 0;
}
