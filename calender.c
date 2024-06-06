//program that prints a calendar for a given year, starting with Sunday:
#include <stdio.h>
int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1;
    else
        return 0;
}

int getDayOfWeek(int day, int month, int year) {
    static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    year -= month < 3;
    return (year + year / 4 - year / 100 + year / 400 + t[month - 1] + day) % 7;
}

void printCalendar(int year) {
    char *months[] = {"January", "February", "March", "April", "May", "June", "July",
                      "August", "September", "October", "November", "December"};
    int daysInMonth[] = {31, 28 + isLeapYear(year), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    printf("Calendar for the year %d\n\n", year);

    for (int month = 0; month < 12; month++) {
        printf(" ------------%s-------------\n", months[month]);
        printf(" Sun Mon Tue Wed Thu Fri Sat\n");
        int dayOfWeek = getDayOfWeek(1, month + 1, year);

        for (int i = 0; i < dayOfWeek; i++)
            printf("    ");

        for (int day = 1; day <= daysInMonth[month]; day++) {
            printf("%4d", day);
            if (++dayOfWeek > 6) {
                dayOfWeek = 0;
                printf("\n");
            }
        }
        printf("\n");
    }
}

int main() {
    int year;

    printf("Enter the year: ");
    scanf("%d", &year);

    printCalendar(year);

    return 0;
}
