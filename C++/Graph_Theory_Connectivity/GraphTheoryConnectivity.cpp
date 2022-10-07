#include <iostream>
#include <vector>
using namespace std;

vector <bool> visited;

void DFS(int node, vector <int> graph[]);
int main()
{
  // n is number of nodes
  // m is number of edges
  int n, m;
  cin >> n >> m;
  for (int i = 0; i < n; i++)
  {
    visited.push_back(false);
  }

  // array of size n containing integer vectors
  //array: type vector, size n
  vector<int> graph[n];

  for (int i = 0; i < m; i++)
  {
    // input consists of 2 ints per line
    // each line has two nodes which a connected bidirectionally
    int n1, n2;
    cin >> n1 >> n2;
    n1--;
    n2--;
    if(n1 != n2)
    {
      graph[n1].push_back(n2);
      graph[n2].push_back(n1); 
    }
    else
    {
      graph[n1].push_back(n2);
    }
  }

  DFS(0, graph);
  if(visited.at(n-1) == true) cout << "YES" << endl;
  else cout << "NO" << endl;
  return 0;
}

void DFS(int node, vector <int> graph[])
{
  if(visited[node]) return;
  visited[node] = true;
  for (int i = 0; i < graph[node].size(); i++)
  {
    //cout << i << endl;
    DFS(graph[node].at(i), graph);
    
  }
}