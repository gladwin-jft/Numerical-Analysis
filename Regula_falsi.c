//
//  main.c
//  Regula_Falsi
//
//  Created by Gladwin Tirkey on 1/26/19.
//  Copyright © 2019 Gladwin Tirkey. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#define f(x) pow(x,3)-4*x-9
#define e 0.000001
int main(int argc, const char * argv[]) {
    int i;
    float a, b, x;
    float fa, fb, temp;
    printf("Enter x0 and x1\n");
    scanf("%f%f",&a ,&b);
    fa = f(a);
    fb = f(b);

    do{
        x = (a*fb -b*fa)/(fb-fa);
        if(f(x)<0){
            b = x;
            fb = f(b);
        }
        else{
            a = x;
            fa = f(a);
        }
        i++;
        printf("The current root is x%d = %f\n",i,x);
        printf("Value of function at x%d =%f\n",i,f(x));
        temp=(a*fb -b*fa)/(fb-fa);
    }while(fabs(temp-x)>e);
    
    return 0;
}
