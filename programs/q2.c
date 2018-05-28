/* q2.c
 * NOTE: This header comment format is not required for the LaTeX project.
 * Cycle:           <Curent Cycle>
 * Course:          <Course>
 * Evaluation:      <Course Evaluation>
 * Author:          <Collaborator>
 * Organization:    <Organization Name>
*/

/* EXPLANATION:
 * This program calculates the value of the integral of f(x) = x^n, defined in
 * the range [a,b]. 
 * Remember: integral[a,b](x^n) = (b^(n+1)-a^(n+1))/(n+1), n >= 0
*/

#include <stdio.h>

void integral(int, int, int);
int power(int, int);

int main(){
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);
    integral(n,a,b);
    return(0);
}

void integral(int n, int a, int b){
    double c;
    c = (double)(power(b,n+1)-power(a,n+1))/(n+1);
    printf("integral[%d,%d](x^%d) = %.2lf\n", a, b, n, c);
}

/* Iterative Form */
int power(int a, int b){
    int r=a, i;
    for(i = 1; i<b; i++){
        r *= a;
    }
    return r;
}

/* Recursive Form */
/*
int power(int a, int b){
    if(b == 1){
        return a;
    }
    return a * power(a,b-1);
}
*/
