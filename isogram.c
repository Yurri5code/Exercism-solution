#include "isogram.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

bool is_isogram(const char phrase[])
{
    int k=0;
    if(phrase==NULL )return false;
    else{
        int s=strlen(phrase);
   for(int i=0;i<s;i++)
   {
       for(int j=i+1;j<s;j++)
       { 
           if(phrase[i]==' ' || phrase[i]=='-')continue;
            if (phrase[i] == phrase[j] || phrase[i]==toupper(phrase[j]))k++;
           if(toupper(phrase[i])==phrase[j])k++;
       }
   }
    }
if(k==0)return true;
    else return false;
}
