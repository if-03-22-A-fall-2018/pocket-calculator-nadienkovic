#include <stdio.h>
#include <string.h>

int menustart ()
{
  printf("Choose one of the following operations\n");
  printf("(1)Add \n");
  printf("(2)Subtract\n");
  printf("(3)Multiply\n");
  printf("(4)Divide\n");
  printf("(-1)Stop program\n");
  scanf("Enter your choice: %d", choice);
  return choice;
}

double add(firstoperands, secondoperands){

  return firstoperands + secondoperands;
}
double sub(firstoperands,secondoperands){

  return firstoperands - secondoperands;
}
double mul(firstoperands,secondoperands){

  return firstoperands * secondoperands;
}
double div(firstoperands, secondoperands){

  return firstoperands / secondoperands;
}

void getOperands(double* firstoperands, double* secondoperands)
{
  printf("Please enter the first operand: ");
  scanf("%lf \n", firstoperands);
  printf("Please enter the second operand: ");
  scanf("%lf \n", secondoperands);
}

void Check(int choice){

  double result;
  switch (choice) {
    case 1:
      getOperands(double* firstoperands, double* secondoperands);
      result = add(&firstoperands , &secondoperands);
    break;
    case 2:
      getOperands(double* firstoperands, double* secondoperands);
      result = sub(&firstoperands , &secondoperands);
    break;
    case 3:
      getOperands(double* firstoperands, double* secondoperands);
      result = mul(&firstoperands , &secondoperands);
    break;
    case 4:
      getOperands(double* firstoperands, double* secondoperands);
      result = div(&firstoperands , &secondoperands);
    break;
    case -1:
    break;
    default:
    printf("Error\n Enter your choice: ");
    scanf("%d ",choice);
    Check(choice);
  }
}
int main(int argc, char const *argv[]) {

  int choice = menustart();
  double* firstoperands;double* secondoperands;
  getOperands(firstoperands, secondoperands);

  return 0;
}
