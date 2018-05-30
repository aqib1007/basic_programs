/*Given Pattern
1
23
345
4567
*/
#include<iostream>
using namespace std;


int main(){

      int N,val,k,line;
        cin>>N;
  for(line=1;line<=N;line++)
  {
    
    for(val=line;val<=(2*line)-1;val++)
    {
      cout<<val;
      
    }
  cout<<endl;
  }
  return 0;
  
}


