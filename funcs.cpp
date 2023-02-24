#include <iostream>
#include <string>
#include "funcs.h"

//Task A 
std::string box(int width, int height)
{
  std::string shape;
  for(int row = 0; row < height; row++)
    {
      std::string shape = "*";
      for(int col = 0; col < width; col++)
        {
          std::cout<<shape;
        }
      std::cout<<"\n";
    }
  return shape;
}


//Task B 
std::string checkerboard(int width, int height)
{
  std::string shape;
  for (int row = 0; row < height; row++)
  {
    for (int col = 0; col < width; col++)
    {
	    if (row % 2 != 0 && col % 2 == 0)
	    {
		    std::cout<<" ";
	    }
	    else if (row % 2 == 0 && col % 2 != 0)
	    {
		    std::cout<<" ";
	    }
	    else
	    {
		    std::cout<<"*";
	    }
    }
	  std::cout<<"\n";
  }
	return shape;
}


//Task C 
std::string cross(int size)
{
  std::string shape; 
  for(int row = 0; row < size; row++)
    {
      for(int col = 0; col < size; col++)
        {
          if(col==row || col == (size-1-row))
          {
            std::string shape = "*"; 
            std::cout<<shape;
          }
          else
          {
            std::cout<<" ";
          }
        }
      std::cout<<"\n";
    }
  return shape;
}


//Task D 
std::string lower(int sideLength)
{
  std::string shape; 
  for (int row = 0; row <= sideLength; row++)
    {
      std::string shape = "*"; 
      for (int col = 0; col < row; col++)
        {
          std::cout<<shape;
        }
      std::cout<<" ";
    }
  return shape;
}


//Task E
std::string upper(int upLength)
{
  std::string shape;
  for (int row = upLength; row >= 0; row--)
    {
      std::string shape = "*";
      for (int col = upLength - row; col > 0; col--)
        {
          std::cout<<" ";
        }
      for (int x = row ; x > 0 ; x --)
        {
          std::cout<<shape; 
        }
      std::cout<<"\n";
    }
  return shape; 
}


//Task F
std::string trapezoid(int width, int height)
{
	std::string shape;
	int spaces = 0;
	int stars = width;
	if (height>(width/2))
	{
		std::cout<<"Impossible shape!";
	}
	else 
  	{
		for (int row = 0 ; row < height; row++)
  		{
			for (int col = 0; col < spaces; col++)
    			{
				std::cout<<" ";
			}
			for (int col = 0; col < stars; col++)
    			{
				std::cout<<"*";
			}
			spaces += 1;
	  	stars -= 2;
	 	std::cout<<"\n";
	} 
  }
	return shape;
}


//Task G
std::string checkerBoard3x3(int width, int height)
{
  std::string shape;
  for (int row = 0; row < height; row++)
  {
    for (int col = 0; col < width; col++)
    {
      if((row / 3 + col / 3) % 2 == 0)
      {
        std::cout<<"*";
      }
      else
      {
        std::cout<<" ";
      }
    }
  std::cout<<"\n"; 
  }
  return shape;
}
