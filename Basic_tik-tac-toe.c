#include <stdio.h>
int main() {
    int a, b, c, d, e, f, g, h, i;
    char p11, p12, p13, p14, p15;
    char p21, p22, p23, p24;
    char yn;    

start:
    a=0; b=0; c=0; d=0; e=0; f=0; g=0; h=0; i=0;
    printf("\n*-----------------*");
    printf("\n|   Tic-Tac-Toe   |");
    printf("\n*-----------------*");
        
    printf("\n%dq\t%dw\t%de\n%da\t%ds\t%dd\n%dz\t%dx\t%dc",a,b,c,d,e,f,g,h,i);

    oneone:
    printf("\nplayer: 1 ---> ");
    scanf(" %c",&p11);
    switch (p11) {
        case'q': a=a+1; break;
        case'w': b=b+1; break;
        case'e': c=c+1; break;
        case'a': d=d+1; break;
        case's': e=e+1; break;
        case'd': f=f+1; break;
        case'z': g=g+1; break;
        case'x': h=h+1; break;
        case'c': i=i+1; break;
        default: 
        printf("\nerror, try again!");
        goto oneone;
        break;
    }

     printf("\n%dq\t%dw\t%de\n%da\t%ds\t%dd\n%dz\t%dx\t%dc",a,b,c,d,e,f,g,h,i);

    secondone:
    printf("\nplayer: 2 ---> ");
    scanf(" %c",&p21);
    switch (p21) {
        case'q': if (a>0) {
            printf("\nerror, try again!"); 
            goto secondone;
        } a=a+2; break;
        case'w': if (b>0) {
            printf("\nerror, try again!"); 
            goto secondone;
        } b=b+2; break;
        case'e': if (c>0) {
            printf("\nerror, try again!"); 
            goto secondone;
        } c=c+2; break;
        case'a': if (d>0) {
            printf("\nerror, try again!"); 
            goto secondone;
        } d=d+2; break;
        case's': if (e>0) {
            printf("\nerror, try again!"); 
            goto secondone;
        } e=e+2; break;
        case'd': if (f>0) {
            printf("\nerror, try again!"); 
            goto secondone;
        } f=f+2; break;
        case'z': if (g>0) {
            printf("\nerror, try again!"); 
            goto secondone;
        } g=g+2; break;
        case'x': if (h>0) {
            printf("\nerror, try again!"); 
            goto secondone;
        } h=h+2; break;
        case'c': if (i>0) {
            printf("\nerror, try again!"); 
            goto secondone;
        } i=i+2; break;
        default: 
        printf("\nerror, try again!");
        goto secondone;
        break;
    }
    
     printf("\n%dq\t%dw\t%de\n%da\t%ds\t%dd\n%dz\t%dx\t%dc",a,b,c,d,e,f,g,h,i);

        onesecond:
    printf("\nplayer: 1 ---> ");
    scanf(" %c",&p12);
    switch (p12) {
        case'q': if (a>0) {
            printf("\nerror, try again!"); 
            goto onesecond;
        } a=a+1; break;
        case'w': if (b>0) {
            printf("\nerror, try again!"); 
            goto onesecond;
        } b=b+1; break;
        case'e': if (c>0) {
            printf("\nerror, try again!"); 
            goto onesecond;
        } c=c+1; break;
        case'a': if (d>0) {
            printf("\nerror, try again!"); 
            goto onesecond;
        } d=d+1; break;
        case's': if (e>0) {
            printf("\nerror, try again!"); 
            goto onesecond;
        } e=e+1; break;
        case'd': if (f>0) {
            printf("\nerror, try again!"); 
            goto onesecond;
        } f=f+1; break;
        case'z': if (g>0) {
            printf("\nerror, try again!"); 
            goto onesecond;
        } g=g+1; break;
        case'x': if (h>0) {
            printf("\nerror, try again!"); 
            goto onesecond;
        } h=h+1; break;
        case'c': if (i>0) {
            printf("\nerror, try again!"); 
            goto onesecond;
        } i=i+1; break;
        default: 
        printf("\nerror, try again!");
        goto onesecond;
        break;
    }

        printf("\n%dq\t%dw\t%de\n%da\t%ds\t%dd\n%dz\t%dx\t%dc",a,b,c,d,e,f,g,h,i);

         secondtwo:
    printf("\nplayer: 2 ---> ");
    scanf(" %c",&p22);
    switch (p22) {
        case'q': if (a>0) {
            printf("\nerror, try again!"); 
            goto secondtwo;
        } a=a+2; break;
        case'w': if (b>0) {
            printf("\nerror, try again!"); 
            goto secondtwo;
        } b=b+2; break;
        case'e': if (c>0) {
            printf("\nerror, try again!"); 
            goto secondtwo;
        } c=c+2; break;
        case'a': if (d>0) {
            printf("\nerror, try again!"); 
            goto secondtwo;
        } d=d+2; break;
        case's': if (e>0) {
            printf("\nerror, try again!"); 
            goto secondtwo;
        } e=e+2; break;
        case'd': if (f>0) {
            printf("\nerror, try again!"); 
            goto secondtwo;
        } f=f+2; break;
        case'z': if (g>0) {
            printf("\nerror, try again!"); 
            goto secondtwo;
        } g=g+2; break;
        case'x': if (h>0) {
            printf("\nerror, try again!"); 
            goto secondtwo;
        } h=h+2; break;
        case'c': if (i>0) {
            printf("\nerror, try again!"); 
            goto secondtwo;
        } i=i+2; break;
        default: 
        printf("\nerror, try again!");
        goto secondtwo;
        break;
    }

        printf("\n%dq\t%dw\t%de\n%da\t%ds\t%dd\n%dz\t%dx\t%dc",a,b,c,d,e,f,g,h,i);

        onethree:
    printf("\nplayer: 1 ---> ");
    scanf(" %c",&p13);
    switch (p13) {
        case'q': if (a>0) {
            printf("\nerror, try again!"); 
            goto onethree;
        } a=a+1; break;
        case'w': if (b>0) {
            printf("\nerror, try again!"); 
            goto onethree;
        } b=b+1; break;
        case'e': if (c>0) {
            printf("\nerror, try again!"); 
            goto onethree;
        } c=c+1; break;
        case'a': if (d>0) {
            printf("\nerror, try again!"); 
            goto onethree;
        } d=d+1; break;
        case's': if (e>0) {
            printf("\nerror, try again!"); 
            goto onethree;
        } e=e+1; break;
        case'd': if (f>0) {
            printf("\nerror, try again!"); 
            goto onethree;
        } f=f+1; break;
        case'z': if (g>0) {
            printf("\nerror, try again!"); 
            goto onethree;
        } g=g+1; break;
        case'x': if (h>0) {
            printf("\nerror, try again!"); 
            goto onethree;
        } h=h+1; break;
        case'c': if (i>0) {
            printf("\nerror, try again!"); 
            goto onethree;
        } i=i+1; break;
            case't': 
            printf("\ntie!");
            goto endchoice;
            break;
        default: 
        printf("\nerror, try again!");
        goto onethree;
        break;
    }

        printf("\n%dq\t%dw\t%de\n%da\t%ds\t%dd\n%dz\t%dx\t%dc",a,b,c,d,e,f,g,h,i);

        if (a==1 && b==1 && c==1) {
                printf("\nplayer: 1 ---> win!");
                goto endchoice;
        }
        else if (d==1 && e==1 && f==1) {
                printf("\nplayer: 1 ---> win!");
                goto endchoice;
        }
        else if (g==1 && h==1 && i==1) {
                printf("\nplayer: 1 ---> win!");
                goto endchoice;
        }
        else if (a==1 && d==1 && g==1) {
                printf("\nplayer: 1 ---> win!");
                goto endchoice;
        }
        else if (b==1 && e==1 && h==1) {
                printf("\nplayer: 1 ---> win!");
                goto endchoice;
        }
        else if (c==1 && f==1 && i==1) {
                printf("\nplayer: 1 ---> win!");
                goto endchoice;
        }
        else if (a==1 && e==1 && i==1) {
                printf("\nplayer: 1 ---> win!");
                goto endchoice;
        }
        else if (c==1 && e==1 && g==1) {
                printf("\nplayer: 1 ---> win!");
                goto endchoice;
        }
        
         secondthree:
    printf("\nplayer: 2 ---> ");
    scanf(" %c",&p23);
    switch (p23) {
        case'q': if (a>0) {
            printf("\nerror, try again!"); 
            goto secondthree;
        } a=a+2; break;
        case'w': if (b>0) {
            printf("\nerror, try again!"); 
            goto secondthree;
        } b=b+2; break;
        case'e': if (c>0) {
            printf("\nerror, try again!"); 
            goto secondthree;
        } c=c+2; break;
        case'a': if (d>0) {
            printf("\nerror, try again!"); 
            goto secondthree;
        } d=d+2; break;
        case's': if (e>0) {
            printf("\nerror, try again!"); 
            goto secondthree;
        } e=e+2; break;
        case'd': if (f>0) {
            printf("\nerror, try again!"); 
            goto secondthree;
        } f=f+2; break;
        case'z': if (g>0) {
            printf("\nerror, try again!"); 
            goto secondthree;
        } g=g+2; break;
        case'x': if (h>0) {
            printf("\nerror, try again!"); 
            goto secondthree;
        } h=h+2; break;
        case'c': if (i>0) {
            printf("\nerror, try again!"); 
            goto secondthree;
        } i=i+2; break;
             case't': 
            printf("\ntie!");
            goto endchoice;
            break;
        default: 
        printf("\nerror, try again!");
        goto secondthree;
        break;
    }

        printf("\n%dq\t%dw\t%de\n%da\t%ds\t%dd\n%dz\t%dx\t%dc",a,b,c,d,e,f,g,h,i);

        if (a==2 && b==2 && c==2) {
                printf("\nplayer: 2 ---> win!");
                goto endchoice;
        }
        else if (d==2 && e==2 && f==2) {
                printf("\nplayer: 2 ---> win!");
                goto endchoice;
        }
        else if (g==2 && h==2 && i==2) {
                printf("\nplayer: 2 ---> win!");
                goto endchoice;
        }
        else if (a==2 && d==2 && g==2) {
                printf("\nplayer: 2 ---> win!");
                goto endchoice;
        }
        else if (b==2 && e==2 && h==2) {
                printf("\nplayer: 2 ---> win!");
                goto endchoice;
        }
        else if (c==2 && f==2 && i==2) {
                printf("\nplayer: 2 ---> win!");
                goto endchoice;
        }
        else if (a==2 && e==2 && i==2) {
                printf("\nplayer: 2 ---> win!");
                goto endchoice;
        }
        else if (c==2 && e==2 && g==2) {
                printf("\nplayer: 2 ---> win!");
                goto endchoice;
        }

         onefour:
    printf("\nplayer: 1 ---> ");
    scanf(" %c",&p14);
    switch (p14) {
        case'q': if (a>0) {
            printf("\nerror, try again!"); 
            goto onefour;
        } a=a+1; break;
        case'w': if (b>0) {
            printf("\nerror, try again!"); 
            goto onefour;
        } b=b+1; break;
        case'e': if (c>0) {
            printf("\nerror, try again!"); 
            goto onefour;
        } c=c+1; break;
        case'a': if (d>0) {
            printf("\nerror, try again!"); 
            goto onefour;
        } d=d+1; break;
        case's': if (e>0) {
            printf("\nerror, try again!"); 
            goto onefour;
        } e=e+1; break;
        case'd': if (f>0) {
            printf("\nerror, try again!"); 
            goto onefour;
        } f=f+1; break;
        case'z': if (g>0) {
            printf("\nerror, try again!"); 
            goto onefour;
        } g=g+1; break;
        case'x': if (h>0) {
            printf("\nerror, try again!"); 
            goto onefour;
        } h=h+1; break;
        case'c': if (i>0) {
            printf("\nerror, try again!"); 
            goto onefour;
        } i=i+1; break;
             case't': 
            printf("\ntie!");
            goto endchoice;
            break;
        default: 
        printf("\nerror, try again!");
        goto onefour;
        break;
    }

        printf("\n%dq\t%dw\t%de\n%da\t%ds\t%dd\n%dz\t%dx\t%dc",a,b,c,d,e,f,g,h,i);

        if (a==1 && b==1 && c==1) {
                printf("\nplayer: 1 ---> win!");
                goto endchoice;
        }
        else if (d==1 && e==1 && f==1) {
                printf("\nplayer: 1 ---> win!");
                goto endchoice;
        }
        else if (g==1 && h==1 && i==1) {
                printf("\nplayer: 1 ---> win!");
                goto endchoice;
        }
        else if (a==1 && d==1 && g==1) {
                printf("\nplayer: 1 ---> win!");
                goto endchoice;
        }
        else if (b==1 && e==1 && h==1) {
                printf("\nplayer: 1 ---> win!");
                goto endchoice;
        }
        else if (c==1 && f==1 && i==1) {
                printf("\nplayer: 1 ---> win!");
                goto endchoice;
        }
        else if (a==1 && e==1 && i==1) {
                printf("\nplayer: 1 ---> win!");
                goto endchoice;
        }
        else if (c==1 && e==1 && g==1) {
                printf("\nplayer: 1 ---> win!");
                goto endchoice;
        }

        secondfour:
    printf("\nplayer: 2 ---> ");
    scanf(" %c",&p24);
    switch (p24) {
        case'q': if (a>0) {
            printf("\nerror, try again!"); 
            goto secondfour;
        } a=a+2; break;
        case'w': if (b>0) {
            printf("\nerror, try again!"); 
            goto secondfour;
        } b=b+2; break;
        case'e': if (c>0) {
            printf("\nerror, try again!"); 
            goto secondfour;
        } c=c+2; break;
        case'a': if (d>0) {
            printf("\nerror, try again!"); 
            goto secondfour;
        } d=d+2; break;
        case's': if (e>0) {
            printf("\nerror, try again!"); 
            goto secondfour;
        } e=e+2; break;
        case'd': if (f>0) {
            printf("\nerror, try again!"); 
            goto secondfour;
        } f=f+2; break;
        case'z': if (g>0) {
            printf("\nerror, try again!"); 
            goto secondfour;
        } g=g+2; break;
        case'x': if (h>0) {
            printf("\nerror, try again!"); 
            goto secondfour;
        } h=h+2; break;
        case'c': if (i>0) {
            printf("\nerror, try again!"); 
            goto secondfour;
        } i=i+2; break;
             case't': 
            printf("\ntie!");
            goto endchoice;
            break;
        default: 
        printf("\nerror, try again!");
        goto secondfour;
        break;
    }

        printf("\n%dq\t%dw\t%de\n%da\t%ds\t%dd\n%dz\t%dx\t%dc",a,b,c,d,e,f,g,h,i);

        if (a==2 && b==2 && c==2) {
                printf("\nplayer: 2 ---> win!");
                goto endchoice;
        }
        else if (d==2 && e==2 && f==2) {
                printf("\nplayer: 2 ---> win!");
                goto endchoice;
        }
        else if (g==2 && h==2 && i==2) {
                printf("\nplayer: 2 ---> win!");
                goto endchoice;
        }
        else if (a==2 && d==2 && g==2) {
                printf("\nplayer: 2 ---> win!");
                goto endchoice;
        }
        else if (b==2 && e==2 && h==2) {
                printf("\nplayer: 2 ---> win!");
                goto endchoice;
        }
        else if (c==2 && f==2 && i==2) {
                printf("\nplayer: 2 ---> win!");
                goto endchoice;
        }
        else if (a==2 && e==2 && i==2) {
                printf("\nplayer: 2 ---> win!");
                goto endchoice;
        }
        else if (c==2 && e==2 && g==2) {
                printf("\nplayer: 2 ---> win!");
                goto endchoice;
        }

         onefive:
    printf("\nplayer: 1 ---> ");
    scanf(" %c",&p15);
    switch (p15) {
        case'q': if (a>0) {
            printf("\nerror, try again!"); 
            goto onefive;
        } a=a+1; break;
        case'w': if (b>0) {
            printf("\nerror, try again!"); 
            goto onefive;
        } b=b+1; break;
        case'e': if (c>0) {
            printf("\nerror, try again!"); 
            goto onefive;
        } c=c+1; break;
        case'a': if (d>0) {
            printf("\nerror, try again!"); 
            goto onefive;
        } d=d+1; break;
        case's': if (e>0) {
            printf("\nerror, try again!"); 
            goto onefive;
        } e=e+1; break;
        case'd': if (f>0) {
            printf("\nerror, try again!"); 
            goto onefive;
        } f=f+1; break;
        case'z': if (g>0) {
            printf("\nerror, try again!"); 
            goto onefive;
        } g=g+1; break;
        case'x': if (h>0) {
            printf("\nerror, try again!"); 
            goto onefive;
        } h=h+1; break;
        case'c': if (i>0) {
            printf("\nerror, try again!"); 
            goto onefive;
        } i=i+1; break;
             case't': 
            printf("\ntie!");
            goto endchoice;
            break;
        default: 
        printf("\nerror, try again!");
        goto onefive;
        break;
    }

        printf("\n%dq\t%dw\t%de\n%da\t%ds\t%dd\n%dz\t%dx\t%dc",a,b,c,d,e,f,g,h,i);

        if (a==1 && b==1 && c==1) {
                printf("\nplayer: 1 ---> win!");
                goto endchoice;
        }
        else if (d==1 && e==1 && f==1) {
                printf("\nplayer: 1 ---> win!");
                goto endchoice;
        }
        else if (g==1 && h==1 && i==1) {
                printf("\nplayer: 1 ---> win!");
                goto endchoice;
        }
        else if (a==1 && d==1 && g==1) {
                printf("\nplayer: 1 ---> win!");
                goto endchoice;
        }
        else if (b==1 && e==1 && h==1) {
                printf("\nplayer: 1 ---> win!");
                goto endchoice;
        }
        else if (c==1 && f==1 && i==1) {
                printf("\nplayer: 1 ---> win!");
                goto endchoice;
        }
        else if (a==1 && e==1 && i==1) {
                printf("\nplayer: 1 ---> win!");
                goto endchoice;
        }
        else if (c==1 && e==1 && g==1) {
                printf("\nplayer: 1 ---> win!");
                goto endchoice;
        }
        else {
                printf("\ntie!");
                goto endchoice;
        }

        
        endchoice:
        printf("\ndo you want to play again ? (y/n) ---> ");
        scanf(" %c",&yn);
        if (yn=='y') {
                goto start;
        }       
    return 0;
}
