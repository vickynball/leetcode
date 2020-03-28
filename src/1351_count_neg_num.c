#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int countNegatives(int** grid, int gridSize, int* gridColSize){
    int col = 0, index = 0;
    int result = 0;
    
    for(col = 0; col < gridSize; col++)
    {
        for(index = 0 ; index < *gridColSize; index++)
        {   
            if (grid[col][index] < 0)
                result ++;
        }
    }
    return result;
}

int function_1351()
{
    return 0;
}
