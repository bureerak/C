#include<stdio.h>
#include<math.h>
#include<string.h>

void sort(int size ,int q[], char n[][55], int t[]) {
    int buffer;
    char nameBuffer[55];
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++ ) {
            if (q[j] > q[j+1]) {
                buffer = q[j];
                q[j] = q[j+1];
                q[j+1] = buffer;

                buffer = t[j];
                t[j] = t[j+1];
                t[j+1] = buffer;

                strcpy(nameBuffer,n[j]);
                strcpy(n[j],n[j+1]);
                strcpy(n[j+1],nameBuffer);
            }
        }
    }
}

int main() {

    int n, m, s;
    long int min;
    long long int secPlayed;
    unsigned long long int secTotal = 0;
    scanf("%ld.%lld",&min,&secPlayed);
    secPlayed += min * 60;

    scanf("%d",&n);
    char name[n][55];
    int time[n], queue[n];
    double result;
    
    for (int i = 0; i < n; i++) {
        scanf(" Queue#%d <|> %[^<] <|> %d.%d",&queue[i],name[i],&m,&s);
        secTotal += m * 60;
        secTotal += s;
        s += m * 60;
        time[i] = s;
    }

    if (secPlayed > secTotal) {
        secPlayed %= secTotal;
        if (secPlayed == 0) {
            secPlayed = secTotal;
        }
    }
    sort(n,queue,name,time);
    for (int i = 0; i < n ; i++) {
        secPlayed -= time[i];
        if (secPlayed == 0) {
            printf("Song Order: %d\n",i+1);
            printf("Song Name: %s\n",name[i]);
            printf("Song Process: Complete");
            break;
        } else if (secPlayed < 0) {
            result = ( ( (double)time[i] + secPlayed ) / time[i] )  * 100.0 ;
            result = result > 0 && result < 1 ? ceil(result) : floor(result);
            printf("Song Order: %d\n",i+1);
            printf("Song Name: %s\n",name[i]);
            printf("Song Process: %d%%\n",(int)result);
            break;
        }
    }
    return 0;
}