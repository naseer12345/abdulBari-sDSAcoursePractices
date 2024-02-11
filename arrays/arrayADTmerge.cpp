#include <iostream>
using namespace std;


int main(){

    int arr1[] ={1,12,34,46,555};
    int arr2[] = {22,33,44,55};

    int mergedArr[10];
    int i = 0;
     int j = 0;
     int k = 0;
    while( i<5 && j<5){
        
        if(arr1[i] < arr2[j]){
            mergedArr[k] = arr1[i];
            k++;
            i++;
        }else{
            mergedArr[k] = arr2[j];
            k++;
            j++;
        }

    }
    for(; i<5;i++){
        mergedArr[k] = arr1[i];
        k++;
    }
     for(; j<5;j++){
        mergedArr[k] = arr2[j];
        k++;
    };

    for(int v = 0; v<10; v++){
        cout<<mergedArr[v]<<endl;
    }


    
    
    return 0;


}