//Program to find the sum of digits of a number using recursion
#include<iostream>
using namespace std;
//declaring function to return the sum of digits
int sum(int i, int j) 
{ 
  if (i==0) 
    return j; 
  j=j+(i%10); 
  return sum(i/10,j);//recursion 
} 
//declaring main function
int main() 
{ 
  //declaring variables
  int n;
  //assigning value
  cout<<"Please enter the number:"<<endl;
  cin>>n;
  int p=sum(n,0);//calling required function
  cout<<"The sum of digits of the given number is "<<p<<endl;
  return 0;
}
