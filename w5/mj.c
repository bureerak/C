#include <stdio.h>

int main() {
    int age,day,price = 0;
    scanf("%d %d",&age ,&day);
    printf("Ticket price: ");
    if (day == 7 || day == 1) {
        price += 20;
    }
    if (day != 4) {
        price = age <= 12 ? price + 120 : age <= 59 ? price + 220 : price + 140;
        printf("%d Baht",price);
    }
    if (day == 4) {
        printf("100 Baht");
    }
    return 0;
}