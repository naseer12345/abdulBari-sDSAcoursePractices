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

int Get(struct Mattrix *m, int i, int j) {
    if (i == j) {
        return m->A[i - 1];
    } else {
        return 0;
    }
};
void Display(struct Mattrix m){
    int i, j;
    for(i = 1; i <= m.n; i++){
        for (j = 1; j <= m.n; j++){
            if (i == j){
                cout << m.A[i-1];
            } else {
                cout << "0";
            }
        }
        cout << endl;
    }
};


int main(){
    struct Mattrix m;
    m.n=4;
    set(&m,1,1,5);
    set(&m,2,2,8);
    set(&m,3,3,9);
    set(&m,4,4,12);

    cout<<Get(&m,1,1)<<endl;
    
    Display(m);
    return 0;
};