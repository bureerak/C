#include<stdio.h>
#include<ctype.h>
double celsiusToFahrenheit(double celsius);
double fahrenheitToCelsius(double fahrenheit);
void printFahreheit(double fahrenheit);
void printCelsius(double celsius);

int main(){
    double temp;
    char i;
    scanf("%lf %c",&temp, &i);
    i = tolower(i);
    switch (i) {
        case 'c':
            printFahreheit( celsiusToFahrenheit(temp) );
            break;
        case 'f':
            printCelsius( fahrenheitToCelsius(temp) );
            break;
    }
    return 0;
}

double celsiusToFahrenheit(double celsius) {
    return 32 + celsius * (9.0/5.0);
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) / (9.0/5.0);
}

void printFahreheit(double fahrenheit){
    printf("%.2lf f",fahrenheit);
}

void printCelsius(double celsius) {
    printf("%.2lf c",celsius);
}