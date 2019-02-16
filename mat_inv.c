//
//  main.c
//  newone
//
//  Created by Gladwin Tirkey on 2/13/19.
//  Copyright © 2019 Gladwin Tirkey. All rights reserved.
//
#include<stdio.h>
#include<math.h>
//float mat[4][4]= {{2, 1, -1, 8}, {-3, -1, 2, -11}, {-2, 1, 2, -3}};
float mat[6][6] = {{1, 1, 2, 1, 0, 0}, {-1, -2, 3, 0, 1, 0}, {3, -7, 4, 0, 0, 1}};
int i,n = 6,j;
float pivot;
void display()
{
  printf("The Matrix is : \n");
  for(i=0;i<3;i++)
    {
      for(j=0;j<n;j++)
        {
	  printf(" %0.2g ",mat[i][j]);
        }
      printf("\n\n");
    }
}
int main()
{
  float temp,temp1,temp2,x,y,z;
    
    
  /*printf("\nEnter size of matrix: ");
     scanf("%d",&n);
     for(i=0; i<n; i++)
     {
     printf("\n\nenter the value of %d eqvation",i+1);
     for(j=0; j<n; j++)
     {
     printf("\nenter the value of coeffcient %d: ",j+1);
     scanf("%f",&mat[i][j]);
     }
     printf("\nenter the value of constent: ");
     scanf("%f",&mat[i][j]);
     }*/
  display();
    
  temp=mat[1][0]/mat[0][0];
  temp1=mat[2][0]/mat[0][0];
  for(i=0,j=0;j<n+1;j++)
    {
      mat[i+1][j]=mat[i+1][j]-(mat[i][j]*temp);
      mat[i+2][j]=mat[i+2][j]-(mat[i][j]*temp1);
    }
    
  temp=mat[2][1]/mat[1][1];
  for(i=1,j=0;j<n+1;j++)
    {
      mat[i+1][j]=mat[i+1][j]-(mat[i][j]*temp);
    }
    
  pivot = mat[0][0];
    
  for(i = 0 ; i < (n+1) ; i++)
    {
      mat[0][i] = mat[0][i]/pivot;
    }
  display();
    
  pivot = mat[1][1];
  temp = mat[0][1];
    
  for(i = 0 ; i < (n+1) ; i++)
    {
      mat[1][i] = mat[1][i]/pivot;
      mat[0][i] = mat[0][i] - (temp*mat[1][i]);
    }
  display();
  pivot = mat[2][2];
  temp = mat[0][2];
  temp2 = mat[1][2];
  for(i = 0 ; i < (n+1) ; i++)
    {
      mat[2][i] = mat[2][i]/pivot;
      mat[0][i] = mat[0][i] - (temp * mat[2][i]);
      mat[1][i] = mat[1][i] - (temp2 * mat[2][i]);
    }
  display();
   
}
