#include <stdio.h>
int main()
{
    int rows = 3;
    int columns = 3;
    int matrix[3][3]; 
    printf("enter number");

    // Accessing elements in the 2D array
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}