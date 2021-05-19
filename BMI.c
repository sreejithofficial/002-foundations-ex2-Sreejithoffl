#include <stdio.h>
#include <cs50.h>

int main(void){

float bmi;

string name = get_string("Enter your name: ");
printf("%s\n", name);

float h = get_float("Enter your height (in m): ");
printf("%0.2f\n", h);

int w = get_int("Enter your weight (in kg): ");
printf("%i\n", w);

bmi=w/(h*h);

if(bmi<18.5){
	printf("%s %0.2f underweight", name, bmi);
}

else if(bmi>=18.5 && bmi<=24.9){
	printf("%s %0.2f normal weight", name, bmi);
}
else if(bmi>=25 && bmi<=29.9){
	printf("%s %0.2f overweight", name, bmi);
}
else if(bmi>30){
	printf("%s %0.2f obese", name, bmi);
}

}
