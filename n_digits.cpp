#include<iostream>
using namespace std;

int main()
{
    int n,num=0;
    cin>>n;
    do
    {
        n= n/10;
        num=num+1;
    }
    while(n--);
    cout<<num<<endl;
}