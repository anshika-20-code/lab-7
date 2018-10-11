//Program to find the sum of all natural numbers from 1 to n
#include<iostream>
using namespace std;
//declaring sum function
int sum(int i,int j)
{
  if(j==i)
	return 1;
  else
    return j+sum(i,++j);//recursion
}
//declaring main function
int main()
{
  //declaring variables
  int n;
  //taking input for the natural number upto which the sum is to be calculated
  cout<<"Please enter the number upto which sum is to be calculated: "<<endl;
  cin>>n;
  cout<<"Required sum:"<<endl<<sum(n,1)<<endl;
  return 0;
}


