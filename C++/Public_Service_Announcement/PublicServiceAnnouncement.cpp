#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int queries, arrSize;
  cin >> arrSize >> queries;

  int arr[arrSize];
  vector <int> out;
  for (int i = 0; i < arrSize; i++)
  {
    cin >> arr[i];
  }

  for (int i = 0; i < queries; i++)
  {
    int a = 0, b = 0, sum = 0;
    cin >> a >> b;
    for (int j = a; j <= b; j++)
    {
      sum += arr[j-1];
    }
    out.push_back(sum);
  }
  
  for (int i = 0; i < out.size(); i++)
  {
    cout << out.at(i) << endl;
  }
  
  return 0;
}