 #include<iostream>
 
 using namespace std;

 int power(int a,int n)
 {
	 int i,b=1;
	 while(n!=0)
	 {b=b*a;
      n--;
	 //cout<<"b"<<b<<endl;}
	 return b;
 }
 int main()
 {
	 int a,N,val,val1,val2=0,pos=1,k=0;
	
	 cin>>N;
	 int 	m=N;
	while(N!= 0)
	{ 
	a=N%10; 
	k++;
	N=N/10;
	}
	//cout<<k;
	 while(m!=0)
	 {	 
		 val=m%10;
		 //cout<<"val"<<val<<endl;
		 if(pos<=k)
		 {
			 val1=pos*power(10,val-1);//^ cannot be used to raise power in c++,instead define a function power to use it. 
			 val2=val2+val1;
			//cout<<"val1"<<val1<<endl;
			//cout<<"val2"<<val2<<endl;
			//cout<<"pos"<<pos<<endl;
			pos++;
	 }
m=m/10;
	
	 }
	cout<<val2;
	 //cout<<m;
	 return 0;
 }
 