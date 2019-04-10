#include<iostream>
using namespace std;
int main()
{
  int n,cur=0,total=0;
  cin>>n;
  while(cin>>n)
  {
    if(n>cur)
    {
      total += 6*(n-cur);
    }
    else
    {
      total += 4*(cur-n);
    }
    cur = n;
    total += 5;
  }
  cout<<total;
  return 0;
}