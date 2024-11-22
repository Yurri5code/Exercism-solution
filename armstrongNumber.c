#include "armstrong_numbers.h"
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool is_armstrong_number(int candidate)
{
       char str_num[100]; // Chaîne de caractères pour stocker le nombre
    int digits[100]; // Tableau pour stocker les chiffres
    long long t=0,s=0,cmp=0;
    // Conversion en chaîne de caractères
    sprintf(str_num, "%d", candidate);

    // Extraction des chiffres
    cmp=strlen(str_num);
    
    for(int a=0;a<cmp;a++){
        digits[a] = str_num[a] - '0'; // Conversion de caractère à entier
    }
    for(int j=0;j<cmp;j++)
    {
        t=1;
        for(int x=0;x<cmp;x++)
        {
            t*=digits[j];
        }
    s+=t;
        
    }
if(s==candidate)
{
    return true;
}
else {
    return false;
}
}
