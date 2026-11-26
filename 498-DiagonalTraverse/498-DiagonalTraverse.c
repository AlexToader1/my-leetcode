// Last updated: 11/27/2026, 12:16:34 AM
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDiagonalOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
    if (matrixSize == 0 || *matrixColSize == 0) {
        *returnSize = 0;
        return NULL;
    }
    
    int m = matrixSize, n = matrixColSize[0];
    int* matrixx=(int*)malloc(m*n*sizeof(int));
    *returnSize=m*n;
    
    int row=0, col=0;
    for (int i=0; i<m*n; i++) 
    {
        matrixx[i] = matrix[row][col];
        
        if ((row+col)%2==0) 
        {
            if (col==n-1) 
                row++;
            else if (row==0) 
                    col++;
            else 
            { 
                row--; 
                col++; 
            }
        } else 
        {
            if (row==m-1) 
                col++;
            else if (col==0) 
                    row++;
            else 
            { 
                row++; 
                col--; 
            }
        }
    }
    return matrixx;
}