#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int maximum69Number (int num){
    int base = 1000;
    int result = num;
    int preval = 0, tmp = 0, remain = num, digit = 0;

    while(base >= 1)
    {
        digit = remain/base;
        remain%=base;
        if(digit == 6){
            tmp = preval + 9*base+remain;
            if (tmp > result)
                result = tmp;
        }
        else if(digit == 9){
            tmp = preval + 6*base+remain;
            if (tmp > result)
                result = tmp;
        }
        else
        {

        }
        preval+=digit*base;
        base/=10;
    }
    return result;
}

int function_1323 ()
{
    int input = 9669;
    int output = 0;

    output = maximum69Number(input);
    printf("Input:%d, Output:%d\n",input, output);

    return 0;
}
