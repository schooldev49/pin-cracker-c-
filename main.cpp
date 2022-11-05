#include <bits/stdc++.h>

typedef int i;
typedef unsigned long long int id;
typedef bool b;
#define syn ios::sync_with_stdio;
#define w(cond) while(cond);
using namespace std;

int main() {
  syn(0);
  cout.tie(0);
  cin.tie(0);
    
    id pass;
  cout << "Enter your pin to see how fast people can crack it." << "\n";
  cin >> pass;
  cout << pass << "(this is input) \n";
  id current = 0;
  b uncracked = true;
  auto start = chrono::high_resolution_clock::now();
  b near = false;
bool e = false;
  while(uncracked == true){
    current +=1;
   
//cout << "Checking " << current << "\n";
  
    if (current == pass){
    auto stop = chrono::high_resolution_clock::now();
auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);
  double e = duration.count();
      cout << "Cracked! Pin was " << current << ". Cracked in about "<< e / 1000000 << "seconds";
   


      break;
    }  else   if (current - pass < 10000000 && pass > 9999999999 && current > 9999999999 && near == false){
      cout << current << "is near!\n";
      near = true;
    }
    
    
  }
  
}

