#include <stdio.h>
float force (float);
  float force(float mass){
    return mass*9.8;
}
int main(){
  float mass=10.4;
  printf("force for mass %0.0f is: %.f\n", mass, force(mass));
    return 0;
}