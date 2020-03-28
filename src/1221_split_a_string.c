#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int balancedStringSplit(char * s){
    int index = 0, len = 0;
    int result = 0, num =0;
    char digit;
    
    len = strlen(s);
    for(index = 0; index < len; index++)
    {
        if(num == 0)
        {
            digit = *(s+index);
            num++;
        }
        else
        {
            if(*(s+index) == digit)
                num++;
            else
                num--;
            if(num == 0)
                result++;
        }
    }
    return result;
}

int function_1221()
{
    char input[] = "RLLLLRRRLR";
    int output = 0;

    output = balancedStringSplit(input);
    printf("Input:%s, Output:%d",input, output);

    return 0;
}
