#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char * freqAlphabets(char * s){
    char *result = NULL;
    int len = 0;
    int index = 0;
    int n =0, temp = 1;

    len = strlen(s)+1;
    result = (char*)malloc(len *sizeof(char));
    memset(result, 0, len);
    printf("Len(%d)\n",len);
    for(index = 0;index<len-1; index+=temp)
    {
        if(*(s+index+2) == '#'){
            *(result+n) = 'j'+ *(s+index) + *(s+index+1) - '1' - '0';
            printf("(%d)->%c\n",n,*(result+n));
            temp = 3;
        }
        else{
            *(result+n) = 'a' + *(s+index) - '1';
            printf("(%d)->%c\n",n,*(result+n));
            temp = 1;
        }
        n++;
    }
    return result;
}

int function_1309()
{
    char intput[] = "10#11#12";
    char *output = NULL;

    output = freqAlphabets(intput);
    printf("Before:%s, After:%s\n",intput, output);
    free(output);
    return 0;
}
