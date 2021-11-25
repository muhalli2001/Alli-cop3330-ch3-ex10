#include "std_lib_facilities.h"


int main()
{
    string input;
    double in1, in2, output;

    printf("Enter an operation followed by the numbers to be operated: (* or mul, + or plus, - or minus, / or div.\n PLACE A SPACE BETWEEN INPUTS.)");

    cin >> input >> in1 >> in2;

    if(input=="*" || input=="mul")
    {
        output = in1*in2;
        printf("Result: %lf", output);
    }
    else if(input=="+" || input=="plus")
    {
        output = in1+in2;
        printf("Result: %lf", output);
    }
    else if(input=="-" || input=="minus")
    {
        output = in1-in2;
        printf("Result: %lf", output);
    }
    else if(input=="/" || input=="div")
    {
        if(in2 != 0)
        {
            output = in1/in2;
            printf("Result: %lf", output);
        }
        else
        {
            printf("cannot divide by 0!");
        }
        
    }
    else
    {
        printf("The operation is unknown.");
    }

    
    return 0;
}