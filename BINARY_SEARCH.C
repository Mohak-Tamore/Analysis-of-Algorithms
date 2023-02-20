#include<stdio.h>
#include<conio.h>

int binarySearch(int A[], int key, int low, int high)
{
 if(low < high)
 {
  int mid = (low + high)/2;
  if(A[mid] == key)
  {
   return mid;
  }
  else if(A[mid] < key)
  {
   low = mid+1;
  }
  else
  {
   high = mid-1;
  }
  binarySearch(A, key, low, high);
 }
}

void main()
{
 int A[50];
 int i,n,key,result;
 printf("\nEnter size of array: ");
 scanf("%d",&n);
 printf("\nEnter sorted array: ");
 for(i=0; i<n; i++)
 {
  scanf("%d",&A[i]);
 }
 printf("\nEnter number to be searched: ");
 scanf("%d",&key);
 result = binarySearch(A, key, 0, n-1);
 if(A[result] == key)
 {
  printf("\nElement %d found at %d index",key,result);
 }
 else
 {
  printf("\nElement not found");
 }
 getch();
 clrscr();
}
