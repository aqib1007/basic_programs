/*
for n=12;
output:
11
9
7
5
3
1
2
4
6
8
10
12*/#include<iostream>
using namespace std;
void dec(int n)
{
    while(n>0)
    {
        if(n%2==0)
        {n--;
        cout<<n<<endl;
    }
        else
        {
             cout<<n<<endl;
            
        }
             n=n-2; 
  
      
    }
}
void inc(int n)
{
    for(int i=2;i<=n;i+=2)
    cout<<i<<endl;
}
int main() {
    int n;
    cin>>n;
    dec(n);
    inc(n);
	return 0;
}