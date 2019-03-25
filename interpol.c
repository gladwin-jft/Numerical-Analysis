//
//  main.c
//  interpol
//
//  Created by Gladwin Tirkey on 3/25/19.
//  Copyright © 2019 Gladwin Tirkey. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i , j , n, x[20], y[20], diff[20][20], Xp;
    float fact = 1, sum = 0 , p , h;
    
    printf("Enter the no. of values of x to be entered");
    scanf("%d", &n);
    printf("Enter the value of x and f(x)");
    for( i = 0 ; i < n ; i++)
    {
        scanf("%d", &x[i]);
        scanf("%d", &y[i]);
    }
    for( i = 0 ; i < (n-1) ; i++)
    {
        diff[i][0] = y[i+1]-y[i];
    }
    for( i = 1 ; i < (n-1); i++)
    {
        for( j = 0 ; j <= (n-1); i++)
        {
            diff[j][i] = diff[j+1][i-1]-diff[j][i-1];
        }
    }
    for( i = 0 ; i < (n-1) ; i++)
    {
        for( j = 0 ; j < (n-1) ; j++)
            printf("%d\t", diff[i][j]);
        printf("\n");
    }
    printf("Enter the value of Xp to be interpolated\n");
    scanf("%d" , &Xp);
    h = x[1]-x[0];
    p = (Xp-x[0])/h;
    sum = y[0];
    printf("%f\n%f\n", h, p);
    for( i - 0 ; i < n ; i++)
    {
        sum += p*diff[0][i]/fact;
        p = p* (p-(i+1));
        fact*= (i+2);
    }printf("%f",sum);
    return 0;
}
