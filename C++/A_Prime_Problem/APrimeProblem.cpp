/*
A solution using brute force to find primes
Batch #3 Case #1 Time Limit Exceeded
*/
#include <iostream>
using namespace std;

bool isPrime(int x);

int main()
{
  int q;
  cin >> q;

  int range[2];
  int output[q];

  for (int i = 0; i < q; i++)
  {
    int count = 0;
    for (int j = 0; j < 2; j++)
    {
      cin >> range[j];
    }
    for (int j = range[0]; j <= range[1]; j++)
    {
      if(isPrime(j))
      {
        //cout << j << " is prime" << endl;
        count++;
      }
    }
    output[i] = count;
    count = 0;
  }

  for(int i = 0; i < q; i++)
  {
    cout << output[i] << endl;
  }
}

bool isPrime(int x)
{
  if(x % 2 == 0 && x != 2)
  {
    return false;
  }
  switch(x)
  {
    default:
    for(int i = 2; i < x; i++)
    {
      if(i/2 != 0 && i != 2)
      {
        if(x % i == 0)
        {
          return false;
        }
      }
    }
    return true;

    case 1:
    return false;
  }
}