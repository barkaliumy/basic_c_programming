#include <stdio.h>
int main() {
    int i, c;
    printf("\nfor loop 1)\nwhile loop 2)\ndo-while loop 3)");
    printf("\nwhich loop do you want to run : ");
    scanf("%d",&c);
    switch (c) {
        case 1:
    for(i=1;i<=10;i++) {
        printf("\n%d",i);
    }
        break;
        case 2:
            i=1;
        while (i<=10) {
            printf("\n%d",i);
            i++;
        }
        break;
        case 3:
        i=1;
        do {
            printf("\n%d",i);
            i++;
        } while (i<=10);
        break;
    }
    return 0;
}
