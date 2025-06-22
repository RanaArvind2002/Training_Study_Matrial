#include <stdio.h>

int main() {
    float hours, minutes, seconds, km, m;

    // Hours to Minutes
    printf("Enter hours: ");
    scanf("%f", &hours);
    printf("Minutes = %f\n", hours * 60);

    // Minutes to Hours
    printf("Enter minutes: ");
    scanf("%f", &minutes);
    printf("Hours = %f\n", minutes / 60);

    // Hours to Seconds
    printf("Enter hours: ");
    scanf("%f", &hours);
    printf("Seconds = %f\n", hours * 3600);

    // Seconds to Hours
    printf("Enter seconds: ");
    scanf("%f", &seconds);
    printf("Hours = %f\n", seconds / 3600);

    // Hours to Minutes and Seconds
    printf("Enter hours: ");
    scanf("%f", &hours);
    minutes = hours * 60;
    seconds = hours * 3600;
    printf("Minutes = %f, Seconds = %f\n", minutes, seconds);

    // Seconds to Minutes and Hours
    printf("Enter seconds: ");
    scanf("%f", &seconds);
    minutes = seconds / 60;
    hours = seconds / 3600;
    printf("Minutes = %f, Hours = %.2f\n", minutes, hours);

    // KM to Meters
    printf("Enter kilometers: ");
    scanf("%f", &km);
    printf("Meters = %f\n", km * 1000);

    // Meters to KM
    printf("Enter meters: ");
    scanf("%f", &m);
    printf("Kilometers = %f\n", m / 1000);

    return 0;
}
