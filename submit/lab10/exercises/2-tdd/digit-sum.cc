#include <cctype>
#include <stdio.h>
#include "digit-sum.hh"

int digitSum(const char* str)
{
  int acc = 0;

  for (const char* p = str; *p; ++p) {
	char c = *p;
	if (c != ' ' && c != '+' && (c > '9' || c < '0') ) break;
	if (isdigit(c)) acc += *p - '0';
   }

  return acc;
}
