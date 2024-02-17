#include <iostream>
using namespace std;

struct Mattrix 
{
    int A[10];
    int n;
};

void set(struct Mattrix *m, int i, int j, int x){

    if(i==j){
        m->A[i-1] = x;
    }

};

int get(struct Mattrix *m, int i, int j, int x){

    if(i==j){
        return m->A[i-1] = x;
    }else{
        return 0;
    }

};

void Display(struct Mattrix m){
    int i,j;
    for(i=0;i<m.n;i++){
        for (j=0;j<m.n;j++){
            if ( i==j ){
                cout<<m.A[i-1];
            }else{
                cout<< 0;
            }
        }
        cout<<endl;
    }

}

int main(){
    struct Mattrix m;
    m.n=4;
    set(&m,1,1,5);
    set(&m,2,2,5);
    set(&m,3,3,5);
    set(&m,4,4,5);
    
    Display(m);
    return 0;
}