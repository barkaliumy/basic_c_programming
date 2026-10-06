#include <stdio.h>
int main() {
    int d;
    printf("enter a day number (1-7) : ");
    scanf("%d",&d);
    if (d<=0) {
        printf("\nnagative value or '0' - please try again!");
        return 0;
    } 
    switch (d) {
        case 1: printf("\nsunday"); break;
        case 2: printf("\nmonday"); break;
        case 3: printf("\ntuesday"); break;
        case 4: printf("\nwednesday"); break;
        case 5: printf("\nthursday"); break;
        case 6: printf("\nfriday"); break;
        case 7: printf("\nsaturday"); break;
        default : printf("\nthere are only 7 days in a week !");
    }
    return 0;
}
    
