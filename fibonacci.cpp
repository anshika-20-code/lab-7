//Program to find nth fibonacci number as input by user
#include<iostream>
using namespace std;
//function to find the nth fibonacci number
int fib(int i) 
{ 
  if (i<= 1) 
    return i; 
  return fib(i-1)+fib(i-2);//incursion
} 
//declaring main function  
int main() 
{ 
  //declaring variables
  int n; 
  //assigning value
  cout<<"Please input a number:"<<endl; 
  cin>>n; 
  cout<<"The "<<n<<"th fibonacci number is:"<<fib(n-1)<<endl;
  return 0; 
} 
