#include <stdio.h>
#include <math.h>
int main() {
    start:
    int choice;
    float i=0;
    float N=0, n=0;
    float x=0, f=0, fx=0, sumfx=0;
    float x2=0, fx2=0, sumfx2=0;
    float mean=0, powmean=0, mean2=0, sqrtpro=0;
    float sd=0, coeofsd=0, variance=0, cv=0;
    float xto=0, m=0;
    char yn;

    printf("\nDiscrete data  1)");
    printf("\nContinuous data    2)");
    printf("\nwhich data do you want to calculate: ");
    scanf("%d",&choice);

    if(choice == 1) {

    printf("\nEnter n: ");
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
    printf("\nmean = %.2f",mean);
    printf("\nSD = %.2f",sd);
    
    coeofsd=sd/mean;
    printf("\nCoefficient of SD = %.2f",coeofsd);

    variance=pow(sd, 2);
    printf("\nVariance = %.2f",variance);

    cv=(sd/mean)*100;
    printf("\nCV = %.2f",cv);
        ynagain1:
        printf("\ndo you want to calculate again? (y/n): ");
        scanf("%c",yn);
        if (yn=='y') {
            goto start;
        }
        else if (yn=='n') {
            return 0;
        }
        else {
            printf("\nerror!");
            goto ynagain1;
        }
    }

    else if (choice == 2) {
            printf("\nEnter n: ");
    scanf("\n%f",&n);
    for (i=1;i<=n;i=i+1) {
        printf("\nx --------> ");
        scanf("%f %f",&x, &xto);
        printf("f --------> ");
        scanf("%f",&f);
        m=(x+xto)/2;
        printf("m --------> %.2f",m);
        N=N+f;
        fx=f*m;
        printf("\nfx -------> %.2f",fx);
        sumfx=sumfx+fx;
        x2=pow (m, 2);
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
    printf("\nmean = %.2f",mean);
    printf("\nSD = %.2f",sd);
    
    coeofsd=sd/mean;
    printf("\nCoefficient of SD = %.2f",coeofsd);

    variance=pow(sd, 2);
    printf("\nVariance = %.2f",variance);

    cv=(sd/mean)*100;
    printf("\nCV = %.2f",cv);

        ynagain2:
        printf("\ndo you want to calculate again? (y/n): ");
        scanf("%c",yn);
        if (yn=='y') {
            goto start;
        }
        else if (yn=='n') {
            return 0;
        }
        else {
            printf("\nerror!");
            goto ynagain2;
        }
        
}
    else {
        printf("\nerror, please try again!\n\n");
        goto start;
    }
    return 0;
}
