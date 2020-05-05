#include <cctype>
#include <stdio.h>
#include "digit-sum.hh"

int digitSum(const char* str)
{
  int acc = 0;

  for (const char* p = str; *p; ++p) {
	char c = *p; 
	if (c != ' ' && c != '+' && (c > '9' || c < '0') ) break;
	if( (c>'0' || c<'9') && ((char) *(p+1)>'0' || (char) *(p+1)<'9')) break;
        if( c == '+' && (char) *(p+1) == '+') break;
	if (isdigit(c)) acc += *p - '0';
   }

  return acc;
}
