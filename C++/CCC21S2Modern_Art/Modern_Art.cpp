#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int height; cin >> height;
  int width; cin >> width;
  int queries; cin >> queries;

  int canvas[width][height];
  //0 means black, 1 means gold
  for (int i = 0; i < width; i++)
  {
    for (int j = 0; j < height; j++)
    {
      canvas[i][j] = 0;
    } 
  }

  for (int i = 0; i < queries; i++)
  {
    // cout << "Current Canvas:" << endl;
    // for (int i = 0; i < width; i++)
    // {
    //   for (int j = 0; j < height; j++)
    //   {
    //     cout << canvas[i][j];
    //   }
    //   cout << endl;
    // }

    char type;
    int typeNumber = 0;
    cin >> type;
    cin >> typeNumber;

    switch(type)
    {
      case 'C':
      for(int j = 0; j < height; j++)
      {
        if(canvas[typeNumber-1][j] == 0) canvas[typeNumber-1][j] = 1;
        else canvas[typeNumber-1][j] = 0;
      }
      break;

      case 'R':
      for(int j = 0; j < width; j++)
      {
        if(canvas[j][typeNumber-1] == 0) canvas[j][typeNumber-1] = 1;
        else canvas[j][typeNumber-1] = 0;
      }
      break;
    }
  }
  
  // cout << "Final Canvas:" << endl;
  // for (int i = 0; i < width; i++)
  // {
  //   for (int j = 0; j < height; j++)
  //   {
  //     cout << canvas[i][j];
  //   }
  //   cout << endl;
  // }

  int count = 0;
  //cout << "Gold:" << endl;
  for (int i = 0; i < width; i++)
  {
    for (int j = 0; j < height; j++)
    {
      if(canvas[i][j] == 1) count++;
    }
    
  }
  cout << count << endl;

}