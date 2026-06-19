#include <stdio.h>

    float c2f (float);
      float c2f(float c){
        return (c*9/5)+32;
      }
      int main(){
        float c=45;
        printf("celsius to fahrenheit for %0.0f: %.0f\n", c, c2f(c));
    return 0;
}