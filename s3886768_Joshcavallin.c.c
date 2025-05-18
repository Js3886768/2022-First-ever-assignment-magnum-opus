#include <stdio.h>
#include <stdlib.h>

int main()
{

    char help[150];
    char name[30]; // this is defining an array which allows us to make a string of multiple characters to capture the player's name
    int num1;
    int num2;
    int num3;
    int score1 = 0;
    int score2 = 0;
    int score3 = 0;
    int result;
    char op;
    int menu;
    // This section of the code above is declaring all the variables, utilising int and char data types
    FILE *openfile;
    FILE *writefile;
    openfile = fopen("JoshcavallinGuide.txt", "r");
    writefile = fopen("JoshcavallinTest.txt", "a");

    while(menu != 3) /* because menu does not have a value, this section of the code is noticing that it does not equal 3,
                        and this causes the follwing code to run, this is dne using the != operator */
         {
        printf("1. Start Game \n2. How-to \n3. Quit\n");
        printf("Select an option: ");
        scanf("%d", &menu);
        fflush (stdin);
        system("cls");

    if(menu == 1)
        {
             printf("What is your name?: ");
            fgets(name,30,stdin);
            printf("What is 9+10?: ");
            scanf("%d", &num1); // the scanf library function is taking the first inputted digit and assigning the num1 variable to the input
            if(num1==9+10)
            {printf("correct!");
            score1 = 1;
            }else
            printf("incorrect!");


        printf("\nwhat is 3x5?: ");
        scanf("%d", &num2);
        if(num2==3*5)
        {printf("correct!");
         score2 = 1;
        }else
        printf("incorrect!");

        printf("\n What is 45 + 30?: ");
        scanf("%d", &num3);
        if(num3==45+30) /* this line of code is an expression which is a combination of two operators, the + is adding 45 and 30 together,
                           and the == is detecting whether the num3 variable is the same as the result of 45+30 */
        {
            printf("correct!");
            score3 = 1;
        }else
        printf("incorrect!");

         result = score1 + score2 + score3 ;
                    printf("\nYour result is %d out of 3", result);
                    sleep(2);




            fprintf(writefile, "\n%s\n\nYour result is %d out of 3",name, result);
            fclose(writefile);

            printf("\nThank you for playing this game.");
            printf("\nYou will be taken back to the menu now");
            sleep(5);
            system("cls");}











     else if(menu == 2)
        {
           printf("Here is your how to guide!\n");
           openfile = fopen("JoshcavallinGuide.txt", "r");
           while(fgets(help,150,openfile))
           {
                printf("%s", help);
           }
           fclose(openfile);
           sleep(5);
           system("cls");

        }
        else if(menu == 3)
        {
           printf("Thank you for playing!\n");
        }
        else
        {
           printf("Invalid Selection\n");
           sleep(2);
           system("cls");
        }

    }

    return 0;
}
