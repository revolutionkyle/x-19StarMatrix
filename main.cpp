#include<vector>
#include<iostream>
#include<string>
using namespace std;
int main()
{int inrows;
 int incols;
 vector< vector<char> > starMatrix;
 cout << "Please enter a number of rows." << endl;
 cin >> inrows;
 cout << "Please enter a number of columns." << endl;
 cin >> incols;

 if(inrows <=0 || incols <= 0)
 { cout << endl;
 }
 else if(inrows > 0 && incols > 0)
 { starMatrix.resize(inrows);
   for(int k = 0; k<starMatrix.size(); k++)
   { starMatrix[k].resize(incols);
   }
   for(int r = 0; r<starMatrix.size(); r++)
   {    for(int s=0;s < starMatrix.size(); s++)
        { starMatrix[r][s] = '*';
        }
   }
   for(int l=0;l<starMatrix.size();l++)
   {    for(int k=0;k<starMatrix[l].size();k++)
        { cout << starMatrix[l][k];  
        }
        cout << endl;
   }
 }
return 0;
}
