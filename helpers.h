#include <stdbool.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

typedef char *string;

typedef float real;

void outstring(string str);

void outchar(char chr);

void outint(int num);

void outreal(real num);

void outbool(bool x);

// Outputs to terminal
#define output(message) _Generic((message),   \
                                 string       \
                                 : outstring, \
                                   char       \
                                 : outchar,   \
                                   int        \
                                 : outint,    \
                                   bool       \
                                 : outbool,   \
                                   real       \
                                 : outreal)(message)

string input(void);

string left(string thisString, int x);

string right(string thisString, int x);

string mid(string thisString, int x, int y);

int length(string thisString);

char lcase(char thisChar);

char ucase(char thisChar);

string to_upper(string thisString);

string to_lower(string thisString);

string int_to_str(int x);

int str_to_int(string x);

bool is_numc(char thisChar);

bool is_nums(string thisString);

// returns the value true if num represents a valid numeric value.
#define is_num(num) _Generic((num),     \
                             string     \
                             : is_nums, \
                               char     \
                             : is_numc)(num)

int asc(char thisChar);

char chr(int x);

int real_to_int(real x);