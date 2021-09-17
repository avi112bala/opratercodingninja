#include<iostream>
using namespace std;
int main ()
{
    int  n, i, sum = 0, pro = 1,choice;
    cin >> n;
    
    cin>>choice;
    switch(choice)
    {
    case 1:     
    
       for (i = 1; i <= n; i++)
    {
        sum = sum+i;
    }
        cout<<sum;
            break;
        
    case 2:
       for(i=1;i<=n;i++)
      {
         pro=pro*i;
      }
         cout << pro;
            break;
        default:
            cout<<"-1";
            break;
    }        
    
    return 0;
}
  
