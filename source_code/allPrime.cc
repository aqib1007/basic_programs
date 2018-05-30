#include <iostream>
using namespace std;

int main(){
int N,allnum,fact,k=0;
  cin>>N;
  for(allnum=2;allnum<=N;allnum++)
  {
    for(fact=1;fact<=allnum;fact++)
    {
      if(allnum%fact==0)
        k++;
    }
  if(k==2)
  cout<<allnum<<endl;
    k=0;
  }
  return 0;
}


