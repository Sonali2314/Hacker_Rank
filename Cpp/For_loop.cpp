#include <iostream>
#include<string>
using namespace std;

int main()
{
    int a,b;
    string arr[]={"zero","one","two","three","four","five","six","seven",
    "eight","nine"};
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {   
        if(i<=9)
        {
            cout<<arr[i]<<endl;
        }
        else
         {
            if(i%2==0)
                cout<<"even"<<endl;
            else
                cout<<"odd"<<endl;
         }
    }
    
    return 0;
}
