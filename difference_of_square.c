unsigned int square_of_sum(unsigned int number) {
    unsigned int square = 0;
    for(unsigned int i = 0;i <= number;i++) {
        square +=i;
    }
    square = pow(square,2);

    return square;
}

 unsigned int sum_of_squares(unsigned int number){
    unsigned int square = 0;
    for(unsigned int i = 1;i <= number;i++) {
        square += pow(i,2);
    }
    return square;
}

unsigned int difference_of_squares(unsigned int number) {
    return (unsigned int)(square_of_sum(number) - sum_of_squares(number));
}

//meilleure solution 
unsigned int square_of_sum(unsigned int number)
{
   unsigned int sum = (number * (number + 1)) / 2;
   return sum * sum;
}

unsigned int sum_of_squares(unsigned int number)
{
   return (number * (number + 1) * ((number * 2) + 1)) / 6;
}

unsigned int difference_of_squares(unsigned int number)
{
   return square_of_sum(number) - sum_of_squares(number);
}
