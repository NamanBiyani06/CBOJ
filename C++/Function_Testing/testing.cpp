#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

bool isPrime(int x)
{
  switch(x)
  {
    default:
    for(int i = 2; i < x; i++)
    {
      if(i/2 != 0)
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

int NumberOfPrimes(int x)
{
  int count = 0;

  //boolean array the size of range
  bool primes[x + 1];

  //defaulting all values to true
  memset(primes, true, sizeof(primes));

  //one factor will always be less than sqrt()
  for(int p = 2; pow(p, 2) <= x; p++)
  {
    if(primes[p] == true)
    {
      for(int i = p * p; i <= x; i += p)
      {
        primes[i] = false;
      }
    }
  }
  
  for (int p = 2; p <= x; p++)
  {
    if(primes[p])
    {
      cout << p << " is prime" << endl;
      count++;
    }
  }
  
  return count;
}

int main()
{
  int x;
  cin >> x;

  cout << NumberOfPrimes(x) << endl;
}