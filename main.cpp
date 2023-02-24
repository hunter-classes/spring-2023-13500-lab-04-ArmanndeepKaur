#include <iostream>
#include <string>
#include "funcs.h"

int main()
{
//Task A 
std::string result;
std::cout << "box(3,5):\n";
result = box(3,5);
std::cout << result;
std::cout << "\n------------------\n";

//Task B 
std::string result1;
std::cout << "checkerBoard(11,6):\n";
result1 = checkerBoard(3,5);
std::cout << result1;
std::cout << "\n------------------\n";

//Task C
std::string result2;
std::cout << "cross(7):\n";
result2 = cross(7);
std::cout << result2;
std::cout << "\n------------------\n";

//Task D 
std::string result3;
std::cout << "lower(8):\n";
result3 = lower(8);
std::cout << result3;
std::cout << "\n------------------\n";

//Task E 
std::string result4;
std::cout << "upper(9):\n";
result4 = upper(9);
std::cout << result4;
std::cout << "\n------------------\n";

//Task F 
std::string result5;
std::cout << "trapezoid(12,5):\n";
result5 = trapezoid(3,5);
std::cout << result5;
std::cout << "\n------------------\n";

std::string resultF;
std::cout<< "trapezoid(12,7)\n";
resultF = trapezoid(12,7);
std::cout<<resultF;
std::cout << "\n------------------\n";

//Task G
std::string result6;
std::cout << "checkerBoard3x3(16,11):\n";
result6 = checkerBoard3x3(16,11);
std::cout << result6;
std::cout << "\n------------------\n";

return 0;
}