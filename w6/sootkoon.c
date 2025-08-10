#include<stdio.h>
int main() {
    int M,N;
    scanf("%d %d",&M,&N);
    for (int i = 0; i < N; i++)
    {
        printf("%d x %d = %d\n",M,i+1,M*(i+1));
    }
    return 0;
}