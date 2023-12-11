#include <stdio.h>

int main() {

int weight;
int planet;

printf("What's your earth weight?\n");
scanf("%d", &weight);

printf("1	Mercury\n 2 Venus\n 3 Mars\n 4 Jupiter\n 5 Saturn\n 6 Uranus\n 7 Neptune\n");

printf("Wich planet are you visiting?\n");
scanf("%d", &planet);

if (planet == 1){
  weight = weight * 0.38;
} else if (planet == 2){
  weight = weight * 0.91;
} else if (planet == 3){
  weight = weight * 0.38;
} else if (planet == 4){
  weight = weight * 2.34;
} else if (planet == 5){
  weight = weight * 1.06;
} else if (planet == 6){
  weight = weight * 0.92;
} else if (planet == 7){
  weight = weight * 1.19;
};
 printf("Your weight here is: %d", weight);
}