include <iostream>
using namespace std;

void swap(int *xp, int *yp)
{
int temp = *xp;
*xp = *yp;
*yp = temp;
}

void bubblesort(int arr[], int n)
{
int i,j;
for (i=0; i <n-1; i++)

for (j = 0;j < n-i-1; j++)
if (arr[j] > arr[j+1])
swap(&arr[j], &arr[j+1]);
}

void printArray(int arr[], int size)
{
int i;
for ( i = 0; i < size; i++) {
cout<<" "<<arr[i];
}
}
int main()
{
int arr[] = {99, 29, 56, 99, 18, 2, 23, 8, 1, 32};
int n=sizeof(arr)/sizeof(arr[0]);
bubblesort(arr, n);
cout<<"sorted array: \n";
printArray(arr, n);
return 0;
}
