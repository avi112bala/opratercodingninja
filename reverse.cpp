#include<iostream>
using namespace std;
int main(){
    int num;
cout<<endl;
cin>>num;

int rev = 0;
int reminder;
while(num != 0)
{
    reminder = num % 10;
    rev = rev * 10 + reminder;
    num = num / 10;
}
cout<<rev<<endl;
}
