#include <math.h>
#include "grains.h"
uint64_t square(uint8_t index)
{
  return pow(2, index - 1);
}
uint64_t total(void)
{
  return (uint64_t)pow(2, 64);
}





#ifndef GRAINS_H
#define GRAINS_H
#include <stdint.h>
uint64_t square(uint8_t index);
uint64_t total(void);
#endif


//my code 
#include "grains.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

uint64_t square(uint8_t index)
{
    return pow(2,index -1);
    
}

uint64_t total(void){
  return (uint64_t)pow(2,64);  
}





#ifndef GRAINS_H
#define GRAINS_H

#include <stdint.h>

uint64_t square(uint8_t index);
uint64_t total(void);

#endif
