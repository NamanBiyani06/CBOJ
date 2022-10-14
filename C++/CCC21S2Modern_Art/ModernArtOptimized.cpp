#include <iostream>
using namespace std;

int main()
{
  int count = 0;
  int height; cin >> height;
  int width; cin >> width;
  int queries; cin >> queries;
  int row = 0;
  int column = 0;

  for (int i = 0; i < queries; i++)
  {
    char type;
    int typeNumber = 0;
    cin >> type;
    cin >> typeNumber;

    switch (type)
    {
      case 'R':
      row++;
      count -= column;
      count += (width - column);
      break;
      
      case 'C':
      column++;
      count -= row;
      count += (height - row);
      break;
    }

    cout << "count after " << i+1 << "th iteration:" << endl;
    cout << count << endl;
  }
  
  cout << count;
}