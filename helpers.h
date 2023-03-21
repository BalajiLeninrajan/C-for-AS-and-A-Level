#include <stdbool.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef char *string;

typedef float real;

typedef bool boolean;

typedef struct date
{
  int day;
  int month;
  int year;
} date;

void printstring(string str);

void printchar(char chr);

void printint(int num);

void printreal(real num);

void printbool(bool x);

void printdate(date dt);

// Outputs to terminal
#define output(message) _Generic((message),     \
                                 string         \
                                 : printstring, \
                                   char         \
                                 : printchar,   \
                                   int          \
                                 : printint,    \
                                   bool         \
                                 : printbool,   \
                                   real         \
                                 : printreal,   \
                                   date         \
                                 : printdate)(message)

void printstringns(string str);

void printcharns(char chr);

void printintns(int num);

void printrealns(real num);

void printboolns(bool x);

void printdatens(date dt);

// Outputs to terminal with no new line
#define outputns(message) _Generic((message),       \
                                   string           \
                                   : printstringns, \
                                     char           \
                                   : printcharns,   \
                                     int            \
                                   : printintns,    \
                                     bool           \
                                   : printboolns,   \
                                     real           \
                                   : printrealns,   \
                                     date           \
                                   : printdatens)(message)

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

real rnd(int x);

int day(date thisDate);

int month(date thisDate);

int year(date thisDate);

date setDate(int d, int m, int y);

date today(void);