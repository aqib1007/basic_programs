#include<iostream>
using namespace std;


int main(){
		int N,sum1=0;
          cin>>N;
      for(int num=1;num<=N;num++)   
      {
        if(num%2==0)
          sum1=sum1+num;
      }
cout<<sum1;
return 0;
}


