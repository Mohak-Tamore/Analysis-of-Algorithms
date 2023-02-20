#include<stdio.h>
#include<conio.h>

void min_max(int A[],int n)
{
 int i;
 int max = A[0];
 int min = A[0];
 for(i=0; i<n; i++)
 {
  if(A[i] > max)
  {
   max = A[i];
  }
  if(A[i] < min)
  {
   min = A[i];
  }
 }
 printf("\nMaximum element: %d\nMInimum element: %d",max,min);
}

void main()
{
 int A[50];
 int i,n;
 printf("\nEnter size of array: ");
 scanf("%d",&n);
 printf("\nEnter elements: ");
 for(i=0; i<n; i++)
 {
  scanf("%d",&A[i]);
 }
 min_max(A,n-1);
 getch();
 clrscr();
}
