#include<iostream>
using namespace std;
int main()
{
    string number[]={"zero","one","two","three","four","five","six",
    "seven","eight","nine"};
    int n;
    cin>>n;
    if(n<=9)
    {
        cout<<number[n];
    }
    else 
    {
        cout<<"Greater than 9";
    }
    
}
