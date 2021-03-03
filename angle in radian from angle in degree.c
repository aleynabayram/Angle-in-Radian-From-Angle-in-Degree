/*The code calculates the angle in radian from the angle in degree */

#include<stdio.h>  
#include<math.h>  
  
int main(){

    const double PI = 3.14159265;
    float degree;
	float radian;  
  
    printf("Please enter the angle in degree you want to find the angle in radian:");  
    scanf("%f", &degree);  
  
    radian = degree * ( PI / 180.0 );  
  
    printf("Angle in radian is %f\n", radian);  
  
    return 0;  
}  
