//program to print all natural numbers from 1 to n as asked by user
#include<iostream>
using namespace std;
//function to print natural numbers
int natural(int p,int q)
{
  if(q>p)
    return 1;
  else
  {
     cout<<q<<endl;
     natural(p,++q);
     return 0;
  }
}
//initiating driver function
int main()
{
  //declaring variables
  int n;
  //assigning values
  cout<<"Please enter the number till which you wish for the sequence to appear"<<endl;
  cin>>n;
  cout<<"The sequence is:"<<endl;
  natural(n,1);//calling required function
  return 0;
}

