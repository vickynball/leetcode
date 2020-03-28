#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "leetcode.h"

int main(int argc,char *argv[]){
    int problem = 0;

    problem = atoi(argv[1]);
    printf("==Leetcode Problem:%d==\n",problem);
    switch(problem){
        /*21*/
        case MERGE_TOW_SORTED_LIST:
            function_21();
            break;
        /*26*/
        case REMOVE_DUPLICATE:
            function_26();
            break;
        /*961*/
        case N_REPEATED:
            function_961();
            break;
        /*1221*/
        case SPLIT_A_STRING:
            function_1221();
            break;
        /*1290*/
        case CONVERT_BINARY_NUMBER:
            function_1290();
            break;
        /*1309*/
        case DECRYPT_STRING:
            function_1309();
            break;
        /*1323*/
        case MAX_69:
            function_1323();
            break;
        /*1351*/
        case COUNT_NEG_NUM:
            function_1351();
            break;
    } 
    return 0;
}
