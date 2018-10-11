//program to find sum of all even or odd numbers in a range
#include<iostream>
using namespace std;
//function for even numbers
int even(int i, int j)
{ 
  if(j>i)
    return 1;
  else 
    return j+even(i,j+=2);
}
//function for odd numbers
int odd(int i, int j)
{ 
  if(j>i)
    return 1;
  else 
    return j+odd(i,j+=2);
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
    cout<<"The even sum is:"<<endl;
    if(m%2==0)
      cout<<even(n,m);
    else
      cout<<even(n,m+1);
  }
  else
  {
    cout<<"The odd sum is:"<<endl;
    if(m%2==1)
      cout<<odd(n,m);
    else
      cout<<odd(n,m+1);
  }
  return 0;
}

