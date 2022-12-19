#include <iostream>
#include <vector>
using namespace std;

int main()
{

  //input
  int n,  q;
  cin >> n >> q;

  //create psa and array
  vector<long long> psa(n);
  vector<int> array(n); 

  //input
  for(int i = 0; i < n; i++)
  {
    int temp = 0; cin >> temp;
    array[i] = temp;
  }

  //create psa
  for(int i = 0; i < n; i++)
  {
    if(i == 0) psa[i] = array[i];
    else psa[i] = psa[i-1] + array[i];
  }

  //queries
  for(int i = 0; i < q; i++)
  {
    int l, r;
    cin >> l >> r;
    if(l == 1) cout << fixed << psa[r-1] << endl;
    else cout << fixed << psa[r-1] - psa[l-2] << endl;
  } 
}
