#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  double area = 0.0;
  int height[n+1];
  int width[n];

  for(int i = 0; i < (n+1); i++) cin >> height[i];
  for(int i = 0; i < (n); i++) cin >> width[i];

  for (int i = 0; i < n; i++) area += ((double)width[i] * ((double)height[i] + (double)height[i+1]))/2.0;

  cout << fixed;
  cout << area << endl;
  return 0;
}