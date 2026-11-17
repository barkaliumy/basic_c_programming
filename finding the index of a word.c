#include <stdio.h>
#include <string.h>
int main() {
    char text[1000000];
    char targetchar;
    int length;
    int index;

    printf("enter the text: ");
    scanf("%s",&text);
    printf("enter the targeted word: ");
    scanf("%d",&index);

    length = strlen(text);

    if(index>=0 && index<length) {
        index=index-1;
    targetchar = text[index];
        printf("%c",targetchar);
    }
    else {
        printf("erroe!");
    }
    
    return 0;
}
