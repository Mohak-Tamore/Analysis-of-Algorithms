#include<stdio.h>
#include<conio.h>

int max(int a, int b)
{
 return (a > b)? a : b;
}

int knapSack(int size, int wt[], int val[], int n)
{
 int i, w;
 int K[100][100];
 K[n+1][size+1];
 for(i=0; i<=n; i++)
 {
  for(w=0; w<=size; w++)
  {
   if (i==0 || w==0)
	K[i][w] = 0;
   else if (wt[i-1] <= w)
	K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]);
   else
	K[i][w] = K[i-1][w];
  }
 }
 return K[n][size];
}

void main()
{
 int i, n, size;
 int val[100], wt[100];
 printf("\nEnter number of items: ");
 scanf("%d", &n);
 printf("\nEnter profit of items: ");
 for(i=0; i<n; ++i)
 {
  scanf("%d", &val[i]);
 }
 printf("\nEnter weight of items: ");
 for(i=0; i<n; ++i)
 {
  scanf("%d", &wt[i]);
 }
 printf("\nEnter size of knapsack: ");
 scanf("%d", &size);
 printf("\nMaximum profit = %d", knapSack(size, wt, val, n));
 getch();
 clrscr();
}