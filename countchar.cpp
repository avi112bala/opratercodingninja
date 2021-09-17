#include<iostream>
using namespace std;

int main()
{
    char c;
    int upper=0,lower=0,num=0,space=0;
    cin>>c;
    while(c!='$')
    {
        //check for uppercase
     if(c>='A' && c<='Z') 
     {
        upper++;
     }
     else if(c>='a' && c<='z')
       {//check lower case
                lower++;
       }
     else if(c>='0' && c<='9') 
      { //check number
                num++;
       }
        
    else
    {
        space++;
    }
        c=cin.get();
    }
    
    cout<<lower<<" ";
    cout<<num<<" ";
    cout<<space<<" ";
    return 0;
}
