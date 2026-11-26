// Last updated: 11/27/2026, 12:16:25 AM


int countGoodTriplets(int* arr, int arrSize, int a, int b, int c){
    int number=0;
    for(int i=0;i<arrSize;i++)
    {
        for(int j=i+1;j<arrSize;j++)
        {
            for(int k=j+1;k<arrSize;k++)
            {
                if(abs(arr[i]-arr[j])<=a && abs(arr[j]-arr[k])<=b && abs(arr[i]-arr[k])<=c)
                    number++;
            }
        }
    }
    return number;
}