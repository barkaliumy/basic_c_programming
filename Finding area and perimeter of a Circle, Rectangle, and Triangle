#include <stdio.h>
#include <math.h>
#define pi (22.0/7.0)
int main() {
    //for circle.
    float r, aoc, poc;
    //for rectangle.
    float L, B, aor, por;
    //for triangle.
    float a, b, c, s, aot, pot;
    //choose.
    int cho;
    start:
    printf("#which shape do you want to choose ?");
    printf("\ncircle 1.\nrectangle 2.\ntriangle 3.\nall in one 4.");
    printf("\nenter your choose here : ");
    scanf("%d",&cho);

    switch (cho) {
        case 1:
        printf("\nenter the radius of circle: ");
        scanf("%f",&r);
        aoc=pi*r*r;
        poc=2*pi*r;
        printf("\nthe area of the circle is %f \nthe perimeter of the circle is %f",aoc, poc);
        break;

        case 2:
        printf("\nenter the length and breadth of the rectangle: ");
        scanf("%f %f",&L, &B);
        aor=L*B;
        por=2*(L+B);
        printf("\nthe area of rectangle is %f \nthe perimeter of rectangle is %f",aor, por);
        break;

        case 3:
        printf("\nenter the three sides of the triangle: ");
        scanf("%f %f %f",&a, &b, &c);
            if (a+b>c && a+c>b && c+b>a) {
                s=(a+b+c)/2;
                aot=sqrt(s*(s-a)*(s-b)*(s-c));
                printf("the area of the triangle is %f",aot);
                pot=a+b+c;
                printf("\nthe perimeter of the triangle is %f", pot);
            }
            else {
                printf("the triangle can't form !");
            }
        break;   
        case 4:
        printf("\nenter the radius of circle: ");
        scanf("%f",&r);
        printf("\nenter the length and breadth of the rectangle: ");
        scanf("%f %f",&L, &B);
        printf("\nenter the three sides of the triangle: ");
        scanf("%f %f %f",&a, &b, &c);
        aoc=pi*r*r;
        poc=2*pi*r;
        aor=L*B;
        por=2*(L+B);
            printf("\nthe area of the circle is %f \nthe perimeter of the circle is %f",aoc, poc);
             printf("\nthe area of rectangle is %f \nthe perimeter of rectangle is %f",aor, por);
        if (a+b>c && a+c>b && c+b>a) {
                s=(a+b+c)/2;
                aot=sqrt(s*(s-a)*(s-b)*(s-c));
                printf("\nthe area of the triangle is %f",aot);
                pot=a+b+c;
                printf("\nthe perimeter of the triangle is %f", pot);
            }
            else {
                printf("\nthe triangle can't form !");
            }
        break;
        default :
        printf("\nerror! try again.\n\n");
        goto start;
        break;
    }
    return 0;
}
