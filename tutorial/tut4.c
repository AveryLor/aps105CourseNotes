// #include <stdio.h> // Include the standard I/O library

int main() {
    /*
    int currentNum = 1; 
    int sum = 0; // Initialize the sum variable to 0

    while (currentNum <= 999) {
        if (currentNum % 9 == 0 && currentNum % 2 == 0 && (currentNum / 10) % 10 != 7) {
            sum += currentNum; // Add the current number to the 
        currentNum++; // Increment the current number by 1
        }
    }
    printf("%d\n", sum); // Print the sum

    return 0; // Return 0 to indicate successful execution
    */
   /*
   double currentNum = 1;
   double temp = currentNum;
   double sum = 0;
   for (int i = 1; currentNum < 0.001; i++) {
    temp = temp / i;
    sum += currentNum / temp; 
   }
   */
  /*
  const double TOLR = 0.0001; 
  double sum = 1.0, term = 1; 
  int n = 1; 

  while (term >= TOLR) {
    term /= n; 
    sum += term; 
    n++; 
  }
  printf("%f\n", sum);
  return 0;
  */
 double value; 
 printf("Enter a value between 0 and 10: "); 
 scanf("%lf", &value);
 while (value < 0 || value > 10) {
     printf("Invalid input. Please enter a value between 0 and 10: "); 
     scanf("%lf", &value); 
 }
 
 for (int i = 0; i < 10; i++) {
     printf("%f\n", value); 
 }
 return 0;
}