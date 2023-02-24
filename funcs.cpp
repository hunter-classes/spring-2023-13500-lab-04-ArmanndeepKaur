#include <iostream>
#include <string>
#include "funcs.h"

//Task A 
std::string box(int width, int height)
{
  for(int row = 0; row < height; row++)
    {
      for(int col = 0; col < width; col++)
        {
          std::cout<<"*";
        }
      std::cout<<"\n";
    }
  return 0;
}


//Task B 
std::string checkerBoard(int width, int height)
{
  for(int row = 0; row < height; row++)
    {
      for(int col = 0; col < width; col++)
        {
          if(col + row % 2 == 0)
          {
            std::cout<<" ";
          }
          else
          {
            std::cout<<"* ";
          }
        }
      std::cout<<"\n";
    }
  return 0;
}


//Task C 
std::string cross(int size)
{
  for(int row = 0; row < size; row++)
    {
      for(int col = 0; col < size; col++)
        {
          if(col==row || col == (size-1-row))
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
  return 0;
}


//Task D 
std::string lower(int sideLength)
{
  for (int row = 0; row < sideLength; row++)
    {
      for (int col = 0; col <= row; col++)
        {
          std::cout<<"*";
        }
      std::cout<<" ";
    }
  return 0;
}


//Task E
std::string upper(int upLength)
{
  for (int row = 0; row < upLength; row++)
    {
      for (int col = 0; col < upLength - row; col++)
        {
          std::cout<<"*"; 
        }
      std::cout<<"\n";
    }
  return 0; 
}


//Task F
std::string trapezoid(int width, int height)
{
  int spaces = 0;
  int stars = width;
  
  if(height * 2 > width)
  {
    std::cout<<"Impossible Shape\n";
  }
  else
  {
    for(int i = 1; i < height; i++)
    {
      for(int j = 0; j < spaces; j++)
      {
        std::cout<<" ";
      }
      for (int j = 0; j < stars; j++)
      {
        std::cout<<"*";
      }
      
      spaces +=1;
      stars -= 2;
      std::cout<<"\n";
      }
    }
  return 0;
}


//Task G
std::string checkerBoard3x3(int width, int height)
{
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
  return 0;
}