#include <iostream>
#include <string>
#include "funcs.h"

int main()
{
//Task A 
std::cout << box(7,4);
std::cout << "\n------------------\n";
std::cout << box(9,7);
std::cout << "\n------------------\n";
std::cout << box(6,2);
std::cout << "\n------------------\n";

//Task B 
std::cout << checkerBoard(11,6);
std::cout << "\n------------------\n";
std::cout << checkerBoard(12,7);
std::cout << "\n------------------\n";
std::cout << checkerBoard(13,8);
std::cout << "\n------------------\n";

//Task C
std::cout << cross(9);
std::cout << "\n------------------\n";
std::cout << cross(5);
std::cout << "\n------------------\n";
std::cout << cross(11);
std::cout << "\n------------------\n";

//Task D 
std::cout << lower(6);
std::cout << "\n------------------\n";
std::cout << lower(8);
std::cout << "\n------------------\n";
std::cout << lower(10);
std::cout << "\n------------------\n";

//Task E 
std::cout << upper(5);
std::cout << "\n------------------\n";
std::cout << upper(7);
std::cout << "\n------------------\n";
std::cout << upper(9);
std::cout << "\n------------------\n";

//Task F 
std::cout << trapezoid(12,5);
std::cout << "\n------------------\n";
std::cout << trapezoid(12,7);
std::cout << "\n------------------\n";
std::cout << trapezoid(12,9);
std::cout << "\n------------------\n";

//Task G
std::cout << checkerBoard3x3(16,11);
std::cout << "\n------------------\n";
std::cout << checkerBoard3x3(18,13);
std::cout << "\n------------------\n";
std::cout << checkerBoard3x3(14,10);
std::cout << "\n------------------\n";
}