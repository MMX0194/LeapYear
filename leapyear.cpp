#include <iostream>

using namespace std;

int main()
{
  int year;
  cout<<"Yili girin: "<< endl;
  cin>> year;
  if((year % 4) ==0)
  {
    cout<<" artık yıl ";
  }
  else
  {
    cout <<" artık yıl degildir" << endl;
  }
  return 0;
}