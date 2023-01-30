#include<stdio.h>
#include<conio.h>

void printSteps(int A[], int n);

void quickSort(int A[],int first,int last,int n)
{
 int i, j, pivot, temp;
 if(first<last)
 {
  pivot=first;
  i=first;
  j=last;
  while(i<j)
  {
   while(A[i]<=A[pivot] && i<last)
   i++;
   while(A[j] > A[pivot])
   j--;
   if(i<j)
   {
    temp=A[i];
    A[i]=A[j];
    A[j]=temp;
   }
  }
  temp=A[pivot];
  A[pivot]=A[j];
  A[j]=temp;
  printSteps(A,n);
  quickSort(A,first,j-1,n);
  quickSort(A,j+1,last,n);
 }
}

void printSteps(int A[], int n)
{
 int i;
 printf("\n");
 for(i=0;i<n;i++)
 {
  printf(" %d",A[i]);
 }
}

void main()
{
 int i, n, size, A[50];
 printf("\nEnter number of elements: ");
 scanf("%d",&n);
 size = n;
 printf("\nEnter elements: ");
 for(i=0;i<n;i++)
 {
  scanf("%d",&A[i]);
 }
 printf("\nUnsorted array: ");
 for(i=0;i<n;i++)
 {
  printf("%d ",A[i]);
 }
 quickSort(A,0,n-1,size);
 printf("\nSorted array: ");
 for(i=0;i<n;i++)
 {
  printf("%d ",A[i]);
 }
 getch();
 clrscr();
}