/**
* listhelpers.hpp has been provided by the instructor as starter code
* contains the following procedures to work with lists:
* display, append, insert, remove, length
*/
#include "listhelpers.hpp"

#include <cstdlib>   // srand, rand
#include <ctime>     // time
#include <iostream>  // std::cin, std::cout
#include <string>    // std::string, std::getline
#include <vector>    // std::vector
#include <cmath>



void compare(int n1, int n2)
{
    if (n1 > n2)
    {
        std::cout << n1 << " is greater than " << n2 << std::endl;
    }
    else
    if (n1 < n2)
    {
         std::cout << n1 << " is less than " << n2 << std::endl;
    }
}

void quadForm(int a, int b, int c)
{

 std::cout << "The answers are " << (((-1 * b ) + sqrt(b*b - 4*a*c))/(2 * a)) << " and " << (((-1 * b ) - sqrt(b*b - 4*a*c))/(2 * a)) << std::endl;

}

int curr_index = 0;
int min = listA[0];
void minList(listA)
{
 while (curr_index < numbers.size())
{

  if (listA[curr_index] < min)

  {

     min = listA[curr_index];

  }

  curr_index = curr_index + 1;
}
 std::cout << "The minimum is " << min << std::endl;
}

int main()
{


 compare(6, 5);
 compare (2, 7);

 quadForm(1, -5, 6);
 quadForm(1, 9, 14);

minlist(listA)






    
    return 0;
}
