#include<iostream>
using namespace std;

int main() {
	// Write your code here
   int number1;
cin>>number1;
int count =0;
int i=1;
while(count<number1)
{

    int num = (3*i)+2;
    i++;
    if((num%4)==0)
    {

    }
    else
    {
        cout<<num<<" ";
        count++;
    }
	
  }
  return 0;
   
	
}

