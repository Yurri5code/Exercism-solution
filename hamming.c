#include "hamming.h"
#include <string.h>

int compute(const char *lhs, const char *rhs)
{
   int k=0,l1=strlen(lhs),l2=strlen(rhs);
  if(l1==l2)
  {
    for(int i=0;i<l1;i++)
    {
        if(lhs[i]!=rhs[i])k++;
    }
    return k;
  }
else return -1;
}
