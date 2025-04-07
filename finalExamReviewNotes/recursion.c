#include <stdio.h> 

int main() {

    return 0; 
}

/* 
Recursion is a method of solving a problem that requires first solving smaller 
instances of the same problem. In programming, recursion is when a function calls itself
,but on smaller problem/input. The functino calls itself repeatedly until a solution is found on the 
smallest problem, which is when the function returns a solution and stops calling itself. 
*/

int gcd(int a, int b) {
    if (a == b) {
        return a; 
    } else if (a > b) {
        return (b, a-b); 
    } else {
        return(b, a); 
    }

}