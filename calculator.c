#include <stdio.h>
#include <float.h>
#include <stdbool.h>

void getOperands(double* firstOperand, double* secondOperand) {
    printf("Please enter the first operand: ");
    scanf("%lf", firstOperand);
    printf("Please enter the second operand: ");
    scanf("%lf", secondOperand);
}
bool isInputValid(int operation) {
  if (operation >= -1 && operation <= 4 && operation != 0) {
    return true;
  }
  else{
    return false;
  }
}

void userInput(int* operation) {
  printf("Choose one of the following operations:\nAdd (1)\nSubtract (2)\nMultiply (3)\nDivide (4)\nStop program (-1)\n");
  do {
    printf("\nEnter your choice: ");
    scanf("%d",operation);
    if (!isInputValid(*operation)) {
        printf("Input not allowed, try again!\n");
    }
  } while(!isInputValid(*operation));
}

void calculate(double* firstOperand, double* secondOperand, int* operation){
  double result;
  switch(*operation)
  {
    case 1:
        if (*firstOperand + *secondOperand > DBL_MAX) {
          printf("Number overflow\n");
        }
        else if (*firstOperand + *secondOperand < DBL_MIN) {
          printf("Number underflow\n");
        }
        else {
          result = *firstOperand + *secondOperand;
          printf("Result: %g\n\n", result);
        }
        break;
    case 2:
    if (*firstOperand - *secondOperand > DBL_MAX) {
      printf("Number overflow\n");
    }
    else if (*firstOperand - *secondOperand < DBL_MIN) {
      printf("Number underflow\n");
    }
    else {
      result = *firstOperand - *secondOperand;
      printf("Result: %g\n\n", result);
    }
        break;
    case 3:
    if (*firstOperand * *secondOperand > DBL_MAX) {
      printf("Number overflow\n");
    }
    else if (*firstOperand * *secondOperand < DBL_MIN) {
      printf("Number underflow\n");
    }
    else {
      result = *firstOperand * *secondOperand;
      printf("Result: %g\n\n", result);
    }
        break;
    case 4:
        if (*secondOperand == 0) {
          printf("Division by zero!\n");
          return;
        }
        else {
          if (*firstOperand / *secondOperand > DBL_MAX) {
            printf("Number overflow\n");
          }
          else if (*firstOperand / *secondOperand < DBL_MIN) {
            printf("Number underflow\n");
          }
          else {
            result = *firstOperand / *secondOperand;
            printf("Result: %g\n\n", result);
          }
        }
        break;
  }
}

int main(int argc, char const *argv[]) {
  int operation;
  double firstOperand;
  double secondOperand;
  printf("Simple calculator\n");
  printf("=================\n\n");
  do {

    userInput(&operation);
    if (operation == -1) {
      break;
    }
    getOperands(&firstOperand, &secondOperand);
    calculate(&firstOperand, &secondOperand, &operation);
  } while(operation != -1);
  return 0;
}
