#include <iostream>
using namespace std;

void displayArr(int arr[] , int sizeOfArr){
    int i;
    for(i = 0; i<sizeOfArr; i++){
        cout<<arr[i]<<endl;
    }
}


int main(){
    int arr[10] ={1,2,3,4,5,6,7,8,9,10};
    
  
    displayArr(arr ,10);
    return 0;
}