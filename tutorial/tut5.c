/*Question 1: What is the output of the following program

#include <stdio.h>

int main(void){
    int n;
    for (n = 9; n != 0; n-=2){
        printf("%d\n", n);
    }
    return
}

this is an infinite loop, when n keeps -2, it eventually overflows and become positive integer again

Question 2
write a function in C called mostSignificatnDigit that returns the most 
significatn digit of a positive int type integer that is poassed to the function*/
// #include <stdlib.h>

// int mostSignificatnDigit(int number){
//     number = abs(number);
//     while (number >= 10){
//         number /= 10;
//     }
//     return number;
// }

/*Her solution

int mostSignificatnDigit(int number){
    int d = 0;
    while (number > 0){
        d = nnumber % 10;
        number /= 10;
    }
    return d;
}

Question 3: what is the output for the following 

bool isArmstrongNumber(int num){
    int originalNum = num, remainder, result = 0;
    while (originalNum != 0){
        remainder = originalNum % 10;
        result += remainder * remainder * remainder;
        originalNum /= 10;
        printf("result so far %d\n", result)
    }
    return result == num;
}

int main(void){
    if (isArmstrongNumber(102)){
        printf("102 is an Armstrong number. \n")
    }
}

Ans:
Result so far: 8
Result so far: 8
Result so far: 9

Question 4: Write a complete C program that first prompts the user to enter the number of 
rows in a pattern, then prints a pattern were the first and last row and column is filled 
with stars and a diagonal in the square is drawn.

Example
Enter number of rows: 5
*****
*  **
* * *
**  *
*****

*/
#include <stdio.h>
int main(void){
    int input;

    printf("Enter number of rows: ");
    scanf("%d", &input);

    for (int i = 0; i < input; i++ ){ //row
        for (int j = 0; j < input; j++){ //column
            if ( (i == 0 ||i == input - 1) && j != input -1){ // first and last line 
                printf("*");
            }
            else if ((i == 0 ||i == input-1) && j == input -1){ // first and last line last star (plus new line)
                printf("*\n");
            }
            else if (j == 0){ // first column star
                printf("*");
            }
            else if (j == input - 1){ // last column + new line
                printf("*\n");
            }
            else if (j == (input - 1) - i){ // diagonal stars
                printf("*");
            }
            else{ // other places
                printf(" ");
            }

        }

    }

}

/*Her solution 

for (int i = 0, i<n; i++){
    for (int j = 0; j<n; j++){
        if (i % (n-1) == j % (n-1) == 0 || i+j == n-1){
            printf("*");
        }
        else{
            printf(" ");
        }
    }
    printf("\n");
}

Basically what I did but she grouped everything tgt and leave the new line at the end 


Extra question
A pythagorean triple is a triple of integers(x, y, z) such that x^2 + y^2 = z^2.
Complete this function that takes a single positive integer x as an argument and 
print three positive integer values x, y, and z such that

1) x^2 + y^2 = z^2
2) y>0 and y<100
3) y<z

If there is no triple that satisfies these conditions print "no solution exist"*/
#include <stdio.h>
#include <math.h>
void pythageoreanTriples(int x, int* y, int* z){

    while (*y < 100){
        
        double result = sqrt(x*x + (*y)*(*y));
        int checkz = (int)result;

        if (result == checkz && (*y) < result){
            *z = checkz;
            break;
        }
        ++ *y;
    }

}

int main(void){
    int input;
    int y = 1;
    int z = 0;
    printf("input number");
    scanf("%d", &input);

    pythageoreanTriples(input, &y, &z);
    if (z != 0){
        printf("numbers x = %d, y = %d, z = %d", input, y, z);

    }
    else {
        printf("not found");
    }
    
}


