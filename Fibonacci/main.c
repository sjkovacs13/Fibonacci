//
//  main.c
//  Fibonacci
//
//  Created by Sam Kovacs on 5/12/13.
//  Copyright (c) 2013 Sam Kovacs. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    // The first variable represents the length, or number of terms, the user wishes to have calculated.
    int length;
    
    // The user is asked the number of terms they want calculated and the number is inputted and set to the variable length.
    printf("Please enter the number of terms you would like to calculate in the Fibonacci Sequence: ");
    scanf("%i", &length);
    
    // Fib is an array that will contain all the terms in the fibonacci sequence. Its length is the number of terms the user wants calculated. 
    int fib[length];
    // fib[0] and fib[1] are the first two terms of the fibonacci sequence, they are equal to 0 and 1 respectively. These values need to be established before any other term in the sequence can be calculated.
    fib[0]=0;
    fib[1]=1;
    
    // If the user simply wants the first term, fib[0] is printed.
    if (length==1)
    {
        printf("%i", fib[0]);
    }
    
    // If the user wants the second term, fib[0] and fib[1] are printed.
    else if (length==2)
    {
        printf("%i %i ", fib[0], fib[1]);
    }
    
    // If the user wants any other number of terms the following is executed intsead of the above two if statements.
    else if (length>0)
    {
        // The first two terms are still printed.
        printf("%i %i ", fib[0], fib[1]);
        
        // The following loop calculates the fibonacci term requested. The next term eqals the sum of the two preceding terms. The variable i is a counter and it starts at 2 because the first two terms have already been established and fib[2] is the next term. Each time the loop runs the term is calculated and then printed.
        for (int i=2; i<length; i++)
        {
            
            fib[i]=fib[i-1]+fib[i-2];
            printf("%i ", fib[i]);
            
        }
    }
    
    // This if statement prints an error message if the user inputs a number less than 1 when asked for the number of terms they want calculated. Obviously there cannot be 0 or negative terms.
    if (length<1)
    {
        printf("Please enter a number greater than 0.");
    }
    
    
    return 0;
}

