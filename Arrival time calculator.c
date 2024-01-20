#include <stdio.h>

int main() {
    int ch, cm;
    double tt;
    
    printf("Enter current time: ");
    scanf("%d %d", &ch, &cm);
    
    printf("Enter trip time: ");
    scanf("%lf", &tt);
    
    int arrivalHours = ch + (int)tt;
    int arrivalMinutes = (cm + (int)((tt - (int)tt) * 60)) % 60;
    if (arrivalHours >= 24) {
        arrivalHours -= 23;
        printf("Current time is %02d:%02d\n", ch, cm);
        printf("Arrival Time is next day %02d:%02d\n", arrivalHours, arrivalMinutes);
    } else {
        printf("Current time is %02d:%02d\n", ch, cm);
        printf("Arrival Time is same day %02d:%02d\n", arrivalHours, arrivalMinutes);
    }

    return 0;
}
