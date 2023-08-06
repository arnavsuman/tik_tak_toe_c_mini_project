#include<stdio.h>
#include <stdlib.h>

void instruction();
void play();
void print_matrix(char matrix[]);
void find_winner(char matrix[]);

int main() {
    
    int choice = 1;
    do
    {   printf("\nPLAY TIK-TAK-TOE\n\n");
        printf("Enter 1 for instructions.\n");
        printf("Enter 2 to play.\n");
        printf("Enter 3 to quit.\n\n");
        printf("Enter choice: ");
        scanf("%d",&choice);

        if (choice==1)
        {
            instruction();
        }
        else if (choice==2)
        {
            play();
        }
        else {
            break;
        } 
    }
    while (choice!=3);
    return 0;
}

void instruction() {
    printf("\ntik-tak-toe maze is presented in the following way: \n\n");
    printf("  -   -   -\n");
    printf("| 1 | 2 | 3 |\n");
    printf("  -   -   -\n");
    printf("| 4 | 5 | 6 |\n");
    printf("  -   -   -\n");
    printf("| 7 | 8 | 9 |\n");
    printf("  -   -   -\n\n");
    printf("1. FIRST SELECT EITHER X OR O \n");
    printf("2. Then write the position represented by the number at that spot.\n");
}
void print_matrix(char matrix[]) {
    printf(" \n\n -   -   -\n");
    printf("| %c | %c | %c |\n",matrix[0],matrix[1],matrix[2]);
    printf("  -   -   -\n");
    printf("| %c | %c | %c |\n",matrix[3],matrix[4],matrix[5]);
    printf("  -   -   -\n");
    printf("| %c | %c | %c |\n",matrix[6],matrix[7],matrix[8]);
    printf("  -   -   -\n");
}

void play() {
    char user, computer;
    int ch;
    printf("\nPLAYER 1, Enter X (0) or O(1) to select either one: ");
    scanf("%d",&ch);

    if (ch==0)
    {
        computer='O';
        user='X';
    }
    else if (ch==1) 
    {
        computer='X';
        user='O';
    }
    //printf("You have selected %c",user);

    printf("\n\nLETS START THE GAME\n");

    char matrix[9]={'0','1','2','3','4','5','6','7','8'};

    printf("\n\n  -   -   -\n");
    printf("| %c | %c | %c |\n",matrix[0],matrix[1],matrix[2]);
    printf("  -   -   -\n");
    printf("| %c | %c | %c |\n",matrix[3],matrix[4],matrix[5]);
    printf("  -   -   -\n");
    printf("| %c | %c | %c |\n",matrix[6],matrix[7],matrix[8]);
    printf("  -   -   -\n");

    
    int spot1,spot2,spot3,spot4,spot5,p1,p2,p3,p4;

    /////////
    printf("\n\nplayer 1, enter where you want your %c :",user);
    scanf("%d",&spot1);
    matrix[spot1]=user;

    print_matrix(matrix);

    printf("\n\nplayer 2, enter where you want your %c :",user);
    scanf("%d",&p1);
    matrix[p1]=computer;

    /////////
    print_matrix(matrix);

    printf("\n\nplayer 1, enter where you want your %c :",user);
    scanf("%d",&spot2);
    matrix[spot2]=user;

    print_matrix(matrix);

    printf("\n\nplayer 2, enter where you want your %c :",user);
    scanf("%d",&p2);
    matrix[p2]=computer;

    /////////
    print_matrix(matrix);

    printf("\n\nplayer 1, enter where you want your %c :",user);
    scanf("%d",&spot3);
    matrix[spot3]=user;

    print_matrix(matrix);

    printf("\n\nplayer 2, enter where you want your %c :",user);
    scanf("%d",&p3);
    matrix[p3]=computer;

    /////////
    print_matrix(matrix);

    printf("\n\nplayer 1, enter where you want your %c :",user);
    scanf("%d",&spot4);
    matrix[spot4]=user;

    print_matrix(matrix);

    printf("\n\nplayer 2, enter where you want your %c :",user);
    scanf("%d",&p4);
    matrix[p4]=computer;

    /////////
    print_matrix(matrix);

    printf("\n\nplayer 1, enter where you want your %c :",user);
    scanf("%d",&spot5);
    matrix[spot5]=user;

    print_matrix(matrix);

    
    printf("\n\nTHANKS FOR PLAYING. \n\n");
    find_winner(matrix);
    printf("\n\nYOU HAVE REACHED END OF GAME. \n\n");
}

void find_winner(char matrix[]) {

    char winner;

    if (matrix[0]==matrix[1] && matrix[1]==matrix[2]) {
        printf("The Winner is: %c\n",matrix[0]);
    }
    if (matrix[3]==matrix[4] && matrix[3]==matrix[5]) {
        printf("The Winner is: %c\n",matrix[3]);
    }
    if (matrix[6]==matrix[7] && matrix[7]==matrix[8]) {
        printf("The Winner is: %c\n",matrix[6]);
    }
    if (matrix[0]==matrix[3] && matrix[3]==matrix[6]) {
        printf("The Winner is: %c\n",matrix[0]);
    }
    if (matrix[4]==matrix[1] && matrix[1]==matrix[7]) {
       printf("The Winner is: %c\n",matrix[4]);
    }
    if (matrix[2]==matrix[5] && matrix[8]==matrix[2]) {
        printf("The Winner is: %c\n",matrix[2]);
    }
    if (matrix[0]==matrix[4] && matrix[4]==matrix[8]) {
        printf("The Winner is: %c\n",matrix[0]);
    }
    if (matrix[2]==matrix[4] && matrix[6]==matrix[2]) {
        printf("The Winner is: %c\n",matrix[2]);
    }
}
