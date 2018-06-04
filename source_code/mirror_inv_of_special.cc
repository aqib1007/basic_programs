#include<iostream>
using namespace std;

int power(int a,int c)
{
	int i=1,l=1;
	for(i=1;i<=c;i++)
	{
		l=l*a;
	}

	return l;
}
int inverse(int n)
{
	int m=n,a,k=0,b,pos=1,val,val1=0;
	while(n!=0)
	{
		a=n%10;
		k++;
		n=n/10;
	}
	while(m!=0)
	{
		b=m%10;
		if(pos<=k){
		val=pos*power(10,b-1);
		val1=val1+val;
		pos++;
		}
		m=m/10;
	}
//cout<<val1<<endl;
	return val1;

}
int main()
{
	int n,v;
	cin>>n;
	
	int z=n;
	v=inverse(n);
	if(v==z)
	cout<<"true"<<endl;
	else
	cout<<"false"<<endl;
}