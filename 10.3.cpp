
#include <iostream>
#include <stdlib.h>
#include <string>

struct Date {
    unsigned day;
    unsigned month;
    int year;
};

char mon[13][4] = { "", "Jan", "Feb", "Mar", "Apr", "May", "jun", "Jul", "Aug" ,"Sep", "Oct", "Nov", "Dec" };
unsigned daymon[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };

int inputDate(struct Date* dd) {
    do {
        printf("\nDay:");
        scanf_s("%u", &(dd->day));

        printf("\nMonth:");
        scanf_s("%u", &(dd->month));

        if (dd->day > daymon[dd->month]) continue;

        printf("\nYear:");
        scanf_s("%d", &(dd->year));

    } while (1);

    return 0;
}

void outputDate(struct Date dd) {
    //    printf("%u.%u.%d",dd.day, dd.month, dd.year);
    printf("%u %s of %d\n", dd.day, mon[dd.month], dd.year);
}

struct Date tomorrow(struct Date dd) {
    struct Date tom = dd;
    if (dd.day >= daymon[dd.month]) {
        if (dd.month == 12) {
            tom.year++;
            tom.month = 1;
            tom.day = 1;
        }
        else {
            tom.month++;
            tom.day = 1;
        }
    }
    else {
        tom.day++;
    }
    return tom;
}

const char* WEEK[] = { "Mon", "Tue", "Wen", "Thu", "Fri", "Sat", "Sun" };

const char* weekday(struct Date dd) {
    unsigned d = 0;

    d = (dd.year - 1970) * 365;
    unsigned ly = (dd.year - 1968) / 4;
    d += ly;

    for (unsigned i = 1; i < dd.month; i++) {
        d += daymon[i];
    }
    d += dd.day;
    return WEEK[d % 7];
}
