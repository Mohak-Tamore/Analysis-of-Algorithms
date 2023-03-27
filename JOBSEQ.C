#include<stdio.h>
#include<conio.h>
#define MAX 100

struct sequence{
 char jobId[MAX];
 int profit;
 int deadline;
};

/*struct sequence sort(struct sequence A[], int n)
{
 int i, j;
 struct sequence temp;
 for(i=0; i<n-1; i++)
 {
  for(j=i+1; j<n; j++)
  {
   if (A[i].profit > A[j].profit)
   {
    temp = A[i];
    A[i] = A[j];
    A[j] = temp;
   }
  }
  return A[i];
 }
// return A[];
}*/

/*void print(struct sequence A[], int n)
{
 int i;
 for(i=0; i<n; i++)
 {
  printf("\nId: ", A[i].jobId);
  printf("\tProfit: ", A[i].profit);
  printf("\tDeadline: ", A[i].deadline);
 }
}*/

void jobSequencing(struct sequence J[], int n)
{
 int i, d, profit=0;
 int A[MAX];
 A[n];
 for(i=0; i<n; i++)
 {
  A[i] = 0;
 }
 for(i=0; i<n; i++)
 {
  d = J[i].deadline;
  if(J[i].profit > A[d])
  {
   A[i] = J[i].profit;
  }
 profit += A[i];
 }
 printf("\nTotal profit: %d", profit);
}

void main()
{
 struct sequence job[MAX];
 struct sequence temp;
 int i, j, n;
 printf("\nEnter no. of jobs: ");
 scanf("%d",&n);
 job[n];
 printf("\nEnter jobs: ");
 for(i=0; i<n; i++)
 {
  printf("\nEnter Id: ");
  scanf("%s", &job[i].jobId);
  printf("\nEnter profit: ");
  scanf("%d", &job[i].profit);
  printf("\nEnter deadline: ");
  scanf("%d", &job[i].deadline);
 }
 for(i=0; i<n-1; i++)
 {
  for(j=i+1; j<n; j++)
  {
   if (job[i].profit > job[j].profit)
   {
    temp = job[i];
    job[i] = job[j];
    job[j] = temp;
   }
  }
 }
 printf("\nSorted w.r.t profits");
 //print(job, n);
 for(i=n-1; i=0; i--)
 {
  printf("\nId: %s", job[i].jobId);
  printf("\tProfit: %d", job[i].profit);
  printf("\tDeadline: %d", job[i].deadline);
 }
 jobSequencing(job, n);
 getch();
 clrscr();
}