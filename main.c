#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int prim(int f) {
    for(int d=2;d<=f/2;d++) {
        if(f%d==0) {
            return 0;
        }
    }
    return 1;
}


int main() {
    int n,a[100][100],b,x=2;
    scanf("%d",&n);
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
           if((i==1 && i+j<=n+1) || (i!=1 && i+j==n+1) || (i==n && i+j>n+1)) {
                while(x) {
                    if(prim(x)) {
                        a[i][j]=x;
                        x++;
                        break;
                     }
                    x++;
                }
            }else {
                a[i][j]=1;
            }
        }
    }

    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            if(a[i][j] < 10) {
                printf(" %d ",a[i][j]);
            }else {
                printf("%d ", a[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}
