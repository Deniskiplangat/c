#include <stdio.h>
#include <math.h>

int main(){

    char grade;
    printf("Please enter your grade: ");
    scanf("%c",&grade);

    switch(grade){
      case 'A':
      printf("\nPerfect\n");
      break;
      case 'B':
      printf("\ngood\n");
      break;
      case 'C':
      printf("\nnot bad\n");
      break;
      case 'D':
      printf("\nkeep trying\n");
      break;
      case 'F':
      printf("\nFailed\n");
      break;
      default:
      printf("\nPlease enter a grade\n");
    }
    
    
    return 0;

}