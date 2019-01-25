//
//  main.c
//  hello
//
//  Created by Gladwin Tirkey on 1/25/19.
//  Copyright © 2019 Gladwin Tirkey. All rights reserved.
//

#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#define e 0.001
#define function(x) pow(x,3)-4*x-9

int main(int argc, const char * argv[]) {
    // insert code here...
    int i;
    float a, b, c;
    float f0;
    printf("Enter a and b \n)");
    scanf("%f%f",&a ,&b);
    do{
    c = (a + b)/2;
    f0 = function(c);
    if(f0 < 0){
        
        a = c;
    }
    else{
        b = c;
    }
        i++;
        printf("No of iterations %d\n",i);
        printf("Root = %f\n",c);
        printf("Value of funtion=%f\n",f0);
    }while(fabs(b-a)> e);
    return 0;
}

