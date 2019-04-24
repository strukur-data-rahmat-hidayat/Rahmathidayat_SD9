#include <iostream>
using namespace std;

void swap  (int *xp, int *yp)
{
int temp = *xp;
*xp = *yp;
*yp = temp;

void bubblesort(int arr[], int n)
{
int i,j;
for (i =0; i  < n-1; i++)

for (j =0;j <n-i-1; j++)
if (arr[j], > arr[j+1])
swap(&arr[j], & arr[j+1]);
}

void printArray (int arr [], int size)
{
int i;
for (i=0;i<size;i++){
cout<<" "<<arr[i];
}
}
int main ()
{
cout<<"masukan nim "<< endl;
int arr [10];
int i;
for (i=0;i<10;i++}
{
cout<<"angka ke-"<< i+1<<": ";
cin>>arr [i];
}
int n=sizeof(arr)/sizeof(arr[0]);
bubblesort(arr, n);
cout<<"====================="<<endl;
cout<<"sorted nim : \n";
printArray (arr, n);
return 0;
}
