#include <iostream>

using namespace std;
void test(int n){
    if(n>=0){
cout << n << endl;
 test(n - 1);
    };

}
int main(){
    cout << "hey how are you ?" << endl;
    test(6);
    return 0;
}