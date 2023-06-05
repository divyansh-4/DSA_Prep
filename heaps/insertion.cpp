#include <iostream>
#include <vector>
using namespace std;

void swap(int *a, int *b)
{
    int tmp = *a;
      *a = *b;
      *b = tmp;
}

int 