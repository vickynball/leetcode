#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int removeDuplicates(int* nums, int numsSize){
    int result= 0;
    int tmp= *nums;
    int location = -1;

    if(numsSize<=1 || nums == NULL) return numsSize;
    for(int i =0 ; i<numsSize;i++){
        printf("[%d] = %d, tmp=%d,location=%d\n",i,*(nums+i),tmp,location);
        if(tmp != *(nums+i)){
            tmp = *(nums+i);
            if(location != -1)
                *(nums+location) = *(nums+i);
            location++;
            result++;
        }
        else
        {
            if(location == -1){
                location = i+1;
                result++;
            }
        }
    }
    return result;
}

int function_26 ()
{
    int input[] = {0,0,1,1,1,2,2,3,3,4};
    int output = 0;
    int len = 0;

    len = sizeof(input)/sizeof(int);
    output = removeDuplicates(input,len);
    for(int i=0;i<output;i++)
    {
        printf("%d ",*(input+i));
    }

    return 0;
}
