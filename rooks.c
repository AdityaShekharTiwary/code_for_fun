#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define MAX 8


typedef struct
{
   int *C;
   int no_rooks;
}BOARD;

/*
===================================================
C[i] = column index of the ith Queen.
position of ith Queen : (i, C[i])
===================================================
*/
void initialisation(BOARD *, int );
void display_board(BOARD , int, int * );
int is_safe(BOARD , int , int );
void n_rooks(BOARD * ,int, int, int * );
/*
===================================================
(x , y): coordinates of the new rooks.
int is_safe(BOARD B, int x, int y): To determine whether a rooks at (x, y) cell is safe.
Information in Hand: Column position of all the queens corresponding to
row 0 to row (x-1) are known.
===================================================
*/

void initialisation(BOARD *B, int n)
{
  int i;
  B->no_rooks = n;
  B->C = (int *) malloc(sizeof(int)*(n+1));
  for(i=1; i<=n; i++)
       B->C[i] = -1;
}

void display_board(BOARD B, int n, int *a_sol_no)
/*Displaying the Solution or Board Configuration.*/
{
  int i,j;
  printf("\n\n Solution %d ", ++(*a_sol_no));
  for(i=1;i<=n;i++)
  {
     printf("\n");
     for(j=1; j<=n ;j++)
        if(B.C[i] == j)
          printf(" 1");
        else
          printf(" 0");
   }
}

/* int  is_safe (BOARD B, int x, int y)  function returns 1 if a newly inserted
Queen is safe at (x, y) on the BOARD B, it will return 0 otherwise. */

int is_safe (BOARD B, int x, int y)
{
   int i;
   for(i=1; i<x ;i++) /*check all the (x-1) number of rows before x th row */
      if ( B.C[i] == y )
      /* Position of two queens: (x, y) and (i, B.C[i]) */
            return 0;
   return 1;
}

void n_rooks(BOARD *B, int k, int n, int *a_sol_no)
/*
===============================================
C[i] = column index of the ith rooks.
Position of ith rooks : (i, C[i])
k = index of the current rooks to be inserted at k th row.
n = total no. of rooks to be placed.
===============================================
*/
{
  int j;
  for(j=1; j<=n; j++) /* checking all the n columns one by one.*/
        if(is_safe(*B, k, j)) /* Is kth rooks at kth row is safe at jth column. */
          {
              B->C[k] = j; /* Place the kth rooks (at kth row) at jth column. */
              if(k == n) /* All the n rooks are safely placed.*/
                   display_board(*B, n, a_sol_no); /*Displaying the solution.*/
              else /* You have to place safely the next (k+1)th rooks.*/
                   n_rooks(B, k+1, n, a_sol_no); /* Place the (k+1)th rooks. */
          }
}



void main()
{
   BOARD *p;
   int sol_no=0;
   p= (BOARD *) malloc(sizeof(BOARD));
   initialisation(p,4);
   n_rooks(p, 1, 4, &sol_no);
}
