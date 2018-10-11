//Program to check if a number is palindromic using recursion 
#include <iostream> 
using namespace std; 
//declaring function to return the reverse of digits
int palin(int i,int j) 
{ 
  if (i==0) 
    return j; 
  j=(j*10)+(i%10); 
  return palin(i/10,j);//recursion 
} 
//declaring main function
int main() 
{ 
  //declaring variables
  int n;
  //assigning value
  cout<<"Please enter the number you wish to check:"<<endl;
  cin>>n;
  int p=palin(n,0);//calling required function
  if(p==n)
    cout<<"The given number is palindromic."<<endl;
  else
    cout<<"The given number is not palindromic."<<endl;
  return 0;
}


