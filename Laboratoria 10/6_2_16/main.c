#include <stdio.h>
#include <stdlib.h>

int index_tab(int tab[][100], int n, int m){
    int max = 0;
    double max_avg = 0;
    for(int i=0;i<n;i++){
        double row_sum = 0;
        for(int j=0;j<m;j++){
            row_sum += tab[i][j];
        }
        double row_avg = row_sum/m;
        if(row_avg > max){
            max_avg = row_avg;
            max = i;
        }
    }
    return max;
}

int main()
{
    int n = 3;
    int m = 4;
    int arr[3][100] = {{9,10,11,12},{1,2,3,4},{5,6,7,8}};
    int max_row = index_tab(arr,n,m);
    printf("index: %d\n",max_row);
    return 0;
}
