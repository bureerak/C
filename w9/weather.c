#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Weather {
    char outlook[9]; //outlook{overcast,sunny,rain}
    int temperature;
    int humidity;
    char wind; //wind{T,F}
};

void playing_decision(struct Weather* weather) {
    if (strcmp(weather->outlook,"overcast") == 0) {
        printf("yes\n");
        return;
    }
    if (strcmp(weather->outlook,"rain") == 0 && weather->wind == 'F') {
        printf("yes\n");
        return;
    }
    if (strcmp(weather->outlook,"sunny") == 0 && weather->humidity <= 77.5) {
        printf("yes\n");
        return;
    }
    printf("no\n");
    return;
}

int main() {
    int n;
    scanf("%d",&n);
    struct Weather* weather = (struct Weather*) malloc (sizeof(struct Weather));
    for (int i = 0; i < n; i++) {
        scanf(" %s %d %d %c" ,weather->outlook ,&weather->temperature ,&weather->humidity ,&weather->wind);
        playing_decision(weather);
    }
    return 0;
}