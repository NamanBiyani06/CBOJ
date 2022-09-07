#include <iostream>
#include <vector>
using namespace std;

int main()
{
  // n is number of nodes
  // m is number of edges
  int n, m;
  cin >> n >> m;

  // array of size n containing integer vectors
  vector<int> graph[n];

  
  for (int i = 0; i < m; i++)
  {
    // input consists of 2 ints per line
    // each line has two nodes which a connected bidirectionally
    int n1, n2;
    cin >> n1 >> n2;
    n1 -= n1;
    n2 -= n2;
    graph[n1].push_back(n2);
    graph[n2].push_back(n1);
  }


  /*
  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < graph[n].size(); j++)
    {
      cout << (graph[n]).at(j) << endl;
    }
    cout << "\n\n";
  }
  */
}
