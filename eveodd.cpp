//program to print all even or odd numbers in a given range
#include<iostream>
using namespace std;
//function for even numbers
int even(int i, int j)
{ 
  if(j>i)
    return 1;
  else 
  {
    cout<<j<<endl;
    j+=2;
    even(i,j);//recursion
    return 0;
  }
}
//function for odd numbers
int odd(int i, int j)
{ 
  if(j>i)
    return 1;
  else 
  {
    cout<<j<<endl;
    j+=2;
    odd(i,j);//recursion
    return 0;
  }
}
//initiating main function
int main()
{ 
  //declaring variables
  int m,n,p;
  //initiating range
  cout<<"Please enter the initial value of range"<<endl;
  cin>>m;
  cout<<"Please enter the final value of range"<<endl;
  cin>>n;
  //deciding series
  cout<<"Please choose a series you want in range:"<<endl<<"1.Even"<<endl<<"2.Odd"<<endl;
  cin>>p;
  if(p!=1 && p!=2)
  {
    cout<<"Invalid output"<<endl;
    return 0;
  }
  else if(p==1)
  {
    cout<<"The even sequence is:"<<endl;
    if(m%2==0)
      even(n,m);
    else
      even(n,m+1);
  }
  else
  {
    cout<<"The odd sequence is:"<<endl;
    if(m%2==1)
odd(n,m);
 else
      odd(n,m+1);
  }
  return 0;
}
