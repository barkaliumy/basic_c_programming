#include <stdio.h>
#include <math.h>
int main() {
    float i;
    float N=0, n;
    float x, f, fx, sumfx=0.00;
    float x2, fx2, sumfx2=0.00;
    float mean, powmean, mean2, sqrtpro;
    float sd;

    printf("Enter n: ");
    scanf("\n%f",&n);
    for (i=1;i<=n;i=i+1) {
        printf("\nx, f -----> ");
        scanf("%f %f",&x, &f);
        N=N+f;
        fx=f*x;
        printf("fx -------> %.2f",fx);
        sumfx=sumfx+fx;
        x2=pow (x, 2);
        printf("\nx^2 ------> %.2f",x2);
        fx2=f*x2;
        printf("\nfx^2 -----> %.2f",fx2);
        sumfx2=sumfx2+fx2;
    }
    printf("\nN = %.2f", N);
    printf("\nsum of fx = %.2f", sumfx);
    printf("\nsum of fx^2 = %.2f", sumfx2);
    printf("\n\nhere,\n");
    mean=sumfx/N;
    powmean=pow(mean, 2);
    mean2=sumfx2/N;
    sqrtpro=mean2-powmean;
    sd=sqrt(sqrtpro);
    printf("\nSD = %.2f",sd);
    
    return 0;
}
