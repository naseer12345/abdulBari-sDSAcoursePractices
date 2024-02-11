#include <iostream>
using namespace std;

// too lazy 

void displayArr(int arr[] , int sizeOfArr){
    int i;
    for(i = 0; i<sizeOfArr; i++){
        cout<<arr[i]<<endl;
    }
};



void insert(int arr[] , int whereToInsert, int WhatToInser, int lengthOfArr){

    if(whereToInsert >! lengthOfArr){
        for(int i = lengthOfArr; i>whereToInsert; i--){
            arr[i] = arr[i-1];
        };
        arr[whereToInsert] = WhatToInser;
        displayArr(arr, 7);
        // increment the value of length.
    }


}


int main(){
    int arr[10] ={1,2,3,4,5,6};
    int arrLenth = 6;
    
    
    // make the array length 6 before calling insert.
    // insert(arr ,3, 99, arrLenth);


    return 0;
} 



