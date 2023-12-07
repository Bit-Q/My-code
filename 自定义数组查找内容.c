#include <stdio.h>

int main() {
    int n,m;
    int x,y;
    scanf("%d %d",&n,&m);
    int arr[n][m];
    for(int p=0;p<n;p++)
    {
        for(int i=0;i<m;i++)
        {
            scanf("%d",&arr[p][i]);
        }
    }
    scanf("%d %d",&x,&y);
    printf("%d",arr[x-1][y-1]);

    return 0;
}