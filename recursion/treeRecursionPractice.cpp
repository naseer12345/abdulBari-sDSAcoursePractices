#include <iostream>

using namespace std;
    
int countOfCalls = 0;
void test(int n){

    if(n>0){
cout << n << endl;
 test(n - 1);
  test(n - 1);
  
    };
    countOfCalls++;
    
}
int main(){
    
    test(3);
    cout << " number of calls it has made in stack or number of times the fucntion has been called  is " <<  countOfCalls<< endl;
    // the time complexity for this is 0(2powerN)
    return 0;
}