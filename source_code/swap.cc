#include<iostream>
using namespace std;
int main()
{
    int first,second,temp;
    cin>>first;
    cin>>second;
    temp=first;
    first=second;
    second=temp;
    cout<<first<<endl;
    cout<<second<<endl;
    return 0;

}
