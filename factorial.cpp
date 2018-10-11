//Program to find the factorial of a given number
#include<iostream>
using namespace std;
//declaring sum function
int fact(int i,int j)
{
  if(j==i)
	return 1;
  else
    return j*fact(i,++j);//recursion
}
//declaring main function
int main()
{
  //declaring variables
  int n;
  //taking input for the natural number upto which the sum is to be calculated
  cout<<"Please enter the number whose factorial is to be found: "<<endl;
  cin>>n;
  cout<<"Required factorial:"<<endl<<fact(n,1)<<endl;
  return 0;
}
