#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int repeatedNTimes(int* A, int ASize){
    int result = 0;
    int repeat_num = 0;
    int n = 0;
    int count = 1;
    
    if(A==NULL)
        return result;
    repeat_num = ASize/2;
    n = repeat_num +1;
    for(int i = 0; i< ASize; i++){
        for(int j = i+1;j<ASize;j++){
            if(*(A+i) == *(A+j)){
                count++;
            }
            if(count==repeat_num){
                result = *(A+i);
                return result;
            }
        }
    }
    return result;
}

int function_961 ()
{
    int input[] = {5,1,5,2,5,3,5,4};
    int output = 0;
    int len = 0;

    len = sizeof(input)/sizeof(int);
    output = repeatedNTimes(input,len);
    printf("Output:%d\n",output);

    return 0;
}
