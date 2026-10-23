#include <stdio.h>
#include <stdbool.h>

int main() {
    bool p1=true, p2=true, p3=false, p4=false;
    bool q1=true, q2=false, q3=true, q4=false;
    bool conj1, conj2, conj3, conj4;
    bool dij1, dij2, dij3, dij4;
    bool pnag1, pnag2, pnag3, pnag4;
    bool qnag1, qnag2, qnag3, qnag4;
    bool con1, con2, con3, con4;
    bool bic1, bic2, bic3, bic4;

    conj1=p1*q1;
    conj2=p2*q2;
    conj3=p3*q3;
    conj4=p4*q4;
    dij1=p1+q1;
    dij2=p2+q2;
    dij3=p3+q3;
    dij4=p4+q4;
    pnag1=!p1;
    pnag2=!p2;
    pnag3=!p3;
    pnag4=!p4;
    qnag1=!q1;
    qnag2=!q2;
    qnag3=!q3;
    qnag4=!q4;
    con1=!p1+q1;
    con2=!p2+q2;
    con3=!p3+q3;
    con4=!p4+q4;
    bic1=(!p1+q1)*(!q1+p1);
    bic2=(!p2+q2)*(!q2+p2);
    bic3=(!p3+q3)*(!q3+p3);
    bic4=(!p4+q4)*(!q4+p4);
    
    printf("p\tq\tp^q\tpvq\t~p\t~q\tp==>q\tp<==>q\n%d \t%d \t%d \t%d \t%d \t%d \t%d    \t%d \n%d \t%d \t%d \t%d \t%d \t%d \t%d    \t%d \n%d \t%d \t%d \t%d \t%d \t%d \t%d    \t%d \n%d \t%d \t%d \t%d \t%d \t%d \t%d    \t%d", p1, q1, conj1, dij1, pnag1, qnag1, con1, bic1, p2, q2, conj2, dij2, pnag2, qnag2, con2, bic2, p3, q3, conj3, dij3, pnag3, qnag3, con3, bic3, p4, q4, conj4, dij4, pnag4, qnag4, con4, bic4);

    printf("\n\nconjuction '^'\ndijuction 'v'\nnagetion '~'\nconditional '==>'\nbiconditional '<==>'");

    printf("\n\nDe morgan's law.\n1) ~(p^q) = ~pV~q\n2) ~(pvq) = ~p^~q");
    

    return 0;
}
