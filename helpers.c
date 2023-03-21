#include "helpers.h"

// Prints strings
void printstring(string str)
{
    printf("%s\n", str);
}

// Prints chars
void printchar(char chr)
{
    printf("%c\n", chr);
}

// Prints integers
void printint(int num)
{
    printf("%i\n", num);
}

// Prints reals
void printreal(real num)
{
    printf("%f\n", num);
}

// Prints booleans
void printbool(bool x)
{
    printf("%s\n", x ? "true" : "false");
}

// Prints dates
void printdate(date dt)
{
    printf("%02d/%02d/%d\n", dt.day, dt.month, dt.year);
}

// Prints strings
void printstringns(string str)
{
    printf("%s", str);
}

// Prints chars
void printcharns(char chr)
{
    printf("%c", chr);
}

// Prints integers
void printintns(int num)
{
    printf("%i", num);
}

// Prints reals
void printrealns(real num)
{
    printf("%f", num);
}

// Prints booleans
void printboolns(bool x)
{
    printf("%s", x ? "true" : "false");
}

// Prints dates
void printdatens(date dt)
{
    printf("%02d/%02d/%d", dt.day, dt.month, dt.year);
}

// Gets input
string input(void)
{
    string newString = malloc(sizeof(char) * 20);
    scanf("%s", newString);
    return newString;
}

// Returns leftmost x characters from thisString
string left(string thisString, int x)
{
    string newString = malloc(sizeof(char) * x);
    for (int i = 0; i < x; i++)
    {
        newString[i] = thisString[i];
    }
    return newString;
}

// Returns rightmost X characters from thisString
string right(string thisString, int x)
{
    int len = strlen(thisString);
    string newString = malloc(sizeof(char) * x);
    for (int i = 0; i < x; i++)
    {
        newString[i] = thisString[i + len - x];
    }
    return newString;
}

// Returns a string of length y starting at position x from thisString
string mid(string thisString, int x, int y)
{
    string newString = malloc(sizeof(char) * y);
    for (int i = 0; i < y; i++)
    {
        newString[i] = thisString[i + x - 1];
    }
    return newString;
}

// Returns the integer value representing the length of string thisString
int length(string thisString)
{
    return strlen(thisString);
}

// Returns the character representing the lower-case equivalent of thisChar
// Alphabetic characters that are not upper case are returned unchanged.
char lcase(char thisChar)
{
    if (thisChar >= 65 && thisChar <= 90)
    {
        return thisChar + 32;
    }
    else
    {
        return thisChar;
    }
}

// Returns the character representing the upper-case equivalent of thisChar
// Alphabetic characters that are not lower case are returned unchanged.
char ucase(char thisChar)
{
    if (thisChar >= 97 && thisChar <= 122)
    {
        return thisChar - 32;
    }
    else
    {
        return thisChar;
    }
}

// Returns a string formed by converting all characters of thisString to upper case.
string to_upper(string thisString)
{
    string newString = malloc(sizeof(thisString));
    for (int i = 0; i < strlen(thisString); i++)
    {
        newString[i] = ucase(thisString[i]);
    }
    return newString;
}

// Returns a string formed by converting all characters of thisString to lower case.
string to_lower(string thisString)
{
    string newString = malloc(sizeof(thisString));
    for (int i = 0; i < strlen(thisString); i++)
    {
        newString[i] = lcase(thisString[i]);
    }
    return newString;
}

// Returns a string representation of a integer value
string int_to_str(int x)
{
    string newString = malloc(20);
    sprintf(newString, "%d", x);
    return newString;
}

// Returns a integer representation of a string.
int str_to_int(string x)
{
    return atoi(x);
}

// Returns the value TRUE if thisChar represents a valid numeric value.
bool is_numc(char thisChar)
{
    if (thisChar >= 97 && thisChar <= 122)
    {
        return false;
    }
    else if (thisChar >= 65 && thisChar <= 90)
    {
        return false;
    }
    else
    {
        return true;
    }
}

// Returns the value TRUE if thisString represents a valid numeric value.
bool is_nums(string thisString)
{
    for (int i = 0; i < strlen(thisString); i++)
    {
        is_numc(thisString[i]);
    }
    return true;
}

// Returns an integer value (the ASCII value) of character thisChar
int asc(char thisChar)
{
    return thisChar;
}

// Returns the character whose integer value (the ASCII value) is x
char chr(int x)
{
    return x;
}

// Returns the integer part of x
int real_to_int(real x)
{
    return (int)x;
}

// Returns a real number in the range 0 to x (not inclusive of x).
real rnd(int x)
{
    srand(time(0));
    return ((float)rand() / (float)(RAND_MAX)) * x;
}

// Returns the current day number from thisDate
int day(date thisDate)
{
    return thisDate.day;
}

// Returns the current month number from thisDate
int month(date thisDate)
{
    return thisDate.month;
}

// Returns the current year number from thisDate
int year(date thisDate)
{
    return thisDate.year;
}

// Returns a variable of type DATE with the value of <d>/<m>/<y>
date setDate(int d, int m, int y)
{
    date newDate;
    newDate.day = d;
    newDate.month = m;
    newDate.year = y;
    return newDate;
}