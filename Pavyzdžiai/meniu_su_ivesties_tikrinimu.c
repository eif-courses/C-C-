#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int n;
char c[5];

int main() {

    while (1) {
        printf("1. Punktas.\n");
        printf("2. Punktas.\n");
        printf("3. Punktas.\n");
        printf("0. Iseiti is meniu.\n");
        printf("-----------------------------------------\n");
        printf("Pasirinkite norima punkta\n");
        printf("-----------------------------------------\n");
        if (scanf("%d", &n)==0) {  //if you type char scanf gets null value
            scanf("%s", &c);      //the abovementioned char stored in 'c'
            printf("Isitikinkite ar tikrai nurodete teisinga ivesti! %s\n", c);
        }
        else {
            //printf("The number is: %d\n", n);
            switch(n){
                case 1:
                    printf("Pasirinkote pirma punkta\n");
                    break;
                case 2:
                    printf("Pasirinkote antra punkta\n");
                    break;
                case 3:
                    printf("Pasirinkote trecia punkta\n");
                    break;
                case 0:
                    exit(EXIT_SUCCESS);
                default:
                    printf("Toks meniu punktas neegzistuoja\n");
                    break;
            }
        }
    }

}