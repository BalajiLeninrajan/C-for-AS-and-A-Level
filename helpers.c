#include "helpers.h"

// Prints strings
void outstring(string str)
{
    printf("%s\n", str);
}

// Prints chars
void outchar(char chr)
{
    printf("%c\n", chr);
}

// Prints integers
void outint(int num)
{
    printf("%i\n", num);
}

// Prints reals
void outreal(real num)
{
    printf("%f\n", num);
}

// Prints booleans
void outbool(bool x)
{
    printf("%s\n", x ? "true" : "false");
}

// Gets input
string input(void)
{
    string newString = malloc(sizeof(char) * 20);
    scanf("%s", newString);
    return newString;
}

// Returns leftmost x characters from ThisString
string left(string thisString, int x)
{
    string newString = malloc(sizeof(char) * x);
    for (int i = 0; i < x; i++)
    {
        newString[i] = thisString[i];
    }
    return newString;
}

// Returns rightmost X characters from ThisString
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

// Returns a string of length y starting at position x from ThisString
string mid(string thisString, int x, int y)
{
    string newString = malloc(sizeof(char) * y);
    for (int i = 0; i < y; i++)
    {
        newString[i] = thisString[i + x - 1];
    }
    return newString;
}

// Returns the integer value representing the length of string ThisString
int length(string thisString)
{
    return strlen(thisString);
}

// Returns the character representing the lower-case equivalent of ThisChar
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

// Returns the character representing the upper-case equivalent of ThisChar
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

// Returns a string formed by converting all characters of ThisString to upper case.
string to_upper(string thisString)
{
    string newString = malloc(sizeof(thisString));
    for (int i = 0; i < strlen(thisString); i++)
    {
        newString[i] = ucase(thisString[i]);
    }
    return newString;
}

// Returns a string formed by converting all characters of ThisString to lower case.
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

// Returns the value TRUE if ThisChar represents a valid numeric value.
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

// Returns the value TRUE if ThisString represents a valid numeric value.
bool is_nums(string thisString)
{
    for (int i = 0; i < strlen(thisString); i++)
    {
        is_numc(thisString[i]);
    }
    return true;
}

// Returns an integer value (the ASCII value) of character ThisChar
int asc(char thisChar)
{
    return thisChar;
}

// Returns the character whose integer value (the ASCII value) is x
char chr(int x)
{
    return x;
}

int real_to_int(real x)
{
    return (int)x;
}