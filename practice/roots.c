// Write a C Program to find the roots of a Quadratic Equation.
#include<stdio.h>
#include<math.h>

int main(){
    double a,b,c,D,root1,root2;

    printf("Enter the co-efficient(ax^2+bx+c):\n ");
    scanf(" %lf%lf%lf", &a,&b,&c);
    D=pow(b,2)-4*a*c;

    if(a==0){
        printf("Not a quadratic equation");
    }
    if(D>0){

        root1=(-b+sqrt(D))/(2*a);
        root2=(-b-sqrt(D))/(2*a);
        printf("Roots = %.2lf, %.2lf",root1,root2);
    }
    else if (D==0){
        root1=-b/(2*a);
        printf("Roots are equal\nRoot=%.2lf",root1);

    }
    else{
        printf("complex root");
    }

    


    return 0;
}
