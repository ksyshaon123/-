#include <stdio.h>
#include "lr.h"
int main(){
    int choise,p;
    printf("Vvedite nomer labu\n");
    scanf("%d", &choise);
    switch(choise){
    case(1):  lab1();break
    case(2): printf("2 laba bez dop zadania 1, s dop zadaniem 2\n");scanf("%d", &p);if(p==1){ lab2();break;}else{lab2d(); break;}
    case(3): lab3()("3 laba bez dop zadania 1, s dop zadaniem 2\n");scanf("%d", &p);if(p==1){ lab3();break;}else{lab3d(); break;
    case(4): printf("4 laba bez dop zadania 1, s dop zadaniem 2\n");scanf("%d", &p);if(p==1){ lab4();break;}else{lab4d(); break;}
    case(5): printf("5 laba bez dop zadania 1, s dop zadaniem 2\n");scanf("%d", &p);if(p==1){ lab5();break;}else{lab5d(); break;}
    case(6): printf("6 laba bez dop zadania 1, s dop zadaniem 2\n");scanf("%d", &p);if(p==1){ lab6();break;}else{lab6d(); break;}
    case(7): lab7();break;
        }
        printf("\n");
        system("pause");
return 0;
}
