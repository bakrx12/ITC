#include <iostream> 
using namespace std; 
 //rplacing rpeition with while
int main() 
{ 
    int n = 16; 
  int trial = 2  ; 
  int s = 0; 
  int iteration = 6;

    while (iteration >= 0)
    {
        if(trial * trial < n) 
    { 
      s = trial ; 
    } 
  trial++; 
  iteration--;
    }
  cout << s << endl; 
  return 0; 
} 
