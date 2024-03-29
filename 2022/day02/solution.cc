#include <iostream>
#include <fstream>
#include <string>
#include <cassert>

void solve_A()
{
  // Read an input file
  std::ifstream input_file("input.txt");
  assert(input_file.is_open());

  // Read each line until reach EoF
  char opponent, mine;
  uint64_t score = 0;
  while (input_file >> opponent >> mine)
  {
    switch (mine)
    {
      // X = Rock
      case 'X':
        score += 1;
        switch (opponent)
        {
          case 'A': score += 3; break;
          case 'B': score += 0; break;
          case 'C': score += 6; break;
        }
        break;
      // Y = Paper
      case 'Y':
        score += 2;
        switch (opponent)
        {
          case 'A': score += 6; break;
          case 'B': score += 3; break;
          case 'C': score += 0; break;
        }
        break;
      // Z = Scissors
      case 'Z':
        score += 3;
        switch (opponent)
        {
          case 'A': score += 0; break;
          case 'B': score += 6; break;
          case 'C': score += 3; break;
        }
        break;
    }
  }

  // Output
  std::cout << score << std::endl;
}

void solve_B()
{
  // Read an input file
  std::ifstream input_file("input.txt");
  assert(input_file.is_open());

  // Read each line until reach EoF
  char opponent, mine;
  uint64_t score = 0;
  while (input_file >> opponent >> mine)
  {
    switch (mine)
    {
      case 'X':
        score += 0;
        switch (opponent)
        {
          case 'A': score += 3; break;
          case 'B': score += 1; break;
          case 'C': score += 2; break;
        }
        break;
      case 'Y':
        score += 3;
        switch (opponent)
        {
          case 'A': score += 1; break;
          case 'B': score += 2; break;
          case 'C': score += 3; break;
        }
        break;
      case 'Z':
        score += 6;
        switch (opponent)
        {
          case 'A': score += 2; break;
          case 'B': score += 3; break;
          case 'C': score += 1; break;
        }
        break;
    }
  }

  // Output
  std::cout << score << std::endl;
}

int main()
{
  // solve_A();
  solve_B();
  return 0;
}