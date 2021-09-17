#include<iostream>
using namespace std;


int main(){
    //Write your code here. 
   int n, t1 = 1, t2 = 1, nextTerm = 0, i;
cin >> n;
if(n ==1){
cout << n<<endl;} 
else if(n==2){
	cout<<t2;
	
}
else{
for (i = 3; i <= n; ++i)
{
nextTerm=t1+t2;
t1=t2;
t2=nextTerm;
}
cout<<nextTerm;}

return 0;
   
}
