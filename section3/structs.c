#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct
{
    string month;
    int day;
    int year;
}
date;

void print_date(date d);

int main(void)
{
    date today;
    // set date as 9/22/21
    today.month = "September";
    today.day = 22;
    today.year = 2021;

    print_date(today);
}

void print_date(date d)
{
    // desired format: *month* *day*, *year*
    printf("%s %i, %i\n", d.month, d.day, d.year);
}