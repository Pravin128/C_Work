#include <stdio.h>
#include <math.h>
double curve(double x) {
    int a,n,c;
    printf("Enter Power of X : ");
    scanf("%d",&n);
    printf("Enter Coefficient of X : ");
    scanf("%d",&a);
    printf("Enter C:");
    scanf("%d",&c);
// For example, let's consider a quadratic curve: y = x^2 + 2x + 1
return pow(x, n) + a * x + c;
}
double derivative(double x) {
// Calculate the derivative of the curve function at a given x
// For example, for the quadratic curve, the derivative is: y'= 2x + 2
return 2 * x + 2;
}
double tangent_at_origin() {
// Calculate the tangent at the origin (x = 0) using the derivative function
// double slope = derivative(0); // slope = y'(0)
double y_intercept = curve(0); // y-intercept = y(0)
// The equation of a straight line is y = mx + c
// At the origin (x = 0), the equation simplifies to y = c
return y_intercept;
}
double double_integral() {
    int a,b,c;
    printf("Enter C:");
    scanf("%d",&c);

// Calculate the double integral of the curve function
// For simplicity, let's assume the curve is defined over a range [a, b]
printf("Enter Lower Limit : ");
scanf("%d",&a);  // Lower limit of integration
double n;
printf("Enter Upper Limit : ");
scanf("%d",&b);// Upper limit of integration
printf("Enter step : ");
scanf("%lf",&n); // Number of steps for integration
double h = (b-a)/n;
double arr_y[1000],y1;
int y=0,x1=a;
double integral = 0;
for (int i = 0;x1<=b; i++) {
double y1 =pow(x1, 2) + 2 * x1 + c;
arr_y[y]=y1;
y++;
x1+=n;

}
int sum=0;
for(int i=1;i<b-1;i++)
sum+=arr_y[i];
integral=(h/2)*((arr_y[0]+arr_y[b-1])+2*(sum));
return integral;
}
int main() {
double tangent = tangent_at_origin();
double area = double_integral();
printf("Tangent at the origin or Y-intercept : %.2f\n", tangent);
printf("Area of the curve: %.2f\n", area);
return 0;
}