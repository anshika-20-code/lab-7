//Program to find the reverse of a number using recursion
#include<iostream>
using namespace std;
//declaring function to return the reverse of digits
int reverse(int i, int j) 
{ 
  if (i==0) 
    return j; 
  j=(j*10)+(i%10); 
  return reverse(i/10,j);//recursion 
} 
//declaring main function
int main() 
{ 
  //declaring variables
  int n;
  //assigning value
  cout<<"Please enter the number you wish to reverse:"<<endl;
  cin>>n;
  int p=reverse(n,0);//calling required function
  cout<<"The reverse of the given number is "<<p<<endl;
  return 0;
}


