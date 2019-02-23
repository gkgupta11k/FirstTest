#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;
int main()
{
 int x1=8,x2=6,y1=14,y2=22, s,z;
  double distance;
  cout<<"X1 and Y1 coordinates are 6 & 1o"<<endl;

  cout << "x2 and Y2 coordinates are 12 &  18 ";
  s=x2-x1;
  z=y2-y1;
  distance=sqrt(pow(s,2)+pow(z,2));
  cout<<"distance betweeen two coordinates is "<<setprecision(4)<<distance;

  return 0;
}

