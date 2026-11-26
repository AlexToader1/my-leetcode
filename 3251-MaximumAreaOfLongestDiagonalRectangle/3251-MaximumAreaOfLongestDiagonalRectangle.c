// Last updated: 11/27/2026, 12:16:14 AM
int areaOfMaxDiagonal(int** dimensions, int dimensionsSize, int* dimensionsColSize) {
    long long maxdiag=-1;
    int maxarea=-1;

    for (int i=0; i<dimensionsSize; i++) 
    {
        int L=dimensions[i][0];
        int W=dimensions[i][1];

        long long diag=(long long)L*L+W*W;
        int area=L*W;

        if (diag > maxdiag) 
        {
            maxdiag=diag;
            maxarea=area;
        } else if (diag==maxdiag && area>maxarea) {
            maxarea = area;
        }
    }
    return maxarea;
}