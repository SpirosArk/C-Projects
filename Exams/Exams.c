#include <stdio.h>
#include <stdlib.h>

/*Programm that calculates if a student succeeded in passing in a lesson of his given the times that he was absent, grades in two tests and final exams */

int main(){

float apusies, vpr1, vpr2, vte, vapusies, ve, gr; /*apusies variable given by user that shows how many times the student was absent from labs*/
                                                  /*vpr1,vpr2 variables that saves the given grades of the student on two tests*/
printf("Number of leaves.\n");                    /*vte variable given by user that tells the student's final exams grade*/
printf("Pr1 grade.\n");
printf("Pr2 grade.\n");
printf("Finals grade.\n");

scanf("%f%f%f%f",&apusies,&vpr1,&vpr2,&vte);

if (apusies==0){
    vapusies=10;
}

else if(apusies==1){
    vapusies=5;
}

else{                                              /*If Student was absent from labs more than 2 times then his grade is zero*/
    vapusies=0;
}

ve=(0.2*vapusies)+(0.4*vpr1)+(0.4*vpr2);           /*formula that calculates student's lab grade*/

if (ve<4.5){
    printf("Labs Failed.");
    return 0;
}

if (vte<4.5){
    printf("Exams failed");
    return 0;
}

gr=(ve*0.4)+(vte*0.6);                             /*formula that calculates the final grade of his*/
printf("Success");
printf("%f",gr);
}
