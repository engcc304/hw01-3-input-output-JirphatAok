#include <stdio.h>
int main () {
    char Fristname[20], Lastname[20] ;
    char Fristname1[20], Lastname1[20] ;
    printf("Fristname :");
    scanf("%s",Fristname);
    printf ("Lastname :");
    scanf("%s", &Lastname);
    printf("%s %s TC, RMUTL, Chingmai, Thailand\n ",Fristname, Lastname);
    printf("Fristname1: ");
    scanf("%s", Fristname1);
    printf("Lastname1 :");
    scanf("%s", &Lastname1);
    printf(" %s %s TC, RNUTL, Chingmai, Thailand\n ",Fristname1, Lastname1);
return 0 ;
}