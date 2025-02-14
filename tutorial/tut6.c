// pointers
#include <stdio.h>
#include <stdbool.h>

//warm up
// int main(){
//     int x = 5; // store 5 in x
//     int* p = &x; // store the address of x in p
//     int** pp = &p; // store the address of p into pp
//     *p = 6; // take value of p(x)
//     *pp += 1; // take value of pp(p) and add one
//      /*
//         Take value of p and add two
//         HOWEVER, since we added one to p in line 8, the pointer is now no longer pointing to x
//         Unknown output (could be an error, could be pointing to another variable)
//      */ 

//     *p += 2;
// }

void size(void){
    printf("%d\n", sizeof(int)); //4
    printf("%d\n", sizeof(int*)); //8
    printf("%d\n", sizeof(int**)); //8
    printf("%d\n", sizeof(bool*)); //8
    printf("%d\n", sizeof(void*)); //8
}

void PracticeOne(){
    int a, b, c, d;
    int *e, *f;
    a = 5;
    b = 6;
    e = &c;
    f = &d;
    *e = a + b;
    *f = *e + b;
    e = &a;
    f = &b;
    *e = c + d;
    *f = a + b;
}
/* What are the final values for all variables? 

a = 28
b = 34
c = 11
d = 17
e = &a
f = &b

Practice 2
    - There are 0.3048 meters in a foot, 1000 cm in a meter and 12 inches in a foot.
    - Write a program that will accept as input a length in feet and inches
    - Assume user enters positive, non-fractional values for feet and inches
    - program wil output length in meters and centimeters
    - should have 4 functions 
        - input
        - output
        - preform claculation
        - main
    - first line of function is given, could not use global variabes

*/

void getInput(int* outFeet, int* outInches){
    printf("input length in feet and inches with space in between");
    scanf("%d %d", outFeet, outInches);
    return;
}

void printOutput(int feet, int inches, int meters, int centimeters){
    printf("%d feet %d inches is %d meters and %d centimeters\n", feet, inches, meters, centimeters);
    return;
}

void convert(int feet, int inches, int *outMeters, int *outCM){
    double total_feet = feet + inches/12.0;
    double total_meters = total_feet*0.3048;
    /*correct answer for the next few lines
    
    *outMeters = total_meters; <-- will truncate to integer
    *outCM = rint((total_meters - *outMeters) * 100);         */
    int cm = (int)(total_meters*100) % 100;
    *outMeters = (int)total_meters;
    *outCM = (int)cm;
    return;
}

int main(){
    int feet, inches, meters, cm ;
    getInput(&feet, &inches);
    printf("%d %d", feet, inches);
    convert(feet, inches, &meters, &cm);
    printOutput(feet, inches, meters, cm);
    return 0;
}



