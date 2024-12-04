#include<iostream>
using namespace std;
int main()
{
  int n;
  int sum=0;
  cout<<"Enter a natural num to find sum"<<endl;
  cin>>n;
  while(n>0){
    sum +=n;
    n--;
  }
  cout<<"Sum of given N natural num is:- " <<sum;
  return 0;

}
