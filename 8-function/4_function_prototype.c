#include <stdio.h>

// function prototype
void greet(char name[30], int birth_year);
int calulate_age(int birth_year);


int main()
{
    greet("Shakil Ahmed", 2005);
    greet("Noyon Rahman", 2003);
    greet("Nadim Hassan", 2004);
    return 0;
}

// print using name and age
void greet(char name[30], int birth_year)
{
    int age = calulate_age(birth_year);
    printf("Hi! I'm %s and my age is %d\n", name, age);
}

// calculate age
int calulate_age(int birth_year)
{
    int current_year = 2024;
    int age = current_year - birth_year;
    return age; // return from function
}

