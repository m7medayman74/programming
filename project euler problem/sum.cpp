#include <iostream>

using namespace std;

  


int main() 
  {
    int z,x;
    int resalt =0;
    z=0;
    x=0;
      for (x;x<=100;x++ )
    {
      int t=x*x;
      resalt =resalt+t;
      
      
    }
    cout << "The sum of the squares of the first one hundred natural numbers is,"<< resalt<<endl;
      int sum ;
    for ( z; z<=100;z++)
    {
      
      sum=z*(z+1)/2;
    
      

   
    }
      sum*=sum;

        cout <<"The square of the sum of the first one hundred natural numbers is,"<< sum<<endl;
    
    cout << "Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is "<< sum<<"-"<<resalt<<"="<< sum-resalt;
    
  
   
  return 0;
}