#include <stdio.h>

int main() {
  int earthWeight;
  int targetPlanet;
  double relativeGravity;
  int targetWeight;
  

  printf("What is your weight on Earth?\n");
  earthWeight = 187;
  printf("Please enter a number for the planet you want to fight on.\n");
  targetPlanet = 6;

  switch (targetPlanet) {
    case 1:
      relativeGravity = 0.38;
      break;
    case 2:
      relativeGravity = 0.91;
      break;
    case 3:
      relativeGravity = 0.38;
      break;
    case 4:
      relativeGravity = 2.34;
      break;
    case 5:
      relativeGravity = 1.06;
      break;
    case 6:
      relativeGravity = 0.92;
      break;
    case 7:
      relativeGravity = 1.19;
      break;
    default:
      break;
  }

  targetWeight = earthWeight * relativeGravity;
  printf("The target weight for that planet is %d.\n", targetWeight);

}