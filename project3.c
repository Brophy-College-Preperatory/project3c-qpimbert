#include <stdio.h>
//Quincy Pimbert and Branson Takan
int main(void){
    double mj = 0;
    double lbj = 0;
    double kb = 0;
    double total = 0;

    char question;
    char question2;

    do {
        printf("\nWho is better (answer with the letters): \na. Michael Jordan \nb. LeBron James \nc. Kobe Bryant\n");
        printf("\nEnter your vote as a letter a, b, c: ");
        scanf(" %c", &question);
        total += 1;
        
        if (question == 'a') {
            mj += 1;
            printf("\nYou voted for Michael Jordan");
        } else if (question == 'b') {
            lbj += 1;
            printf("\nYou voted for LeBron James");
        } else if (question == 'c') {
            kb += 1;
            printf("\nYou voted for Kobe Bryant");
        } else {
            printf("You have to vote using 'a', 'b', or 'c'.");
            total -= 1;
        }

        
        printf("\nWould you like to vote again? (y/n): ");
        scanf(" %c", &question2);

    } while (question2 == 'y');

    double percentagemj = (mj / total) * 100;
    double percentagelbj = (lbj / total) * 100;
    double percentagekb = (kb / total) * 100;

    printf("Michael Jordan has %.0f percent of votes\n", percentagemj);
    printf("LeBron James has %.0f percent of votes\n", percentagelbj);
    printf("Kobe Bryant has %.0f percent of votes\n", percentagekb);

    return 0;
}

