// Last updated: 11/27/2026, 12:17:13 AM
bool isValidSudoku(char** board, int boardSize, int* boardColSize) {
    for(int i=0; i<9; i++)
    {              
        for(int j=0; j<9; j++)
        {           
            if(board[i][j] != '.')
            {      
                for(int k=0; k<9; k++)
                {
                    if(board[i][j] == board[i][k] && k!=j) return false;  
                    if(board[i][j] == board[k][j] && k!=i) return false; 
                }
                for(int k=0; k<3; k++)
                {
                    for(int y=0; y<3; y++)
                    {
                        if(board[i][j] == board[(i/3)*3 + k][(j/3)*3 + y])
                        {
                            if(((i/3)*3 + k != i) && ((j/3)*3 + y != j)) return false;
                        }
                    }
                }
            }
        }
    }
    return true;
}