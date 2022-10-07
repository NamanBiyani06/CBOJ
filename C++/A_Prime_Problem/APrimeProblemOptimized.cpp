/*
A solution using the Sieve of Eratosthenes to find primes
*/
#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

//x is upper limit
//y is lower limit
int NumberOfPrimes(int x, int y);

int main()
{



  int q;
  cin >> q;

  int range[2];
  int output[q];

  for (int i = 0; i < q; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      cin >> range[j];
    }
    

    output[i] = NumberOfPrimes(range[1], range[0]);
    
  }

  for(int i = 0; i < q; i++)
  {
    cout << output[i] << endl;
  }

  

  
}

int NumberOfPrimes(int x, int y)
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
  
  if(y % 2 != 0)
  {
    for (int p = y; p <= x; p+=2)
    {
      if(primes[p])
      {
        //cout << p << " is prime" << endl;
        count++;
      }
    }
  }
  else
  {
    for (int p = y; p <= x; p++)
    {
      if(primes[p])
      {
        //cout << p << " is prime" << endl;
        count++;
      }
    }
  }
  

  
  //cout << "---------------" << endl;
  
  return count;
}