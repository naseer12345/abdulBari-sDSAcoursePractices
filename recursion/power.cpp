#include <iostream>
using namespace std;


int power(int m, int n) {
    if (n == 0 ) {
        return 1;
    } else {
        return power(m , n - 1 ) * m ;
    }
}

int main() {
    cout << power(5 , 2) << endl;
    return 0;
}






// here is my explamation: 
// so the last function when n==0 it return 1, so the (5,0) actully = 1. because we are returning 1. 
// now which the fucntion that called (5,0) will be equal to 1 * 5. that called function is equal 5 now
// now the fucntion that called (5,1) now equals to 5. now we are multplying by 5 so thats why it equals to 
// 25. fuckkk 


// Ai explanation: 
//  Let’s break it down step by step, and I’ll explain how the function works.

// Base Case (n = 0):
// When n is zero, the function returns 1. This is the stopping point for our recursion.
// In your function, when n becomes zero, it returns 1: if (n == 0) { return 1; }
// Recursive Case (n > 0):
// When n is greater than zero, the function computes power(m, n - 1) and multiplies the result by m.
// In your function, when n is not zero, it calculates power(m, n - 1) * m.
// Now let’s see how this works with an example: power(5, 2).

// power(5, 2):
// Since n is not zero, we compute power(5, 1) and multiply the result by 5.
// power(5, 1):
// Again, n is not zero, so we compute power(5, 0) and multiply the result by 5.
// power(5, 0) returns 1 (base case).
// Now we multiply 1 by 5, which gives us 5.
// Finally, we multiply the result of power(5, 1) (which is 5) by 5, resulting in the final answer of 25.
// So, even though we don’t explicitly return n, the recursive calls effectively compute the product of m and the intermediate results. It’s like building up the multiplication step by step! 🌟