#include <stdio.h>
#include <math.h>

int main(){

    char unit;
    float temp;

    
    printf("is your temperature in 'f' or 'c'?\n");
    scanf("%c",&unit);
    if(unit == 'c'){
        printf("\nplease enter the temperature in celcius\n");
        scanf("%f",&temp);
        float tempo = temp * 33.8;
        printf("\ntemp is %.1f ferenheit\n",tempo);

    }
    else if(unit == 'f'){
        printf("\nplease enter the temperature in ferenheit\n");
        scanf("%f",&temp);
        float tempo = temp / 33.8;
        printf("\ntemp is %.1f celcius\n",tempo);
    }
    else{
        printf("Please enter a valid value and try again!\n");
    }
    
    return 0;

}