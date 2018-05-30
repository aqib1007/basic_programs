#include<iostream>
/*Given Pattern
         1
       23
     345
  4567
56789
*/
using namespace std;


int main(){
	int line,space,N,val,k=1;
  cin>>N;
      for(line=1;line<=N;line++)
      {
		  k=line;
        for(space=1;space<2*(N-line);space++)
        {
         cout<<" "; 
          
        }
        for(val=1;val<=line;val++)
        {
         
         cout<<k;
          k++;
        }
       
      cout<<endl;
      }
  return 0;
}


