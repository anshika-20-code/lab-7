//program to find the power of a number using recursion
#include<iostream>
using namespace std;
//defining function to derive poer of the number
int pow(int i,int j,int k)
{
  if(k==0)
     return 1;
  else
     return i*pow(i,j,--k);//recursion
}
//declaring main function
int main()
{
  int i,j;
  //assigning values to variables
  cout<<"please enter a number:"<<endl;
  cin>>i;
  cout<<"Please enter the power to which you want to raise the number"<<endl;
  cin>>j;
  cout<<"the required result is:"<<endl;
  cout<<pow(i,j,j)<<endl;
  return 0;
}
