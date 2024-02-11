#include <iostream>
using namespace std;

int BinarySearch(int arr[], int  arrLength, int key){
    int l,mid,h;
    l = 0;
    h = arrLength;

    while (l<=h){
        mid=(l+h) / 2;
        if (key== arr[mid]){
            return mid;
        }else if (key< arr[mid]){
            h = mid-1;
        }else {
           l = mid+1; 
        }
       
    }
    return -1;
}

int main(){

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    cout<< BinarySearch(arr,9,3);


    return 0;

}