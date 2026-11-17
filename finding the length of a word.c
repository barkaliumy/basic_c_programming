#include <stdio.h>
#include <string.h>
int main() {
    char text[1000000];
    int length;
    printf("enter your text here : ");
    scanf("%s",&text);
    length = strlen(text);
    printf("%d",length);
    return 0;
}
