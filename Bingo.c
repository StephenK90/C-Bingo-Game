#include <stdio.h>      // Standard input/output library
#include <stdlib.h>


// Function prototypes
void intorduction()
{ //print BINGO in ASCE art format
    printf("                 .=-.-.  .-._               _,---.       _,.---._     \n");
    printf("    _..---.     /==/_ / /==/  |  .-._    _.='.'-,  |    ,-.' , -  `.  \n");
    printf("  .' .'.-. |   |==|, |  |==|, |/ /, /  /==.'-     /   /==/_,  ,  -  | \n");
    printf(" /==/- '=' /   |==|  |  |==|-  |/  |  /==/ -   .-'   |==|   .=.     | \n");
    printf(" |==|-,   '    |==|- |  |==| ,  | -|  |==|_   /_,-.  |==|_ : ;=:  - | \n");
    printf(" |==|  .=. |   |==| ,|  |==| -   _ |  |==|  , |_.' ) |==| , '='     | \n");
    printf(" /==/- '=' ,|  |==|- |  |==|  /| , |  |==|-  ,    (   |==| -    ,_ /  \n");
    printf("|==|   -   /   /==/. /  /==/, | |- |   /==/ _  ,  /    '.='. -   .'   \n");
    printf("`-._`.___,'    `--`-`   `--`./  `--`   `--`------'       `--`--''     \n");
    printf("\n\n");
    
    printf("RULES OF THE GAME:\n"); // print rules of the game
    printf("1. A player recieves a Bingo card\n");
    printf("2. Each card has a random placemnet of numbers for each column, B, I, N, G, O\n");
    printf("         Column B contains values 1-15\n");
    printf("         Column I contains values 16-30\n");
    printf("         Column N contains values 31-45\n");
    printf("         Column G contains values 46-60\n");
    printf("         Column O contains values 61-75\n");
    printf("3. Numbers cannot be repeated\n");
    printf("4. Various patterns are identified to accomplish a BINGO\n");
    printf("5. Each round of the game will identify which pattern should be accomplished to win a BINGO\n");
    printf("6. Winning numbers are randomly selected during play\n");
    printf("7. Good luck and win BIG!\n\n\n\n");
}

 void showCard()
    { //print BINGO card 
        printf("+-----+-----+------+-----+-----+\n");
        printf("|  B  |  I  |   N  |  G  |  O  |\n");
        printf("|-----+-----+------+-----+-----|\n");
        printf("|  11 |  21 |  33  |  50 |  71 |\n");
        printf("|-----+-----+------+-----+-----|\n");
        printf("|  6  |  29 | FREE |  46 |  61 |\n");
        printf("|-----+-----+------+-----+-----|\n");
        printf("|  4  |  16 |  31  |  48 |  74 |\n");
        printf("|-----+-----+------+-----+-----|\n");
        printf("|  9  |  25 |  40  |  54 | 6 4 |\n");
        printf("+-----+-----+------+-----+-----+\n\n\n\n");
        

        
    }
;

// Main function
int main() {
    intorduction();
    showCard();
   
    printf("Press Enter to exit...");
    getchar(); // Waits for user to press Enter to exit

    return 0;
}
