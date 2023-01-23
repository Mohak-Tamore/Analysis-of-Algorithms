#include<stdio.h>
#include<conio.h>

void unsort(int A[], int beg, int n);

void merge(int A[], int beg, int mid, int end)
{
 int i,j,k;
 int n1 = mid - beg + 1;
 int n2 = end - mid;
 int L[25], R[25];
 for(i=0; i<n1; i++)
 {
  L[i] = A[beg + i];
 }
 for(j=0; j<n2; j++)
 {
  R[j] = A[mid + 1 + j];
 }
 i = 0; j = 0; k = beg;
 while(i<n1 && j<n2)
 {
  if(L[i] <= R[j])
  {
   A[k] = L[i];
   i++;
  }
  else
  {
   A[k] = R[j];
   j++;
  }
  k++;
 }
 while(i<n1)
 {
  A[k] = L[i];
  i++;
  k++;
 }
 while(j<n2)
 {
  A[k] = R[j];
  j++;
  k++;
 }
}

void mergeSort(int A[],int beg,int end)
{
 if(beg < end)
 {
  int mid = (beg + end)/2;
  unsort(A, beg, mid-beg+1);
  unsort(A, mid+1, end-mid);
  mergeSort(A, beg, mid);
  mergeSort(A, mid+1, end);
  merge(A, beg, mid, end);
 }
}

void unsort(int A[],int beg,int n)
{
 int i;
 for(i=beg; i<n; i++)
 {
  printf("%d ",A[i]);
 }
 printf("\n");
}

void printArray(int A[], int n)
{
 int i;
 for(i=0; i<n; i++)
 {
  printf("%d ",A[i]);
 }
 printf("\n");
}

void main()
{
 int i, n;
 int A[50];
 printf("\nEnter size of array: ");
 scanf("%d",&n);
 printf("\nEnter elements of array: ");
 for(i=0; i<n; i++)
 {
  scanf("%d",&A[i]);
 }
 printf("\nUnsorted array: ");
 printArray(A, n);
 mergeSort(A, 0, n-1);
 printf("\nSorted array: ");
 printArray(A, n);
 getch();
 clrscr();
}
