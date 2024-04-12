#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
#include<string.h>

void welcome();
void mainmenu();
void game();
void help();
void gotoxy(int x,int y)// declare the gotoxy function
{
    COORD coord;
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void main() // declare main function
{
	welcome(); // call welcome screen
	mainmenu();// call mainmenu screen
}


void welcome()
{   system("color E0");
    gotoxy(38,3);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2  ELITE CODERS  \xB2\xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
    gotoxy(25,7);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
    gotoxy(25,8);
    printf("\xDB\xDB                                                                      \xDB\xDB");
    gotoxy(25,9);
    printf("\xDB\xDB                       B R A I N    B E N D E R                       \xDB\xDB");
    gotoxy(25,10);
    printf("\xDB\xDB                                                                      \xDB\xDB");
    gotoxy(25,11);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
    gotoxy(33,16);
    printf("\xDB\xDB\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\xDB\xDB");
    gotoxy(33,17);
    printf("\xDB\xDB                                                     \xDB\xDB");
    gotoxy(33,18);
    printf("\xB2\xB2                                                     \xB2\xB2");
    gotoxy(33,19);
    printf("\xB2\xB2                      WELCOME TO                     \xB2\xB2");
    gotoxy(33,20);
    printf("\xB2\xB2                         THE                         \xB2\xB2");
    gotoxy(33,21);
    printf("\xB2\xB2                         GAME                        \xB2\xB2");
    gotoxy(33,22);
    printf("\xB2\xB2                                                     \xB2\xB2");
    gotoxy(33,23);
    printf("\xDB\xDB                                                     \xDB\xDB");
    gotoxy(33,24);
    printf("\xDB\xDB\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\xDB\xDB");
    gotoxy(48,27);
    printf("Press any key to continue...");
    getch();
    }

void mainmenu(void)
{
    char choice;
    system("cls");
    system("color E0");
    gotoxy(25,3);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
    gotoxy(25,4);
    printf("\xDB\xDB                                                                      \xDB\xDB");
    gotoxy(25,5);
    printf("\xDB\xDB                       B R A I N    B E N D E R                       \xDB\xDB");
    gotoxy(25,6);
    printf("\xDB\xDB                                                                      \xDB\xDB");
    gotoxy(25,7);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
    gotoxy(40,13);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\ MAIN MENU \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
    gotoxy(40,16);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2 1. Start Game");
    gotoxy(40,18);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2 2. Help");
    gotoxy(40,20);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2 3. Exit");

    choice=getch();

     if (choice=='2')
	{
	  help();
	  getch();
	}
    else if (choice=='3')
    { exit(1); }
    else if (choice=='1')
    {
      game();
      getch();
    }
    else
    {
        gotoxy(44,24);
        printf("Wrong Input!! (Choose between 1-3)");
        getch();
        mainmenu();
    }
     getch();

}

void game()
{
    system("cls");
    int life=5,score=0,r,q;
    char c1,c2,c3,c4,c5,c6,c7,c8,c9,playername[20];

    reg:
    system("color E0");
      system("cls");
      gotoxy(25,5);
      printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
      gotoxy(25,6);
      printf("\xDB\xDB                                                                      \xDB\xDB");
      gotoxy(25,7);
      printf("\xDB\xDB                       B R A I N    B E N D E R                       \xDB\xDB");
      gotoxy(25,8);
      printf("\xDB\xDB                                                                      \xDB\xDB");
      gotoxy(25,9);
      printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
      gotoxy(33,15);
      printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2 Register Your  Name: ");
      gets(playername);
      gotoxy(48,26);
      printf("Press any key to continue..." );
      getch();
      goto help;


help:
     system("cls");
     gotoxy(40,2);
     printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\ HELP \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
     gotoxy(10,5);
     printf("\xB2\xB2\xB2\xB2\xB2>> There are 10 levels in the game and each level got 3 riddles. With every level the riddles  ");
     gotoxy(18,6);
     printf("will gradually get difficult. ");
     gotoxy(10,8);
     printf("\xB2\xB2\xB2\xB2\xB2>> You will get 5 lives to complete the game.");
     gotoxy(10,10);
     printf("\xB2\xB2\xB2\xB2\xB2>> For guessing each riddle you will get 5 points and for each wrong guess you will lose 1 life!");
     gotoxy(10,12);
     printf("\xB2\xB2\xB2\xB2\xB2>> You can use hints to guess the right answer. But for using each hint you will lose 2 points!");
     gotoxy(10,14);
     printf("\xB2\xB2\xB2\xB2\xB2>> The hint will contain extra alphabets along with the alphabets of the correct answer.");
     gotoxy(18,15);
     printf("EXAMPLE: If the answer is 'CROW' the hint will be 'R C S O E W'. You have to organize the");
     gotoxy(18,16);
     printf("alphabets in right order to get the correct answer. ");
     gotoxy(10,18);
     printf("\xB2\xB2\xB2\xB2\xB2>> The 1st riddle will be a demo riddle. You automatically will get 5 points there.");
     gotoxy(10,20);
     printf("\xB2\xB2\xB2\xB2\xB2>> The 30th or last riddle will be in 'Morse Code'. So you have to decode the 'Morse Code' ");
     gotoxy(18,21);
     printf("manually in order to win the game!");
     gotoxy(44,24);
     printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2  BEST OF LUCK !! \xB2\xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
     gotoxy(88,26);
     printf("~ Developed by ELITE CODERS");
     gotoxy(48,28);
     printf("Press any key to continue..." );
     getch();
     goto load;


load:
    system("cls");
    gotoxy(48,12);
    printf("Loading, Please Wait...");
    gotoxy(48,14);
    for(r=1; r<=23; r++)
    {
        for(q=0; q<=100000000; q++ );
        printf("%c",177);

    }
    goto rid01;


rid01:
       system("cls");
{
rid1:
    gotoxy(12,2);
    printf("Life = %d",life);
    gotoxy(100,2);
    printf("Score = %d",score);
    gotoxy(88,19);
    printf("Note : First riddle is a ");
    gotoxy(95,20);
    printf("demo riddle. That's ");
    gotoxy(95,21);
    printf("why for using hint you ");
    gotoxy(95,22);
    printf("won't lose 2 points.");
    gotoxy(49,27);
    printf("Press 'HHHH' for Hint");
    gotoxy(42,5);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2  LEVEL 1  \xB2\xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
    gotoxy(44,7);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2  DEMO RIDDLE: 01  \xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(29,11);
    printf("RIDDLE :  Neil's father have four kids March, June, July.");
    gotoxy(39,12);
    printf("What is the name of the other kid? (4 alphabets)");
    gotoxy(57,15);
    printf("----");
    gotoxy(57,15);
    scanf("%c%c%c%c",&c1,&c2,&c3,&c4);
    if (((c1=='N')||(c1=='n'))&&((c2=='E')||(c2=='e'))&&((c3=='I')||(c3=='i'))&&((c4=='L')||(c4=='l')))
    {
        gotoxy(41,18);
        printf("The answer is CORRECT!!");
        score=score+5;
        gotoxy(100,2);
        printf("Score = %d",score);
        gotoxy(47,27);
        printf("Press any key to continue...");
        getch();
        fflush(stdin);
        goto rid02;

    }
    else if(((c1=='h')||(c1=='H'))&&((c2=='h')||(c2=='H'))&&((c3=='h')||(c3=='H'))&&((c4=='h')||(c4=='H')))
    {
        gotoxy(57,22);
        printf("HINT :");
        gotoxy(54,24);
        printf("B E N D L I");
        fflush(stdin);
        goto rid1;
        getch();
    }
    else
    {
        gotoxy(41,18);
        printf("The answer is WRONG!!");
        life=life-1;
        gotoxy(12,2);
        printf("Life = %d",life);
        if (life>0)
        {
            fflush(stdin);
            goto rid1;
        }
        else
        {   gotoxy(41,18);
            printf("The answer is 'NEIL'.");
            gotoxy(51,15);
            printf("You lost the Game!!");
            gotoxy(48,27);
            printf("Press any key continue...");
            getch();
            fflush(stdin);
            goto gameover; }
    }
}


rid02:
       system("cls");
{
    rid2:
    gotoxy(12,2);
    printf("Life = %d",life);
    gotoxy(100,2);
    printf("Score = %d",score);
    gotoxy(50,27);
    printf("Press 'HHH' for Hint");
    gotoxy(42,5);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2  LEVEL 1  \xB2\xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
    gotoxy(47,7);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2  RIDDLE: 02  \xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(31,12);
    printf("RIDDLE:  What goes up but never comes down? (3 alphabets)");
    gotoxy(59,15);
    printf("---");
    gotoxy(59,15);
    scanf("%c%c%c",&c1,&c2,&c3);
    if (((c1=='A')||(c1=='a'))&&((c2=='G')||(c2=='g'))&&((c3=='E')||(c3=='e')))
    {
        gotoxy(41,18);
        printf("The answer is CORRECT!!");
        score=score+5;
        gotoxy(100,2);
        printf("Score = %d",score);
        gotoxy(47,27);
        printf("Press any key to continue...");
        getch();
        fflush(stdin);
        goto rid03;
        }

    else if (((c1=='h')||(c1=='H'))&&((c2=='h')||(c2=='H'))&&((c3=='h')||(c3=='H')))
    {
      if(score>1)
      {
        gotoxy(58,22);
        printf("HINT :");
        gotoxy(56,24);
        printf("F G D A E");
        score=score-2;
        gotoxy(100,2);
        printf("Score = %d",score);
        fflush(stdin);
        goto rid2;
        getch();}
        else
        {
         gotoxy(47,19);
         printf("Your point is less than 2.");
         gotoxy(47,20);
         printf("You can't use HINT.");
         fflush(stdin);
         goto rid2;
         getch();}
    }
    else
    {
        gotoxy(41,18);
        printf("The answer is WRONG!!");
        life=life-1;
        gotoxy(12,2);
        printf("Life = %d",life);
        if (life>0)
        {
            fflush(stdin);
            goto rid2;
        }
        else
        {
            gotoxy(41,18);
            printf("The answer is 'AGE'.");
            gotoxy(51,15);
            printf("You lost the Game!!");
            gotoxy(48,27);
            printf("Press any key continue...");
            getch();
            fflush(stdin);
            goto gameover;
        }
    }
}


rid03:
       system("cls");
{
    rid3:
    gotoxy(12,2);
    printf("Life = %d",life);
    gotoxy(100,2);
    printf("Score = %d",score);
    gotoxy(50,27);
    printf("Press 'HHH' for Hint");
    gotoxy(42,5);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2  LEVEL 1  \xB2\xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
    gotoxy(47,7);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2  RIDDLE: 03  \xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(26,12);
    printf("RIDDLE:  What has to be broken before you can use it? (3 alphabets)");
    gotoxy(59,15);
    printf("---");
    gotoxy(59,15);
    scanf("%c%c%c",&c1,&c2,&c3);
    if (((c1=='E')||(c1=='e'))&&((c2=='G')||(c2=='g'))&&((c3=='G')||(c3=='g')))
    {
        gotoxy(41,18);
        printf("The answer is CORRECT!!");
        score=score+5;
        gotoxy(100,2);
        printf("Score = %d",score);
        gotoxy(47,27);
        printf("Press any key to continue...");
        getch();
        fflush(stdin);
        goto lev1;
    }
    else if (((c1=='h')||(c1=='H'))&&((c2=='h')||(c2=='H'))&&((c3=='h')||(c3=='H')))
    {
        if(score>1)
      {
        gotoxy(58,22);
        printf("HINT :");
        gotoxy(56,24);
        printf("F G R G E");
        score=score-2;
        gotoxy(100,2);
        printf("Score = %d",score);
        fflush(stdin);
        goto rid3;
        getch();}
        else
        {
         gotoxy(47,19);
         printf("Your point is less than 2.");
         gotoxy(47,20);
         printf("You can't use HINT.");
         fflush(stdin);
         goto rid3;
         getch();}
    }
    else
    {
        gotoxy(41,18);
        printf("The answer is WRONG!!");
        life=life-1;
        gotoxy(12,2);
        printf("Life = %d",life);
        if (life>0)
        {
            fflush(stdin);
            goto rid3;
        }
        else
        {
            gotoxy(42,18);
            printf("The answer is 'EGG'.");
            gotoxy(51,15);
            printf("You lost the Game!!");
            gotoxy(48,27);
            printf("Press any key continue...");
            getch();
            fflush(stdin);
            goto gameover;
        }
    }
}


rid04:
       system("cls");
{
    rid4:
    gotoxy(12,2);
    printf("Life = %d",life);
    gotoxy(100,2);
    printf("Score = %d",score);
    gotoxy(50,27);
    printf("Press 'HHHH' for Hint");
    gotoxy(42,5);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2  LEVEL 2  \xB2\xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
    gotoxy(47,7);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2  RIDDLE: 04  \xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(19,12);
    printf("RIDDLE:  It belongs to you, but other people use it more than you do. (4 alphabets)");
    gotoxy(58,15);
    printf("----");
    gotoxy(58,15);
    scanf("%c%c%c%c",&c1,&c2,&c3,&c4);
    if (((c1=='N')||(c1=='n'))&&((c2=='A')||(c2=='a'))&&((c3=='M')||(c3=='m'))&&((c4=='E')||(c4=='e')))
    {
        gotoxy(41,18);
        printf("The answer is CORRECT!!");
        score=score+5;
        gotoxy(100,2);
        printf("Score = %d",score);
        gotoxy(47,27);
        printf("Press any key to continue...");
        getch();
        fflush(stdin);
        goto rid05;
    }
    else if (((c1=='h')||(c1=='H'))&&((c2=='h')||(c2=='H'))&&((c3=='h')||(c3=='H'))&&((c4=='h')||(c4=='H')))
    {
      if(score>1)
      {
        gotoxy(58,22);
        printf("HINT :");
        gotoxy(55,24);
        printf("A U N S E M");
        score=score-2;
        gotoxy(100,2);
        printf("Score = %d",score);
        fflush(stdin);
        goto rid4;
        getch();}
        else
        {
         gotoxy(47,19);
         printf("Your point is less than 2.");
         gotoxy(47,20);
         printf("You can't use HINT.");
         fflush(stdin);
         goto rid4;
         getch();}
    }
    else
    {
        gotoxy(41,18);
        printf("The answer is WRONG!!");
        life=life-1;
        gotoxy(12,2);
        printf("Life = %d",life);
        if (life>0)
        {
            fflush(stdin);
            goto rid4;
        }
        else
        {
            gotoxy(41,18);
            printf("The answer is 'NAME'.");
            gotoxy(51,15);
            printf("You lost the Game!!");
            gotoxy(48,27);
            printf("Press any key continue...");
            getch();
            fflush(stdin);
            goto gameover;
        }
    }
}


rid05:
       system("cls");
{
    rid5:
    gotoxy(12,2);
    printf("Life = %d",life);
    gotoxy(100,2);
    printf("Score = %d",score);
    gotoxy(50,27);
    printf("Press 'HHHH' for Hint");
    gotoxy(42,5);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2  LEVEL 2  \xB2\xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
    gotoxy(47,7);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2  RIDDLE: 05  \xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(32,12);
    printf("RIDDLE:  What has words, but never speaks? (4 alphabets)");
    gotoxy(58,15);
    printf("----");
    gotoxy(58,15);
    scanf("%c%c%c%c",&c1,&c2,&c3,&c4);
    if (((c1=='B')||(c1=='b'))&&((c2=='O')||(c2=='o'))&&((c3=='O')||(c3=='o'))&&((c4=='K')||(c4=='k')))
    {
        gotoxy(41,18);
        printf("The answer is CORRECT!!");
        score=score+5;
        gotoxy(100,2);
        printf("Score = %d",score);
        gotoxy(47,27);
        printf("Press any key to continue...");
        getch();
        fflush(stdin);
        goto rid06;
    }
    else if (((c1=='h')||(c1=='H'))&&((c2=='h')||(c2=='H'))&&((c3=='h')||(c3=='H'))&&((c4=='h')||(c4=='H')))
    {
        if(score>1)
      {
        gotoxy(58,22);
        printf("HINT :");
        gotoxy(55,24);
        printf("O K B Y O M");
        score=score-2;
        gotoxy(100,2);
        printf("Score = %d",score);
        fflush(stdin);
        goto rid5;
        getch();}
        else
        {
         gotoxy(47,19);
         printf("Your point is less than 2.");
         gotoxy(47,20);
         printf("You can't use HINT.");
         fflush(stdin);
         goto rid5;
         getch();}
    }
    else
    {
        gotoxy(41,18);
        printf("The answer is WRONG!!");
        life=life-1;
        gotoxy(12,2);
        printf("Life = %d",life);
        if (life>0)
        {
            fflush(stdin);
            goto rid5;
        }
        else
        {
            gotoxy(41,18);
            printf("The answer is 'BOOK'.");
            gotoxy(51,15);
            printf("You lost the Game!!");
            gotoxy(48,27);
            printf("Press any key continue...");
            getch();
            fflush(stdin);
            goto gameover;
        }
    }
}


rid06:
       system("cls");
{
    rid6:
    gotoxy(12,2);
    printf("Life = %d",life);
    gotoxy(100,2);
    printf("Score = %d",score);
    gotoxy(50,27);
    printf("Press 'HHHH' for Hint");
    gotoxy(42,5);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2  LEVEL 2  \xB2\xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
    gotoxy(47,7);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2  RIDDLE: 06  \xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(29,12);
    printf("RIDDLE:  What has a head and a tail but no body? (4 alphabets)");
    gotoxy(58,15);
    printf("----");
    gotoxy(58,15);
    scanf("%c%c%c%c",&c1,&c2,&c3,&c4);
    if (((c1=='C')||(c1=='c'))&&((c2=='O')||(c2=='o'))&&((c3=='I')||(c3=='i'))&&((c4=='N')||(c4=='n')))
    {
        gotoxy(41,18);
        printf("The answer is CORRECT!!");
        score=score+5;
        gotoxy(100,2);
        printf("Score = %d",score);
        gotoxy(47,27);
        printf("Press any key to continue...");
        getch();
        fflush(stdin);
        goto lev2;
    }
    else if (((c1=='h')||(c1=='H'))&&((c2=='h')||(c2=='H'))&&((c3=='h')||(c3=='H'))&&((c4=='h')||(c4=='H')))
    {
        if(score>1)
      {
        gotoxy(58,22);
        printf("HINT :");
        gotoxy(55,24);
        printf("Z I O R C N");
        score=score-2;
        gotoxy(100,2);
        printf("Score = %d",score);
        fflush(stdin);
        goto rid6;
        getch();}
        else
        {
         gotoxy(47,19);
         printf("Your point is less than 2.");
         gotoxy(47,20);
         printf("You can't use HINT.");
         fflush(stdin);
         goto rid6;
         getch();}
    }
    else
    {
        gotoxy(41,18);
        printf("The answer is WRONG!!");
        life=life-1;
        gotoxy(12,2);
        printf("Life = %d",life);
        if (life>0)
        {
            fflush(stdin);
            goto rid6;
        }
        else
        {
            gotoxy(41,18);
            printf("The answer is 'COIN'.");
            gotoxy(51,15);
            printf("You lost the Game!!");
            gotoxy(48,27);
            printf("Press any key continue...");
            getch();
            fflush(stdin);
            goto gameover;
        }
    }
}


rid07:
       system("cls");
{
    rid7:
    gotoxy(12,2);
    printf("Life = %d",life);
    gotoxy(100,2);
    printf("Score = %d",score);
    gotoxy(50,27);
    printf("Press 'HHHHH' for Hint");
    gotoxy(42,5);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2  LEVEL 3  \xB2\xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
    gotoxy(47,7);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2  RIDDLE: 07  \xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(23,12);
    printf("RIDDLE:  What has a thumb and four fingers, but is not a hand? (5 alphabets)");
    gotoxy(57,15);
    printf("-----");
    gotoxy(57,15);
    scanf("%c%c%c%c%c",&c1,&c2,&c3,&c4,&c5);
    if (((c1=='G')||(c1=='g'))&&((c2=='L')||(c2=='l'))&&((c3=='O')||(c3=='o'))&&((c4=='V')||(c4=='v'))&&((c5=='E')||(c5=='e')))
    {
        gotoxy(41,18);
        printf("The answer is CORRECT!!");
        score=score+5;
        gotoxy(100,2);
        printf("Score = %d",score);
        gotoxy(47,27);
        printf("Press any key to continue...");
        getch();
        fflush(stdin);
        goto rid08;
    }
    else if (((c1=='h')||(c1=='H'))&&((c2=='h')||(c2=='H'))&&((c3=='h')||(c3=='H'))&&((c4=='h')||(c4=='H'))&&((c5=='h')||(c5=='H')))
    {
        if(score>1)
      {
        gotoxy(58,22);
        printf("HINT :");
        gotoxy(54,24);
        printf("L V K O G Q E");
        score=score-2;
        gotoxy(100,2);
        printf("Score = %d",score);
        fflush(stdin);
        goto rid7;
        getch();}
        else
        {
         gotoxy(47,19);
         printf("Your point is less than 2.");
         gotoxy(47,20);
         printf("You can't use HINT.");
         fflush(stdin);
         goto rid7;
         getch();}
    }
    else
    {
        gotoxy(41,18);
        printf("The answer is WRONG!!");
        life=life-1;
        gotoxy(12,2);
        printf("Life = %d",life);
        if (life>0)
        {
            fflush(stdin);
            goto rid7;
        }
        else
        {
            gotoxy(41,18);
            printf("The answer is 'GLOVE'.");
            gotoxy(51,15);
            printf("You lost the Game!!");
            gotoxy(48,27);
            printf("Press any key continue...");
            getch();
            fflush(stdin);
            goto gameover;
        }
    }
}


rid08:
       system("cls");
{
    rid8:
    gotoxy(12,2);
    printf("Life = %d",life);
    gotoxy(100,2);
    printf("Score = %d",score);
    gotoxy(50,27);
    printf("Press 'HHHHH' for Hint");
    gotoxy(42,5);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2  LEVEL 3  \xB2\xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
    gotoxy(47,7);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2  RIDDLE: 08  \xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(24,12);
    printf("RIDDLE:  What has many keys but can't open a single lock? (5 alphabets)");
    gotoxy(57,15);
    printf("-----");
    gotoxy(57,15);
    scanf("%c%c%c%c%c",&c1,&c2,&c3,&c4,&c5);
    if (((c1=='P')||(c1=='p'))&&((c2=='I')||(c2=='i'))&&((c3=='A')||(c3=='a'))&&((c4=='N')||(c4=='n'))&&((c5=='O')||(c5=='o')))
    {
        gotoxy(41,18);
        printf("The answer is CORRECT!!");
        score=score+5;
        gotoxy(100,2);
        printf("Score = %d",score);
        gotoxy(47,27);
        printf("Press any key to continue...");
        getch();
        fflush(stdin);
        goto rid09;
    }
    else if (((c1=='h')||(c1=='H'))&&((c2=='h')||(c2=='H'))&&((c3=='h')||(c3=='H'))&&((c4=='h')||(c4=='H'))&&((c5=='h')||(c5=='H')))
    {
         if(score>1)
      {
        gotoxy(58,22);
        printf("HINT :");
        gotoxy(54,24);
        printf("O A W I N W P");
        score=score-2;
        gotoxy(100,2);
        printf("Score = %d",score);
        fflush(stdin);
        goto rid8;
        getch();}
        else
        {
         gotoxy(47,19);
         printf("Your point is less than 2.");
         gotoxy(47,20);
         printf("You can't use HINT.");
         fflush(stdin);
         goto rid8;
         getch();}
    }
    else
    {
        gotoxy(41,18);
        printf("The answer is WRONG!!");
        life=life-1;
        gotoxy(12,2);
        printf("Life = %d",life);
        if (life>0)
        {
            fflush(stdin);
            goto rid8;
        }
        else
        {
            gotoxy(41,18);
            printf("The answer is 'PIANO'.");
            gotoxy(51,15);
            printf("You lost the Game!!");
            gotoxy(48,27);
            printf("Press any key continue...");
            getch();
            fflush(stdin);
            goto gameover;
        }
    }
}


rid09:
       system("cls");
{
    rid9:
    gotoxy(12,2);
    printf("Life = %d",life);
    gotoxy(100,2);
    printf("Score = %d",score);
    gotoxy(50,27);
    printf("Press 'HHHHH' for Hint");
    gotoxy(42,5);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2  LEVEL 3  \xB2\xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
    gotoxy(47,7);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2  RIDDLE: 09  \xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(33,12);
    printf("RIDDLE:  What has hands, but can't clap? (5 alphabets)");
    gotoxy(57,15);
    printf("-----");
    gotoxy(57,15);
    scanf("%c%c%c%c%c",&c1,&c2,&c3,&c4,&c5);
    if (((c1=='C')||(c1=='c'))&&((c2=='L')||(c2=='l'))&&((c3=='O')||(c3=='o'))&&((c4=='C')||(c4=='c'))&&((c5=='K')||(c5=='k')))
    {
        gotoxy(41,18);
        printf("The answer is CORRECT!!");
        score=score+5;
        gotoxy(100,2);
        printf("Score = %d",score);
        gotoxy(47,27);
        printf("Press any key to continue...");
        getch();
        fflush(stdin);
        goto lev3;
    }
    else if (((c1=='h')||(c1=='H'))&&((c2=='h')||(c2=='H'))&&((c3=='h')||(c3=='H'))&&((c4=='h')||(c4=='H'))&&((c5=='h')||(c5=='H')))
    {
        if(score>1)
      {
        gotoxy(58,22);
        printf("HINT :");
        gotoxy(54,24);
        printf("O P C K L C T");
        score=score-2;
        gotoxy(100,2);
        printf("Score = %d",score);
        fflush(stdin);
        goto rid9;
        getch();}
        else
        {
         gotoxy(47,19);
         printf("Your point is less than 2.");
         gotoxy(47,20);
         printf("You can't use HINT.");
         fflush(stdin);
         goto rid9;
         getch();}
    }
    else
    {
        gotoxy(41,18);
        printf("The answer is WRONG!!");
        life=life-1;
        gotoxy(12,2);
        printf("Life = %d",life);
        if (life>0)
        {
            fflush(stdin);
            goto rid9;
        }
        else
        {
            gotoxy(41,18);
            printf("The answer is 'CLOCK'.");
            gotoxy(51,15);
            printf("You lost the Game!!");
            gotoxy(48,27);
            printf("Press any key continue...");
            getch();
            fflush(stdin);
            goto gameover;
        }
    }
}

rid010:
       system("cls");
{
    rid10:
    gotoxy(12,2);
    printf("Life = %d",life);
    gotoxy(100,2);
    printf("Score = %d",score);
    gotoxy(49,27);
    printf("Press 'HHHHHH' for Hint");
    gotoxy(42,5);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2  LEVEL 4  \xB2\xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
    gotoxy(47,7);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2  RIDDLE: 10  \xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(25,11);
    printf("RIDDLE:  I follow you all the time and copy your every move, but ");
    gotoxy(34,12);
    printf("you can't touch me or catch me. What am I? (6 alphabets) ");
    gotoxy(56,15);
    printf("------");
    gotoxy(56,15);
    scanf("%c%c%c%c%c%c",&c1,&c2,&c3,&c4,&c5,&c6);
    if (((c1=='S')||(c1=='s'))&&((c2=='H')||(c2=='h'))&&((c3=='A')||(c3=='a'))&&((c4=='D')||(c4=='d'))&&((c5=='O')||(c5=='o'))&&((c6=='W')||(c6=='w')))
    {
        gotoxy(41,18);
        printf("The answer is CORRECT!!");
        score=score+5;
        gotoxy(100,2);
        printf("Score = %d",score);
        gotoxy(47,27);
        printf("Press any key to continue...");
        getch();
        fflush(stdin);
        goto rid011;

    }
    else if (((c1=='h')||(c1=='H'))&&((c2=='h')||(c2=='H'))&&((c3=='h')||(c3=='H'))&&((c4=='h')||(c4=='H'))&&((c5=='h')||(c5=='H'))&&((c6=='h')||(c6=='H')))
    {
        if(score>1)
      {
        gotoxy(57,22);
        printf("HINT :");
        gotoxy(52,24);
        printf("O S Z W A U D H");
        score=score-2;
        gotoxy(100,2);
        printf("Score = %d",score);
        fflush(stdin);
        goto rid10;
        getch();}
        else
        {
         gotoxy(47,19);
         printf("Your point is less than 2.");
         gotoxy(47,20);
         printf("You can't use HINT.");
         fflush(stdin);
         goto rid10;
         getch();}
    }
    else
    {
        gotoxy(41,18);
        printf("The answer is WRONG!!");
        life=life-1;
        gotoxy(12,2);
        printf("Life = %d",life);
        if (life>0)
        {
            fflush(stdin);
            goto rid10;
        }
        else
        {
            gotoxy(41,18);
            printf("The answer is 'SHADOW'.");
            gotoxy(51,15);
            printf("You lost the Game!!");
            gotoxy(48,27);
            printf("Press any key continue...");
            getch();
            fflush(stdin);
            goto gameover;
        }
    }
}

rid011:
       system("cls");
{
    rid11:
    gotoxy(12,2);
    printf("Life = %d",life);
    gotoxy(100,2);
    printf("Score = %d",score);
    gotoxy(49,27);
    printf("Press 'HHHHHH' for Hint");
    gotoxy(42,5);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2  LEVEL 4  \xB2\xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
    gotoxy(47,7);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2  RIDDLE: 11  \xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(27,11);
    printf("RIDDLE:  I'm tall when I'm young, and I'm short when I'm old.");
    gotoxy(36,12);
    printf("What am I? (6 alphabets) ");
    gotoxy(56,15);
    printf("------");
    gotoxy(56,15);
    scanf("%c%c%c%c%c%c",&c1,&c2,&c3,&c4,&c5,&c6);
    if (((c1=='C')||(c1=='c'))&&((c2=='A')||(c2=='a'))&&((c3=='N')||(c3=='n'))&&((c4=='D')||(c4=='d'))&&((c5=='L')||(c5=='l'))&&((c6=='E')||(c6=='e')))
    {
        gotoxy(41,18);
        printf("The answer is CORRECT!!");
        score=score+5;
        gotoxy(100,2);
        printf("Score = %d",score);
        gotoxy(47,27);
        printf("Press any key to continue...");
        getch();
        fflush(stdin);
        goto rid012;
    }
    else if (((c1=='h')||(c1=='H'))&&((c2=='h')||(c2=='H'))&&((c3=='h')||(c3=='H'))&&((c4=='h')||(c4=='H'))&&((c5=='h')||(c5=='H'))&&((c6=='h')||(c6=='H')))
    {
      if(score>1)
      {
        gotoxy(57,22);
        printf("HINT :");
        gotoxy(52,24);
        printf("D N K E A I C L");
        score=score-2;
        gotoxy(100,2);
        printf("Score = %d",score);
        fflush(stdin);
        goto rid11;
        getch();}
        else
        {
         gotoxy(47,19);
         printf("Your point is less than 2.");
         gotoxy(47,20);
         printf("You can't use HINT.");
         fflush(stdin);
         goto rid11;
         getch();}
    }
    else
    {
        gotoxy(41,18);
        printf("The answer is WRONG!!");
        life=life-1;
        gotoxy(12,2);
        printf("Life = %d",life);
        if (life>0)
        {
            fflush(stdin);
            goto rid11;
        }
        else
        {
            gotoxy(41,18);
            printf("The answer is 'CANDLE'.");
            gotoxy(51,15);
            printf("You lost the Game!!");
            gotoxy(48,27);
            printf("Press any key continue...");
            getch();
            fflush(stdin);
            goto gameover;
        }
    }
}


rid012:
       system("cls");
{
    rid12:
    gotoxy(12,2);
    printf("Life = %d",life);
    gotoxy(100,2);
    printf("Score = %d",score);
    gotoxy(49,27);
    printf("Press 'HHHHHH' for Hint");
    gotoxy(42,5);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2  LEVEL 4  \xB2\xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
    gotoxy(47,7);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2  RIDDLE: 12  \xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(27,12);
    printf("RIDDLE:  What is full of holes but still holds water? (6 alphabets)");
    gotoxy(56,15);
    printf("------");
    gotoxy(56,15);
    scanf("%c%c%c%c%c%c",&c1,&c2,&c3,&c4,&c5,&c6);
    if (((c1=='S')||(c1=='s'))&&((c2=='P')||(c2=='p'))&&((c3=='O')||(c3=='o'))&&((c4=='N')||(c4=='n'))&&((c5=='G')||(c5=='g'))&&((c6=='E')||(c6=='e')))
    {
        gotoxy(41,18);
        printf("The answer is CORRECT!!");
        score=score+5;
        gotoxy(100,2);
        printf("Score = %d",score);
        gotoxy(47,27);
        printf("Press any key to continue...");
        getch();
        fflush(stdin);
        goto lev4;
    }
    else if (((c1=='h')||(c1=='H'))&&((c2=='h')||(c2=='H'))&&((c3=='h')||(c3=='H'))&&((c4=='h')||(c4=='H'))&&((c5=='h')||(c5=='H'))&&((c6=='h')||(c6=='H')))
    {
      if(score>1)
      {
        gotoxy(57,22);
        printf("HINT :");
        gotoxy(52,24);
        printf("O N Z P E G Y S");
        score=score-2;
        gotoxy(100,2);
        printf("Score = %d",score);
        fflush(stdin);
        goto rid12;
        getch();}
        else
        {
         gotoxy(47,19);
         printf("Your point is less than 2.");
         gotoxy(47,20);
         printf("You can't use HINT.");
         fflush(stdin);
         goto rid12;
         getch();}
    }
    else
    {
        gotoxy(41,18);
        printf("The answer is WRONG!!");
        life=life-1;
        gotoxy(12,2);
        printf("Life = %d",life);
        if (life>0)
        {
            fflush(stdin);
            goto rid12;
        }
        else
        {
            gotoxy(41,18);
            printf("The answer is 'SPONGE'.");
            gotoxy(51,15);
            printf("You lost the Game!!");
            gotoxy(48,27);
            printf("Press any key continue...");
            getch();
            fflush(stdin);
            goto gameover;
        }
    }
}


rid013:
       system("cls");
{
    rid13:
    gotoxy(12,2);
    printf("Life = %d",life);
    gotoxy(100,2);
    printf("Score = %d",score);
    gotoxy(49,27);
    printf("Press 'HHHHHH' for Hint");
    gotoxy(42,5);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2  LEVEL 5  \xB2\xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
    gotoxy(47,7);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2  RIDDLE: 13  \xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(26,11);
    printf("RIDDLE:  I'm light as a feather, yet the strongest person can't");
    gotoxy(35,12);
    printf("hold me for five minutes. What am I? (6 alphabets)");
    gotoxy(56,15);
    printf("------");
    gotoxy(56,15);
    scanf("%c%c%c%c%c%c",&c1,&c2,&c3,&c4,&c5,&c6);
    if (((c1=='B')||(c1=='b'))&&((c2=='R')||(c2=='r'))&&((c3=='E')||(c3=='e'))&&((c4=='A')||(c4=='a'))&&((c5=='T')||(c5=='t'))&&((c6=='H')||(c6=='h')))
    {
        gotoxy(41,18);
        printf("The answer is CORRECT!!");
        score=score+5;
        gotoxy(100,2);
        printf("Score = %d",score);
        gotoxy(47,27);
        printf("Press any key to continue...");
        getch();
        fflush(stdin);
        goto rid014;
    }
    else if (((c1=='h')||(c1=='H'))&&((c2=='h')||(c2=='H'))&&((c3=='h')||(c3=='H'))&&((c4=='h')||(c4=='H'))&&((c5=='h')||(c5=='H'))&&((c6=='h')||(c6=='H')))
    {
      if(score>1)
      {
        gotoxy(57,22);
        printf("HINT :");
        gotoxy(52,24);
        printf("H B X A E R W T");
        score=score-2;
        gotoxy(100,2);
        printf("Score = %d",score);
        fflush(stdin);
        goto rid13;
        getch();}
        else
        {
         gotoxy(47,19);
         printf("Your point is less than 2.");
         gotoxy(47,20);
         printf("You can't use HINT.");
         fflush(stdin);
         goto rid13;
         getch();}
    }
    else
    {
        gotoxy(41,18);
        printf("The answer is WRONG!!");
        life=life-1;
        gotoxy(12,2);
        printf("Life = %d",life);
        if (life>0)
        {
            fflush(stdin);
            goto rid13;
        }
        else
        {
            gotoxy(41,18);
            printf("The answer is 'BREATH'.");
            gotoxy(51,15);
            printf("You lost the Game!!");
            gotoxy(48,27);
            printf("Press any key continue...");
            getch();
            fflush(stdin);
            goto gameover;
        }
    }
}


rid014:
       system("cls");
{
    rid14:
    gotoxy(12,2);
    printf("Life = %d",life);
    gotoxy(100,2);
    printf("Score = %d",score);
    gotoxy(49,27);
    printf("Press 'HHHHHH' for Hint");
    gotoxy(42,5);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2  LEVEL 5  \xB2\xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
    gotoxy(47,7);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2  RIDDLE: 14  \xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(24,12);
    printf("RIDDLE:  What invention lets you look right through a wall? (6 alphabets)");
    gotoxy(56,15);
    printf("------");
    gotoxy(56,15);
    scanf("%c%c%c%c%c%c",&c1,&c2,&c3,&c4,&c5,&c6);
    if (((c1=='W')||(c1=='w'))&&((c2=='I')||(c2=='i'))&&((c3=='N')||(c3=='n'))&&((c4=='D')||(c4=='d'))&&((c5=='O')||(c5=='o'))&&((c6=='W')||(c6=='w')))
    {
        gotoxy(41,18);
        printf("The answer is CORRECT!!");
        score=score+5;
        gotoxy(100,2);
        printf("Score = %d",score);
        gotoxy(47,27);
        printf("Press any key to continue...");
        getch();
        fflush(stdin);
        goto rid015;
    }
    else if (((c1=='h')||(c1=='H'))&&((c2=='h')||(c2=='H'))&&((c3=='h')||(c3=='H'))&&((c4=='h')||(c4=='H'))&&((c5=='h')||(c5=='H'))&&((c6=='h')||(c6=='H')))
    {
      if(score>1)
      {
        gotoxy(57,22);
        printf("HINT :");
        gotoxy(52,24);
        printf("N W D J W I O M");
        score=score-2;
        gotoxy(100,2);
        printf("Score = %d",score);
        fflush(stdin);
        goto rid14;
        getch();}
        else
        {
         gotoxy(47,19);
         printf("Your point is less than 2.");
         gotoxy(47,20);
         printf("You can't use HINT.");
         fflush(stdin);
         goto rid14;
         getch();}
    }
    else
    {
        gotoxy(41,18);
        printf("The answer is WRONG!!");
        life=life-1;
        gotoxy(12,2);
        printf("Life = %d",life);
        if (life>0)
        {
            fflush(stdin);
            goto rid14;
        }
        else
        {
            gotoxy(41,18);
            printf("The answer is 'WINDOW'.");
            gotoxy(51,15);
            printf("You lost the Game!!");
            gotoxy(48,27);
            printf("Press any key continue...");
            getch();
            fflush(stdin);
            goto gameover;
        }
    }
}


rid015:
       system("cls");
{
    rid15:
    gotoxy(12,2);
    printf("Life = %d",life);
    gotoxy(100,2);
    printf("Score = %d",score);
    gotoxy(49,27);
    printf("Press 'HHHHHH' for Hint");
    gotoxy(42,5);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2  LEVEL 5  \xB2\xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
    gotoxy(47,7);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2  RIDDLE: 15  \xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(26,11);
    printf("RIDDLE:  If you drop me I'm sure to crack, but give me a smile ");
    gotoxy(35,12);
    printf("and I'll always smile back. What am I? (6 alphabets) ");
    gotoxy(56,15);
    printf("------");
    gotoxy(56,15);
    scanf("%c%c%c%c%c%c",&c1,&c2,&c3,&c4,&c5,&c6);
    if (((c1=='M')||(c1=='m'))&&((c2=='I')||(c2=='i'))&&((c3=='R')||(c3=='r'))&&((c4=='R')||(c4=='r'))&&((c5=='O')||(c5=='o'))&&((c6=='R')||(c6=='r')))
    {
        gotoxy(41,18);
        printf("The answer is CORRECT!!");
        score=score+5;
        gotoxy(100,2);
        printf("Score = %d",score);
        gotoxy(47,27);
        printf("Press any key to continue...");
        getch();
        fflush(stdin);
        goto lev5;
    }
    else if (((c1=='h')||(c1=='H'))&&((c2=='h')||(c2=='H'))&&((c3=='h')||(c3=='H'))&&((c4=='h')||(c4=='H'))&&((c5=='h')||(c5=='H'))&&((c6=='h')||(c6=='H')))
    {
      if(score>1)
      {
        gotoxy(57,22);
        printf("HINT :");
        gotoxy(52,24);
        printf("R I R Y R Z M O");
        score=score-2;
        gotoxy(100,2);
        printf("Score = %d",score);
        fflush(stdin);
        goto rid15;
        getch();}
        else
        {
         gotoxy(47,19);
         printf("Your point is less than 2.");
         gotoxy(47,20);
         printf("You can't use HINT.");
         fflush(stdin);
         goto rid15;
         getch();}
    }
    else
    {
        gotoxy(41,18);
        printf("The answer is WRONG!!");
        life=life-1;
        gotoxy(12,2);
        printf("Life = %d",life);
        if (life>0)
        {
            fflush(stdin);
            goto rid15;
        }
        else
        {
            gotoxy(41,18);
            printf("The answer is 'MIRROR'.");
            gotoxy(51,15);
            printf("You lost the Game!!");
            gotoxy(48,27);
            printf("Press any key continue...");
            getch();
            fflush(stdin);
            goto gameover;
        }
    }
}


rid016:
       system("cls");
{
    rid16:
    gotoxy(12,2);
    printf("Life = %d",life);
    gotoxy(100,2);
    printf("Score = %d",score);
    gotoxy(49,27);
    printf("Press 'HHHHHH' for Hint");
    gotoxy(42,5);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2  LEVEL 6  \xB2\xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
    gotoxy(47,7);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2  RIDDLE: 16  \xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(26,11);
    printf("RIDDLE:  The person who makes it has no need of it; the person  ");
    gotoxy(35,12);
    printf("who buys it has no use for it. The person who uses it can ");
    gotoxy(35,13);
    printf("neither see nor feel it. What is it? (6 alphabets)");
    gotoxy(56,16);
    printf("------");
    gotoxy(56,16);
    scanf("%c%c%c%c%c%c",&c1,&c2,&c3,&c4,&c5,&c6);
    if (((c1=='C')||(c1=='c'))&&((c2=='O')||(c2=='o'))&&((c3=='F')||(c3=='f'))&&((c4=='F')||(c4=='f'))&&((c5=='I')||(c5=='i'))&&((c6=='N')||(c6=='n')))
    {
        gotoxy(41,18);
        printf("The answer is CORRECT!!");
        score=score+5;
        gotoxy(100,2);
        printf("Score = %d",score);
        gotoxy(47,27);
        printf("Press any key to continue...");
        getch();
        fflush(stdin);
        goto rid017;
    }
    else if (((c1=='h')||(c1=='H'))&&((c2=='h')||(c2=='H'))&&((c3=='h')||(c3=='H'))&&((c4=='h')||(c4=='H'))&&((c5=='h')||(c5=='H'))&&((c6=='h')||(c6=='H')))
    {
      if(score>1)
      {
        gotoxy(57,22);
        printf("HINT :");
        gotoxy(52,24);
        printf("N F X C F X I O");
        score=score-2;
        gotoxy(100,2);
        printf("Score = %d",score);
        fflush(stdin);
        goto rid16;
        getch();}
        else
        {
         gotoxy(47,19);
         printf("Your point is less than 2.");
         gotoxy(47,20);
         printf("You can't use HINT.");
         fflush(stdin);
         goto rid16;
         getch();}
    }
    else
    {
        gotoxy(41,18);
        printf("The answer is WRONG!!");
        life=life-1;
        gotoxy(12,2);
        printf("Life = %d",life);
        if (life>0)
        {
            fflush(stdin);
            goto rid16;
        }
        else
        {
            gotoxy(41,18);
            printf("The answer is 'COFFIN'.");
            gotoxy(51,15);
            printf("You lost the Game!!");
            gotoxy(48,27);
            printf("Press any key continue...");
            getch();
            fflush(stdin);
            goto gameover;
        }
    }
}


rid017:
       system("cls");
{
    rid17:
    gotoxy(12,2);
    printf("Life = %d",life);
    gotoxy(100,2);
    printf("Score = %d",score);
    gotoxy(49,27);
    printf("Press 'HHHHHH' for Hint");
    gotoxy(42,5);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2  LEVEL 6  \xB2\xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
    gotoxy(47,7);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2  RIDDLE: 17  \xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(25,12);
    printf("RIDDLE: What begins with T, ends with T, and has T in it? (6 alphabets)");
    gotoxy(56,15);
    printf("------");
    gotoxy(56,15);
    scanf("%c%c%c%c%c%c",&c1,&c2,&c3,&c4,&c5,&c6);
    if (((c1=='T')||(c1=='t'))&&((c2=='E')||(c2=='e'))&&((c3=='A')||(c3=='a'))&&((c4=='P')||(c4=='p'))&&((c5=='O')||(c5=='o'))&&((c6=='T')||(c6=='t')))
    {
        gotoxy(41,18);
        printf("The answer is CORRECT!!");
        score=score+5;
        gotoxy(100,2);
        printf("Score = %d",score);
        gotoxy(47,27);
        printf("Press any key to continue...");
        getch();
        fflush(stdin);
        goto rid018;
    }
    else if (((c1=='h')||(c1=='H'))&&((c2=='h')||(c2=='H'))&&((c3=='h')||(c3=='H'))&&((c4=='h')||(c4=='H'))&&((c5=='h')||(c5=='H'))&&((c6=='h')||(c6=='H')))
    {
      if(score>1)
      {
        gotoxy(57,22);
        printf("HINT :");
        gotoxy(52,24);
        printf("T Q E P A Z O T");
        score=score-2;
        gotoxy(100,2);
        printf("Score = %d",score);
        fflush(stdin);
        goto rid17;
        getch();}
        else
        {
         gotoxy(47,19);
         printf("Your point is less than 2.");
         gotoxy(47,20);
         printf("You can't use HINT.");
         fflush(stdin);
         goto rid17;
         getch();}
    }
    else
    {
        gotoxy(41,18);
        printf("The answer is WRONG!!");
        life=life-1;
        gotoxy(12,2);
        printf("Life = %d",life);
        if (life>0)
        {
            fflush(stdin);
            goto rid17;
        }
        else
        {
            gotoxy(41,18);
            printf("The answer is 'TEAPOT'.");
            gotoxy(51,15);
            printf("You lost the Game!!");
            gotoxy(48,27);
            printf("Press any key continue...");
            getch();
            fflush(stdin);
            goto gameover;
        }
    }
}


rid018:
       system("cls");
{
    rid18:
    gotoxy(12,2);
    printf("Life = %d",life);
    gotoxy(100,2);
    printf("Score = %d",score);
    gotoxy(49,27);
    printf("Press 'HHHHHH' for Hint");
    gotoxy(42,5);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2  LEVEL 6  \xB2\xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
    gotoxy(47,7);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2  RIDDLE: 18  \xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(33,12);
    printf("RIDDLE: What has one eye, but can't see? (6 alphabets)");
    gotoxy(56,15);
    printf("------");
    gotoxy(56,15);
    scanf("%c%c%c%c%c%c",&c1,&c2,&c3,&c4,&c5,&c6);
    if (((c1=='N')||(c1=='n'))&&((c2=='E')||(c2=='e'))&&((c3=='E')||(c3=='e'))&&((c4=='D')||(c4=='d'))&&((c5=='L')||(c5=='l'))&&((c6=='E')||(c6=='e')))
    {
        gotoxy(41,18);
        printf("The answer is CORRECT!!");
        score=score+5;
        gotoxy(100,2);
        printf("Score = %d",score);
        gotoxy(47,27);
        printf("Press any key to continue...");
        getch();
        fflush(stdin);
        goto lev6;
    }
    else if (((c1=='h')||(c1=='H'))&&((c2=='h')||(c2=='H'))&&((c3=='h')||(c3=='H'))&&((c4=='h')||(c4=='H'))&&((c5=='h')||(c5=='H'))&&((c6=='h')||(c6=='H')))
    {
      if(score>1)
      {
        gotoxy(57,22);
        printf("HINT :");
        gotoxy(52,24);
        printf("E L N D Y E X E");
        score=score-2;
        gotoxy(100,2);
        printf("Score = %d",score);
        fflush(stdin);
        goto rid18;
        getch();}
        else
        {
         gotoxy(47,19);
         printf("Your point is less than 2.");
         gotoxy(47,20);
         printf("You can't use HINT.");
         fflush(stdin);
         goto rid18;
         getch();}
    }
    else
    {
        gotoxy(41,18);
        printf("The answer is WRONG!!");
        life=life-1;
        gotoxy(12,2);
        printf("Life = %d",life);
        if (life>0)
        {
            fflush(stdin);
            goto rid18;
        }
        else
        {
            gotoxy(41,18);
            printf("The answer is 'NEEDLE'.");
            gotoxy(51,15);
            printf("You lost the Game!!");
            gotoxy(48,27);
            printf("Press any key continue...");
            getch();
            fflush(stdin);
            goto gameover;
        }
    }
}


rid019:
       system("cls");
{
    rid19:
    gotoxy(12,2);
    printf("Life = %d",life);
    gotoxy(100,2);
    printf("Score = %d",score);
    gotoxy(49,27);
    printf("Press 'HHHHHHH' for Hint");
    gotoxy(42,5);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2  LEVEL 7  \xB2\xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
    gotoxy(47,7);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2  RIDDLE: 19  \xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(24,10);
    printf("RIDDLE: With pointed fangs I sit and wait; with piercing force I crunch");
    gotoxy(32,11);
    printf("out fate; grabbing victims, proclaiming might; physically");
    gotoxy(32,12);
    printf("joining with a single bite. What am I? (7 alphabets)");
    gotoxy(56,15);
    printf("-------");
    gotoxy(56,15);
    scanf("%c%c%c%c%c%c%c",&c1,&c2,&c3,&c4,&c5,&c6,&c7);
    if (((c1=='S')||(c1=='s'))&&((c2=='T')||(c2=='t'))&&((c3=='A')||(c3=='a'))&&((c4=='P')||(c4=='p'))&&((c5=='L')||(c5=='l'))&&((c6=='E')||(c6=='e'))&&((c7=='R')||(c7=='r')))
    {
        gotoxy(41,18);
        printf("The answer is CORRECT!!");
        score=score+5;
        gotoxy(100,2);
        printf("Score = %d",score);
        gotoxy(47,27);
        printf("Press any key to continue...");
        getch();
        fflush(stdin);
        goto rid020;
    }
    else if (((c1=='h')||(c1=='H'))&&((c2=='h')||(c2=='H'))&&((c3=='h')||(c3=='H'))&&((c4=='h')||(c4=='H'))&&((c5=='h')||(c5=='H'))&&((c6=='h')||(c6=='H'))&&((c7=='h')||(c7=='H')))
    {
      if(score>1)
      {
        gotoxy(57,22);
        printf("HINT :");
        gotoxy(51,24);
        printf("L A R S P T E Q Y");
        score=score-2;
        gotoxy(100,2);
        printf("Score = %d",score);
        fflush(stdin);
        goto rid19;
        getch();}
        else
        {
         gotoxy(47,19);
         printf("Your point is less than 2.");
         gotoxy(47,20);
         printf("You can't use HINT.");
         fflush(stdin);
         goto rid19;
         getch();}
    }
    else
    {
        gotoxy(41,18);
        printf("The answer is WRONG!!");
        life=life-1;
        gotoxy(12,2);
        printf("Life = %d",life);
        if (life>0)
        {
            fflush(stdin);
            goto rid19;
        }
        else
        {
            gotoxy(41,18);
            printf("The answer is 'STAPLER'.");
            gotoxy(51,15);
            printf("You lost the Game!!");
            gotoxy(48,27);
            printf("Press any key continue...");
            getch();
            fflush(stdin);
            goto gameover;
        }
    }
}


rid020:
       system("cls");
{
    rid20:
    gotoxy(12,2);
    printf("Life = %d",life);
    gotoxy(100,2);
    printf("Score = %d",score);
    gotoxy(49,27);
    printf("Press 'HHHHHHH' for Hint");
    gotoxy(42,5);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2  LEVEL 7  \xB2\xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
    gotoxy(47,7);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2  RIDDLE: 20  \xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(24,12);
    printf("RIDDLE: What is so fragile that saying it's name breaks it? (7 alphabets)");
    gotoxy(56,15);
    printf("-------");
    gotoxy(56,15);
    scanf("%c%c%c%c%c%c%c",&c1,&c2,&c3,&c4,&c5,&c6,&c7);
    if (((c1=='S')||(c1=='s'))&&((c2=='I')||(c2=='i'))&&((c3=='L')||(c3=='l'))&&((c4=='E')||(c4=='e'))&&((c5=='N')||(c5=='n'))&&((c6=='C')||(c6=='c'))&&((c7=='E')||(c7=='e')))
    {
        gotoxy(41,18);
        printf("The answer is CORRECT!!");
        score=score+5;
        gotoxy(100,2);
        printf("Score = %d",score);
        gotoxy(47,27);
        printf("Press any key to continue...");
        getch();
        fflush(stdin);
        goto rid021;
    }
    else if (((c1=='h')||(c1=='H'))&&((c2=='h')||(c2=='H'))&&((c3=='h')||(c3=='H'))&&((c4=='h')||(c4=='H'))&&((c5=='h')||(c5=='H'))&&((c6=='h')||(c6=='H'))&&((c7=='h')||(c7=='H')))
    {
      if(score>1)
      {
        gotoxy(58,22);
        printf("HINT :");
        gotoxy(52,24);
        printf("L I Z E X S C N E");
        score=score-2;
        gotoxy(100,2);
        printf("Score = %d",score);
        fflush(stdin);
        goto rid20;
        getch();}
        else
        {
         gotoxy(47,19);
         printf("Your point is less than 2.");
         gotoxy(47,20);
         printf("You can't use HINT.");
         fflush(stdin);
         goto rid20;
         getch();}
    }
    else
    {
        gotoxy(41,18);
        printf("The answer is WRONG!!");
        life=life-1;
        gotoxy(12,2);
        printf("Life = %d",life);
        if (life>0)
        {
            fflush(stdin);
            goto rid20;
        }
        else
        {
            gotoxy(41,18);
            printf("The answer is 'SILENCE'.");
            gotoxy(51,15);
            printf("You lost the Game!!");
            gotoxy(48,27);
            printf("Press any key continue...");
            getch();
            fflush(stdin);
            goto gameover;
        }
    }
}


rid021:
       system("cls");
{
    rid21:
    gotoxy(12,2);
    printf("Life = %d",life);
    gotoxy(100,2);
    printf("Score = %d",score);
    gotoxy(49,27);
    printf("Press 'HHHHHHH' for Hint");
    gotoxy(42,5);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2  LEVEL 7  \xB2\xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
    gotoxy(47,7);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2  RIDDLE: 21  \xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(32,12);
    printf("RIDDLE: What building has the most stories? (7 alphabets)");
    gotoxy(56,15);
    printf("-------");
    gotoxy(56,15);
    scanf("%c%c%c%c%c%c%c",&c1,&c2,&c3,&c4,&c5,&c6,&c7);
    if (((c1=='L')||(c1=='l'))&&((c2=='I')||(c2=='i'))&&((c3=='B')||(c3=='b'))&&((c4=='R')||(c4=='r'))&&((c5=='A')||(c5=='a'))&&((c6=='R')||(c6=='r'))&&((c7=='Y')||(c7=='y')))
    {
        gotoxy(41,18);
        printf("The answer is CORRECT!!");
        score=score+5;
        gotoxy(100,2);
        printf("Score = %d",score);
        gotoxy(47,27);
        printf("Press any key to continue...");
        getch();
        fflush(stdin);
        goto lev7;
    }
    else if (((c1=='h')||(c1=='H'))&&((c2=='h')||(c2=='H'))&&((c3=='h')||(c3=='H'))&&((c4=='h')||(c4=='H'))&&((c5=='h')||(c5=='H'))&&((c6=='h')||(c6=='H'))&&((c7=='h')||(c7=='H')))
    {
      if(score>1)
      {
        gotoxy(58,22);
        printf("HINT :");
        gotoxy(52,24);
        printf("Q R L T B R I A Y");
        score=score-2;
        gotoxy(100,2);
        printf("Score = %d",score);
        fflush(stdin);
        goto rid21;
        getch();}
        else
        {
         gotoxy(47,19);
         printf("Your point is less than 2.");
         gotoxy(47,20);
         printf("You can't use HINT.");
         fflush(stdin);
         goto rid21;
         getch();}
    }
    else
    {
        gotoxy(41,18);
        printf("The answer is WRONG!!");
        life=life-1;
        gotoxy(12,2);
        printf("Life = %d",life);
        if (life>0)
        {
            fflush(stdin);
            goto rid21;
        }
        else
        {
            gotoxy(41,18);
            printf("The answer is 'LIBRARY'.");
            gotoxy(51,15);
            printf("You lost the Game!!");
            gotoxy(48,27);
            printf("Press any key continue...");
            getch();
            fflush(stdin);
            goto gameover;
        }
    }
}


rid022:
       system("cls");
{
    rid22:
    gotoxy(12,2);
    printf("Life = %d",life);
    gotoxy(100,2);
    printf("Score = %d",score);
    gotoxy(48,27);
    printf("Press 'HHHHHHHH' for Hint");
    gotoxy(42,5);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2  LEVEL 8  \xB2\xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
    gotoxy(47,7);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2  RIDDLE: 22  \xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(23,12);
    printf("RIDDLE:  What begins with an 'e' and only contains one letter? (8 alphabets)");
    gotoxy(56,15);
    printf("--------");
    gotoxy(56,15);
    scanf("%c%c%c%c%c%c%c%c",&c1,&c2,&c3,&c4,&c5,&c6,&c7,&c8);
    if (((c1=='E')||(c1=='e'))&&((c2=='N')||(c2=='n'))&&((c3=='V')||(c3=='v'))&&((c4=='E')||(c4=='e'))&&((c5=='L')||(c5=='l'))&&((c6=='O')||(c6=='o'))&&((c7=='P')||(c7=='p'))&&((c8=='E')||(c8=='e')))
    {
        gotoxy(41,18);
        printf("The answer is CORRECT!!");
        score=score+5;
        gotoxy(100,2);
        printf("Score = %d",score);
        gotoxy(47,27);
        printf("Press any key to continue...");
        getch();
        fflush(stdin);
        goto rid023;
    }
    else if (((c1=='h')||(c1=='H'))&&((c2=='h')||(c2=='H'))&&((c3=='h')||(c3=='H'))&&((c4=='h')||(c4=='H'))&&((c5=='h')||(c5=='H'))&&((c6=='h')||(c6=='H'))&&((c7=='h')||(c7=='H'))&&((c8=='h')||(c8=='H')))
    {
      if(score>1)
      {
        gotoxy(58,22);
        printf("HINT :");
        gotoxy(51,24);
        printf("V E E P X N O Q L E ");
        score=score-2;
        gotoxy(100,2);
        printf("Score = %d",score);
        fflush(stdin);
        goto rid22;
        getch();}
        else
        {
         gotoxy(47,19);
         printf("Your point is less than 2.");
         gotoxy(47,20);
         printf("You can't use HINT.");
         fflush(stdin);
         goto rid22;
         getch();}
    }
    else
    {
        gotoxy(41,18);
        printf("The answer is WRONG!!");
        life=life-1;
        gotoxy(12,2);
        printf("Life = %d",life);
        if (life>0)
        {
            fflush(stdin);
            goto rid22;
        }
        else
        {
            gotoxy(41,18);
            printf("The answer is 'ENVELOPE'.");
            gotoxy(51,15);
            printf("You lost the Game!!");
            gotoxy(48,27);
            printf("Press any key continue...");
            getch();
            fflush(stdin);
            goto gameover;
        }
    }
}


rid023:
       system("cls");
{
    rid23:
    gotoxy(12,2);
    printf("Life = %d",life);
    gotoxy(100,2);
    printf("Score = %d",score);
    gotoxy(48,27);
    printf("Press 'HHHHHHHH' for Hint");
    gotoxy(42,5);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2  LEVEL 8  \xB2\xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
    gotoxy(47,7);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2  RIDDLE: 23  \xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(22,12);
    printf("RIDDLE: The more of this there is, the less you see. What is it? (7 alphabets)");
    gotoxy(56,15);
    printf("--------");
    gotoxy(56,15);
    scanf("%c%c%c%c%c%c%c%c",&c1,&c2,&c3,&c4,&c5,&c6,&c7,&c8);
    if (((c1=='D')||(c1=='d'))&&((c2=='A')||(c2=='a'))&&((c3=='R')||(c3=='r'))&&((c4=='K')||(c4=='k'))&&((c5=='N')||(c5=='n'))&&((c6=='E')||(c6=='e'))&&((c7=='S')||(c7=='s'))&&((c8=='S')||(c8=='s')))
    {
        gotoxy(41,18);
        printf("The answer is CORRECT!!");
        score=score+5;
        gotoxy(100,2);
        printf("Score = %d",score);
        gotoxy(47,27);
        printf("Press any key to continue...");
        getch();
        fflush(stdin);
        goto rid024;
    }
    else if (((c1=='h')||(c1=='H'))&&((c2=='h')||(c2=='H'))&&((c3=='h')||(c3=='H'))&&((c4=='h')||(c4=='H'))&&((c5=='h')||(c5=='H'))&&((c6=='h')||(c6=='H'))&&((c7=='h')||(c7=='H'))&&((c8=='h')||(c8=='H')))
    {
      if(score>1)
      {
        gotoxy(58,22);
        printf("HINT :");
        gotoxy(51,24);
        printf("E S D S X N A W K R ");
        score=score-2;
        gotoxy(100,2);
        printf("Score = %d",score);
        fflush(stdin);
        goto rid23;
        getch();}
        else
        {
         gotoxy(47,19);
         printf("Your point is less than 2.");
         gotoxy(47,20);
         printf("You can't use HINT.");
         fflush(stdin);
         goto rid23;
         getch();}
    }
    else
    {
        gotoxy(41,18);
        printf("The answer is WRONG!!");
        life=life-1;
        gotoxy(12,2);
        printf("Life = %d",life);
        if (life>0)
        {
            fflush(stdin);
            goto rid23;
        }
        else
        {
            gotoxy(41,18);
            printf("The answer is 'DARKNESS'.");
            gotoxy(51,15);
            printf("You lost the Game!!");
            gotoxy(48,27);
            printf("Press any key continue...");
            getch();
            fflush(stdin);
            goto gameover;
        }
    }
}


rid024:
       system("cls");
{
    rid24:
    gotoxy(12,2);
    printf("Life = %d",life);
    gotoxy(100,2);
    printf("Score = %d",score);
    gotoxy(48,27);
    printf("Press 'HHHHHHHH' for Hint");
    gotoxy(42,5);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2  LEVEL 8  \xB2\xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
    gotoxy(47,7);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2  RIDDLE: 24  \xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(23,10);
    printf("RIDDLE:  Poke your fingers in my eyes and I will open wide my jaws.");
    gotoxy(32,11);
    printf("Linen cloth, quills or paper, all will split before my might. ");
    gotoxy(32,12);
    printf("What am I? (8 alphabets)");
    gotoxy(56,15);
    printf("--------");
    gotoxy(56,15);
    scanf("%c%c%c%c%c%c%c%c",&c1,&c2,&c3,&c4,&c5,&c6,&c7,&c8);
    if (((c1=='S')||(c1=='s'))&&((c2=='C')||(c2=='c'))&&((c3=='I')||(c3=='i'))&&((c4=='S')||(c4=='s'))&&((c5=='S')||(c5=='s'))&&((c6=='O')||(c6=='o'))&&((c7=='R')||(c7=='r'))&&((c8=='S')||(c8=='s')))
    {
        gotoxy(41,18);
        printf("The answer is CORRECT!!");
        score=score+5;
        gotoxy(100,2);
        printf("Score = %d",score);
        gotoxy(47,27);
        printf("Press any key to continue...");
        getch();
        fflush(stdin);
        goto lev8;
    }
    else if (((c1=='h')||(c1=='H'))&&((c2=='h')||(c2=='H'))&&((c3=='h')||(c3=='H'))&&((c4=='h')||(c4=='H'))&&((c5=='h')||(c5=='H'))&&((c6=='h')||(c6=='H'))&&((c7=='h')||(c7=='H'))&&((c8=='h')||(c8=='H')))
    {
      if(score>1)
      {
        gotoxy(58,22);
        printf("HINT :");
        gotoxy(51,24);
        printf("S I S S R Q C O S Y ");
        score=score-2;
        gotoxy(100,2);
        printf("Score = %d",score);
        fflush(stdin);
        goto rid24;
        getch();}
        else
        {
         gotoxy(47,19);
         printf("Your point is less than 2.");
         gotoxy(47,20);
         printf("You can't use HINT.");
         fflush(stdin);
         goto rid24;
         getch();}
    }
    else
    {
        gotoxy(41,18);
        printf("The answer is WRONG!!");
        life=life-1;
        gotoxy(12,2);
        printf("Life = %d",life);
        if (life>0)
        {
            fflush(stdin);
            goto rid24;
        }
        else
        {
            gotoxy(41,18);
            printf("The answer is 'SCISSORS'.");
            gotoxy(51,15);
            printf("You lost the Game!!");
            gotoxy(48,27);
            printf("Press any key continue...");
            getch();
            fflush(stdin);
            goto gameover;
        }
    }
}


rid025:
       system("cls");
{
    rid25:
    gotoxy(12,2);
    printf("Life = %d",life);
    gotoxy(100,2);
    printf("Score = %d",score);
    gotoxy(47,27);
    printf("Press 'HHHHHHHHH' for Hint");
    gotoxy(42,5);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2  LEVEL 9  \xB2\xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
    gotoxy(47,7);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2  RIDDLE: 25  \xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(28,12);
    printf("RIDDLE:  What goes up and down but doesn't move? (9 alphabets)");
    gotoxy(55,15);
    printf("---------");
    gotoxy(55,15);
    scanf("%c%c%c%c%c%c%c%c%c",&c1,&c2,&c3,&c4,&c5,&c6,&c7,&c8,&c9);
    if (((c1=='S')||(c1=='s'))&&((c2=='T')||(c2=='t'))&&((c3=='A')||(c3=='a'))&&((c4=='I')||(c4=='i'))&&((c5=='R')||(c5=='r'))&&((c6=='C')||(c6=='c'))&&((c7=='A')||(c7=='a'))&&((c8=='S')||(c8=='s'))&&((c9=='E')||(c9=='e')))
    {
        gotoxy(41,18);
        printf("The answer is CORRECT!!");
        score=score+5;
        gotoxy(100,2);
        printf("Score = %d",score);
        gotoxy(47,27);
        printf("Press any key to continue...");
        getch();
        fflush(stdin);
        goto rid026;
    }
    else if (((c1=='h')||(c1=='H'))&&((c2=='h')||(c2=='H'))&&((c3=='h')||(c3=='H'))&&((c4=='h')||(c4=='H'))&&((c5=='h')||(c5=='H'))&&((c6=='h')||(c6=='H'))&&((c7=='h')||(c7=='H'))&&((c8=='h')||(c8=='H'))&&((c9=='h')||(c9=='H')))
    {
      if(score>1)
      {
        gotoxy(57,22);
        printf("HINT :");
        gotoxy(49,24);
        printf("A T Z S R C I X E S A ");
        score=score-2;
        gotoxy(100,2);
        printf("Score = %d",score);
        fflush(stdin);
        goto rid25;
        getch();}
        else
        {
         gotoxy(47,19);
         printf("Your point is less than 2.");
         gotoxy(47,20);
         printf("You can't use HINT.");
         fflush(stdin);
         goto rid25;
         getch();}
    }
    else
    {
        gotoxy(41,18);
        printf("The answer is WRONG!!");
        life=life-1;
        gotoxy(12,2);
        printf("Life = %d",life);
        if (life>0)
        {
            fflush(stdin);
            goto rid25;
        }
        else
        {
            gotoxy(41,18);
            printf("The answer is 'STAIRCASE'.");
            gotoxy(51,15);
            printf("You lost the Game!!");
            gotoxy(48,27);
            printf("Press any key continue...");
            getch();
            fflush(stdin);
            goto gameover;
        }
    }
}


rid026:
       system("cls");
{
    rid26:
    gotoxy(12,2);
    printf("Life = %d",life);
    gotoxy(100,2);
    printf("Score = %d",score);
    gotoxy(47,27);
    printf("Press 'HHHHHHHHH' for Hint");
    gotoxy(42,5);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2  LEVEL 9  \xB2\xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
    gotoxy(47,7);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2  RIDDLE: 26  \xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(32,11);
    printf("RIDDLE:  Two bodies in one, the longer I stand, the ");
    gotoxy(41,12);
    printf("faster I run. Who am I? (9 alphabets)");
    gotoxy(55,15);
    printf("---------");
    gotoxy(55,15);
    scanf("%c%c%c%c%c%c%c%c%c",&c1,&c2,&c3,&c4,&c5,&c6,&c7,&c8,&c9);
    if (((c1=='H')||(c1=='h'))&&((c2=='O')||(c2=='o'))&&((c3=='U')||(c3=='u'))&&((c4=='R')||(c4=='r'))&&((c5=='G')||(c5=='g'))&&((c6=='L')||(c6=='l'))&&((c7=='A')||(c7=='a'))&&((c8=='S')||(c8=='s'))&&((c9=='S')||(c9=='s')))
    {
        gotoxy(41,18);
        printf("The answer is CORRECT!!");
        score=score+5;
        gotoxy(100,2);
        printf("Score = %d",score);
        gotoxy(47,27);
        printf("Press any key to continue...");
        getch();
        fflush(stdin);
        goto rid027;
    }
    else if (((c1=='h')||(c1=='H'))&&((c2=='h')||(c2=='H'))&&((c3=='h')||(c3=='H'))&&((c4=='h')||(c4=='H'))&&((c5=='h')||(c5=='H'))&&((c6=='h')||(c6=='H'))&&((c7=='h')||(c7=='H'))&&((c8=='h')||(c8=='H'))&&((c9=='h')||(c9=='H')))
    {
      if(score>1)
      {
        gotoxy(57,22);
        printf("HINT :");
        gotoxy(49,24);
        printf("R O U L H X A X S S G ");
        score=score-2;
        gotoxy(100,2);
        printf("Score = %d",score);
        fflush(stdin);
        goto rid26;
        getch();}
        else
        {
         gotoxy(47,19);
         printf("Your point is less than 2.");
         gotoxy(47,20);
         printf("You can't use HINT.");
         fflush(stdin);
         goto rid26;
         getch();}
    }
    else
    {
        gotoxy(41,18);
        printf("The answer is WRONG!!");
        life=life-1;
        gotoxy(12,2);
        printf("Life = %d",life);
        if (life>0)
        {
            fflush(stdin);
            goto rid26;
        }
        else
        {
            gotoxy(41,18);
            printf("The answer is 'HOURGLASS'.");
            gotoxy(51,15);
            printf("You lost the Game!!");
            gotoxy(48,27);
            printf("Press any key continue...");
            getch();
            fflush(stdin);
            goto gameover;
        }
    }
}


rid027:
       system("cls");
{
    rid27:
    gotoxy(12,2);
    printf("Life = %d",life);
    gotoxy(100,2);
    printf("Score = %d",score);
    gotoxy(47,27);
    printf("Press 'HHHHHHHHH' for Hint");
    gotoxy(42,5);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2  LEVEL 9  \xB2\xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
    gotoxy(47,7);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2  RIDDLE: 27  \xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(18,11);
    printf("RIDDLE:  In the form of fork or sheet, I hit the ground and if you, wait a heartbeat,");
    gotoxy(27,12);
    printf("you can hear my roaring sound. Who am I? (9 alphabets)");
    gotoxy(55,15);
    printf("---------");
    gotoxy(55,15);
    scanf("%c%c%c%c%c%c%c%c%c",&c1,&c2,&c3,&c4,&c5,&c6,&c7,&c8,&c9);
    if (((c1=='L')||(c1=='l'))&&((c2=='I')||(c2=='i'))&&((c3=='G')||(c3=='g'))&&((c4=='H')||(c4=='h'))&&((c5=='T')||(c5=='t'))&&((c6=='N')||(c6=='n'))&&((c7=='I')||(c7=='i'))&&((c8=='N')||(c8=='n'))&&((c9=='G')||(c9=='g')))
    {
        gotoxy(41,18);
        printf("The answer is CORRECT!!");
        score=score+5;
        gotoxy(100,2);
        printf("Score = %d",score);
        gotoxy(47,27);
        printf("Press any key to continue...");
        getch();
        fflush(stdin);
        goto lev9;
    }
    else if (((c1=='h')||(c1=='H'))&&((c2=='h')||(c2=='H'))&&((c3=='h')||(c3=='H'))&&((c4=='h')||(c4=='H'))&&((c5=='h')||(c5=='H'))&&((c6=='h')||(c6=='H'))&&((c7=='h')||(c7=='H'))&&((c8=='h')||(c8=='H'))&&((c9=='h')||(c9=='H')))
    {
      if(score>1)
      {
        gotoxy(57,22);
        printf("HINT :");
        gotoxy(49,24);
        printf("I X L G H N T Z N I G ");
        score=score-2;
        gotoxy(100,2);
        printf("Score = %d",score);
        fflush(stdin);
        goto rid27;
        getch();}
        else
        {
         gotoxy(47,19);
         printf("Your point is less than 2.");
         gotoxy(47,20);
         printf("You can't use HINT.");
         fflush(stdin);
         goto rid27;
         getch();}
    }
    else
    {
        gotoxy(41,18);
        printf("The answer is WRONG!!");
        life=life-1;
        gotoxy(12,2);
        printf("Life = %d",life);
        if (life>0)
        {
            fflush(stdin);
            goto rid27;
        }
        else
        {
            gotoxy(41,18);
            printf("The answer is 'LIGHTNING'.");
            gotoxy(51,15);
            printf("You lost the Game!!");
            gotoxy(48,27);
            printf("Press any key continue...");
            getch();
            fflush(stdin);
            goto gameover;
        }
    }
}


rid028:
       system("cls");
{
    rid28:
    gotoxy(12,2);
    printf("Life = %d",life);
    gotoxy(100,2);
    printf("Score = %d",score);
    gotoxy(47,27);
    printf("Press 'HHHHHHHHH' for Hint");
    gotoxy(42,5);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2  LEVEL 10  \xB2\xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
    gotoxy(47,7);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2  RIDDLE: 28  \xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(30,12);
    printf("RIDDLE:  What has many rings, but no fingers? (9 alphabets)");
    gotoxy(55,15);
    printf("---------");
    gotoxy(55,15);
    scanf("%c%c%c%c%c%c%c%c%c",&c1,&c2,&c3,&c4,&c5,&c6,&c7,&c8,&c9);
    if (((c1=='T')||(c1=='t'))&&((c2=='E')||(c2=='e'))&&((c3=='L')||(c3=='l'))&&((c4=='E')||(c4=='e'))&&((c5=='P')||(c5=='p'))&&((c6=='H')||(c6=='h'))&&((c7=='O')||(c7=='o'))&&((c8=='N')||(c8=='n'))&&((c9=='E')||(c9=='e')))
    {
        gotoxy(41,18);
        printf("The answer is CORRECT!!");
        score=score+5;
        gotoxy(100,2);
        printf("Score = %d",score);
        gotoxy(47,27);
        printf("Press any key to continue...");
        getch();
        fflush(stdin);
        goto rid029;
    }
    else if (((c1=='h')||(c1=='H'))&&((c2=='h')||(c2=='H'))&&((c3=='h')||(c3=='H'))&&((c4=='h')||(c4=='H'))&&((c5=='h')||(c5=='H'))&&((c6=='h')||(c6=='H'))&&((c7=='h')||(c7=='H'))&&((c8=='h')||(c8=='H'))&&((c9=='h')||(c9=='H')))
    {
      if(score>1)
      {
        gotoxy(57,22);
        printf("HINT :");
        gotoxy(49,24);
        printf("P E T O L E Q H N E Z ");
        score=score-2;
        gotoxy(100,2);
        printf("Score = %d",score);
        fflush(stdin);
        goto rid28;
        getch();}
        else
        {
         gotoxy(47,19);
         printf("Your point is less than 2.");
         gotoxy(47,20);
         printf("You can't use HINT.");
         fflush(stdin);
         goto rid28;
         getch();}
    }
    else
    {
        gotoxy(41,18);
        printf("The answer is WRONG!!");
        life=life-1;
        gotoxy(12,2);
        printf("Life = %d",life);
        if (life>0)
        {
            fflush(stdin);
            goto rid28;
        }
        else
        {
            gotoxy(41,18);
            printf("The answer is 'TELEPHONE'.");
            gotoxy(51,15);
            printf("You lost the Game!!");
            gotoxy(48,27);
            printf("Press any key continue...");
            getch();
            fflush(stdin);
            goto gameover;
        }
    }
}


rid029:
       system("cls");
{
    rid29:
    gotoxy(12,2);
    printf("Life = %d",life);
    gotoxy(100,2);
    printf("Score = %d",score);
    gotoxy(47,27);
    printf("Press 'HHHHHHHHH' for Hint");
    gotoxy(42,5);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2  LEVEL 10  \xB2\xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
    gotoxy(47,7);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2  RIDDLE: 29  \xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(20,11);
    printf("RIDDLE:  Many times you need me. The more and more you take me further, the more ");
    gotoxy(29,12);
    printf("and more you leave me behind. What am I? (9 alphabets)");
    gotoxy(55,15);
    printf("---------");
    gotoxy(55,15);
    scanf("%c%c%c%c%c%c%c%c%c",&c1,&c2,&c3,&c4,&c5,&c6,&c7,&c8,&c9);
    if (((c1=='F')||(c1=='f'))&&((c2=='O')||(c2=='o'))&&((c3=='O')||(c3=='o'))&&((c4=='T')||(c4=='t'))&&((c5=='S')||(c5=='s'))&&((c6=='T')||(c6=='t'))&&((c7=='E')||(c7=='e'))&&((c8=='P')||(c8=='p'))&&((c9=='S')||(c9=='s')))
    {
        gotoxy(41,18);
        printf("The answer is CORRECT!!");
        score=score+5;
        gotoxy(100,2);
        printf("Score = %d",score);
        gotoxy(47,27);
        printf("Press any key to continue...");
        getch();
        fflush(stdin);
        goto rid030;
    }
    else if (((c1=='h')||(c1=='H'))&&((c2=='h')||(c2=='H'))&&((c3=='h')||(c3=='H'))&&((c4=='h')||(c4=='H'))&&((c5=='h')||(c5=='H'))&&((c6=='h')||(c6=='H'))&&((c7=='h')||(c7=='H'))&&((c8=='h')||(c8=='H'))&&((c9=='h')||(c9=='H')))
    {
      if(score>1)
      {
        gotoxy(57,22);
        printf("HINT :");
        gotoxy(49,24);
        printf("T O O F X T P S E Z E ");
        score=score-2;
        gotoxy(100,2);
        printf("Score = %d",score);
        fflush(stdin);
        goto rid29;
        getch();}
        else
        {
         gotoxy(47,19);
         printf("Your point is less than 2.");
         gotoxy(47,20);
         printf("You can't use HINT.");
         fflush(stdin);
         goto rid29;
         getch();}
    }
    else
    {
        gotoxy(41,18);
        printf("The answer is WRONG!!");
        life=life-1;
        gotoxy(12,2);
        printf("Life = %d",life);
        if (life>0)
        {
            fflush(stdin);
            goto rid29;
        }
        else
        {
            gotoxy(41,18);
            printf("The answer is 'FOOTSTEPS'.");
            gotoxy(51,15);
            printf("You lost the Game!!");
            gotoxy(48,27);
            printf("Press any key continue...");
            getch();
            fflush(stdin);
            goto gameover;
        }
    }
}


rid030:
       system("cls");
{
    rid30:
    gotoxy(12,2);
    printf("Life = %d",life);
    gotoxy(100,2);
    printf("Score = %d",score);
    gotoxy(7,15);
    printf("MORSE CODE:");
    gotoxy(3,17);
    printf("A .-    B -...  C -.-.");
    gotoxy(3,18);
    printf("D -..   E .     F ..-.");
    gotoxy(3,19);
    printf("G --.   H ....  I ..");
    gotoxy(3,20);
    printf("J .---  K -.-   L .-..");
    gotoxy(3,21);
    printf("M --    N -.    O ---");
    gotoxy(3,22);
    printf("P .--.  Q --.-  R .-.");
    gotoxy(3,23);
    printf("S ...   T -     U ..-");
    gotoxy(3,24);
    printf("V ...-  W .--   X -..-");
    gotoxy(3,25);
    printf("Y -.--  Z --..");
    gotoxy(88,17);
    printf("Note: You have to decode");
    gotoxy(94,18);
    printf("the Morse Code manually");
    gotoxy(94,19);
    printf("in order to solve the ");
    gotoxy(94,20);
    printf("riddle. Here '/' has");
    gotoxy(94,21);
    printf("been used to indicate");
    gotoxy(94,22);
    printf("space between two words.");
    gotoxy(94,23);
    printf("Input the answer in  ");
    gotoxy(94,24);
    printf("English alphabets.");
    gotoxy(51,27);
    printf("Press 'HHHH' for Hint");
    gotoxy(42,4);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2  LEVEL 10  \xB2\xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
    gotoxy(47,6);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2  RIDDLE: 30  \xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(17,10);
    printf("RIDDLE:  .--  ....  .-  - / -.-.  .-  -. / -.--  --- ..- / -.-.  .-  -  -.-.  .... /");
    gotoxy(26,11);
    printf("-...  ..-  - / -.  --- - / -  ....  .-.  ---  .--  ? (9 alphabets)  ");
    gotoxy(58,14);
    printf("----");
    gotoxy(58,14);
    scanf("%c%c%c%c",&c1,&c2,&c3,&c4);
    if (((c1=='C')||(c1=='c'))&&((c2=='O')||(c2=='o'))&&((c3=='L')||(c3=='l'))&&((c4=='D')||(c4=='d')))
    {
        gotoxy(41,18);
        printf("The answer is CORRECT!!");
        score=score+5;
        gotoxy(100,2);
        printf("Score = %d",score);
        gotoxy(47,27);
        printf("Press any key to continue...");
        getch();
        fflush(stdin);
        goto win;
    }
    else if (((c1=='h')||(c1=='H'))&&((c2=='h')||(c2=='H'))&&((c3=='h')||(c3=='H'))&&((c4=='h')||(c4=='H')))
    {
      if(score>1)
      {
        gotoxy(58,22);
        printf("HINT :");
        gotoxy(45,24);
        printf("---  --.-  .-..  -.-.  -..-  -.. ");
        score=score-2;
        gotoxy(100,2);
        printf("Score = %d",score);
        fflush(stdin);
        goto rid30;
        getch();}
        else
        {
         gotoxy(47,19);
         printf("Your point is less than 2.");
         gotoxy(47,20);
         printf("You can't use HINT.");
         fflush(stdin);
         goto rid30;
         getch();}
    }
    else
    {
        gotoxy(41,17);
        printf("The answer is WRONG!!");
        life=life-1;
        gotoxy(12,2);
        printf("Life = %d",life);
        if (life>0)
        {
            fflush(stdin);
            goto rid30;
        }
        else
        {
            gotoxy(41,17);
            printf("The answer is 'COLD'.");
            gotoxy(51,14);
            printf("You lost the Game!!");
            gotoxy(48,27);
            printf("Press any key continue...");
            getch();
            fflush(stdin);
            goto gameover;
        }
    }
}


lev1:
    system("cls");
    gotoxy(26,11);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
    gotoxy(26,12);
    printf("\xDB\xDB                                                                \xDB\xDB");
    gotoxy(26,13);
    printf("\xDB\xDB                    You completed LEVEL 1 !!                    \xDB\xDB");
    gotoxy(26,14);
    printf("\xDB\xDB                                                                \xDB\xDB");
    gotoxy(26,15);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
    gotoxy(47,27);
    printf("Press any key to continue...");
    getch();
    fflush(stdin);
    goto rid04;

lev2:
    system("cls");
    gotoxy(26,11);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
    gotoxy(26,12);
    printf("\xDB\xDB                                                                \xDB\xDB");
    gotoxy(26,13);
    printf("\xDB\xDB                    You completed LEVEL 2 !!                    \xDB\xDB");
    gotoxy(26,14);
    printf("\xDB\xDB                                                                \xDB\xDB");
    gotoxy(26,15);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
    gotoxy(47,27);
    printf("Press any key to continue...");
    getch();
    fflush(stdin);
    goto rid07;

lev3:
    system("cls");
    gotoxy(26,11);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
    gotoxy(26,12);
    printf("\xDB\xDB                                                                \xDB\xDB");
    gotoxy(26,13);
    printf("\xDB\xDB                    You completed LEVEL 3 !!                    \xDB\xDB");
    gotoxy(26,14);
    printf("\xDB\xDB                                                                \xDB\xDB");
    gotoxy(26,15);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
    gotoxy(47,27);
    printf("Press any key to continue...");
    getch();
    fflush(stdin);
    goto rid010;

lev4:
    system("cls");
    gotoxy(26,11);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
    gotoxy(26,12);
    printf("\xDB\xDB                                                                \xDB\xDB");
    gotoxy(26,13);
    printf("\xDB\xDB                    You completed LEVEL 4 !!                    \xDB\xDB");
    gotoxy(26,14);
    printf("\xDB\xDB                                                                \xDB\xDB");
    gotoxy(26,15);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
    gotoxy(47,27);
    printf("Press any key to continue...");
    getch();
    fflush(stdin);
    goto rid013;

lev5:
    system("cls");
    gotoxy(26,11);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
    gotoxy(26,12);
    printf("\xDB\xDB                                                                \xDB\xDB");
    gotoxy(26,13);
    printf("\xDB\xDB                    You completed LEVEL 5 !!                    \xDB\xDB");
    gotoxy(26,14);
    printf("\xDB\xDB                                                                \xDB\xDB");
    gotoxy(26,15);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
    gotoxy(47,27);
    printf("Press any key to continue...");
    getch();
    fflush(stdin);
    goto rid016;

lev6:
    system("cls");
    gotoxy(26,11);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
    gotoxy(26,12);
    printf("\xDB\xDB                                                                \xDB\xDB");
    gotoxy(26,13);
    printf("\xDB\xDB                    You completed LEVEL 6 !!                    \xDB\xDB");
    gotoxy(26,14);
    printf("\xDB\xDB                                                                \xDB\xDB");
    gotoxy(26,15);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
    gotoxy(47,27);
    printf("Press any key to continue...");
    getch();
    fflush(stdin);
    goto rid019;

lev7:
    system("cls");
    gotoxy(26,11);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
    gotoxy(26,12);
    printf("\xDB\xDB                                                                \xDB\xDB");
    gotoxy(26,13);
    printf("\xDB\xDB                    You completed LEVEL 7 !!                    \xDB\xDB");
    gotoxy(26,14);
    printf("\xDB\xDB                                                                \xDB\xDB");
    gotoxy(26,15);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
    gotoxy(47,27);
    printf("Press any key to continue...");
    getch();
    fflush(stdin);
    goto rid022;

lev8:
    system("cls");
    gotoxy(26,11);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
    gotoxy(26,12);
    printf("\xDB\xDB                                                                \xDB\xDB");
    gotoxy(26,13);
    printf("\xDB\xDB                    You completed LEVEL 8 !!                    \xDB\xDB");
    gotoxy(26,14);
    printf("\xDB\xDB                                                                \xDB\xDB");
    gotoxy(26,15);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
    gotoxy(47,27);
    printf("Press any key to continue...");
    getch();
    fflush(stdin);
    goto rid025;

lev9:
    system("cls");
    gotoxy(26,11);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
    gotoxy(26,12);
    printf("\xDB\xDB                                                                \xDB\xDB");
    gotoxy(26,13);
    printf("\xDB\xDB                    You completed LEVEL 9 !!                    \xDB\xDB");
    gotoxy(26,14);
    printf("\xDB\xDB                                                                \xDB\xDB");
    gotoxy(26,15);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
    gotoxy(47,27);
    printf("Press any key to continue...");
    getch();
    fflush(stdin);
    goto rid028;

 {win:
    system("cls");
    gotoxy(26,9);
    printf("\xDB\xDB                                                            \xDB\xDB");
    gotoxy(26,10);
    printf("\xDB\xDB\xB2\xB2                                                        \xB2\xB2\xDB\xDB");
    gotoxy(26,11);
    printf("\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB");
    gotoxy(26,12);
    printf("\xDB\xDB\xB2\xB2                                                        \xB2\xB2\xDB\xDB");
    gotoxy(24,13);
    printf("\xB2\xB2\xDB\xDB\xB2\xB2                                                        \xB2\xB2\xDB\xDB\xB2\xB2");
    gotoxy(24,14);
    printf("\xB2\xB2\xDB\xDB\xB2\xB2           CONGRATULATIONS YOU WON THE GAME!!           \xB2\xB2\xDB\xDB\xB2\xB2");
    gotoxy(24,15);
    printf("\xB2\xB2\xDB\xDB\xB2\xB2                                                        \xB2\xB2\xDB\xDB\xB2\xB2");
    gotoxy(26,16);
    printf("\xDB\xDB\xB2\xB2                                                        \xB2\xB2\xDB\xDB");
    gotoxy(26,17);
    printf("\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB");
    gotoxy(26,18);
    printf("\xDB\xDB\xB2\xB2                                                        \xB2\xB2\xDB\xDB");
    gotoxy(26,19);
    printf("\xDB\xDB                                                            \xDB\xDB");
    gotoxy(34,22);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2  %s have scored %d  ",playername,score);

    gotoxy(40,27);
    printf("Press any key to go back to Main Menu...");
    getch();
    mainmenu();

    }


{gameover:
    system("cls");
    gotoxy(26,11);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(26,12);
    printf("\xB2\xB2                                                                \xB2\xB2");
    gotoxy(26,13);
    printf("\xB2\xB2                      G A M E   O V E R                         \xB2\xB2");
    gotoxy(26,14);
    printf("\xB2\xB2                                                                \xB2\xB2");
    gotoxy(26,15);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(34,21);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2  %s have scored %d  ",playername,score);
    gotoxy(40,27);
    printf("Press any key to go back to Main Menu...");
    getch();
    mainmenu();

}
    getch();
}



void help()
    {
     system("cls");
     gotoxy(40,2);
     printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\ HELP \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
     gotoxy(10,5);
     printf("\xB2\xB2\xB2\xB2\xB2>> There are 10 levels in the game and each level got 3 riddles. The riddles will gradually get ");
     gotoxy(18,6);
     printf("difficult with every level.");
     gotoxy(10,8);
     printf("\xB2\xB2\xB2\xB2\xB2>> You will get 5 lives to complete the game.");
     gotoxy(10,10);
     printf("\xB2\xB2\xB2\xB2\xB2>> For guessing each riddle you will get 5 points and for each wrong guess you will lose 1 life!");
     gotoxy(10,12);
     printf("\xB2\xB2\xB2\xB2\xB2>> You can use hints to guess the right answer. But for using each hint you will lose 2 points!");
     gotoxy(10,14);
     printf("\xB2\xB2\xB2\xB2\xB2>> The hint will contain extra alphabets along with the alphabets of the correct answer.");
     gotoxy(18,15);
     printf("EXAMPLE: If the answer is 'CROW' the hint will be 'R C S O E W'. You have to organize the");
     gotoxy(18,16);
     printf("alphabets in right order to get the correct answer. ");
     gotoxy(10,18);
     printf("\xB2\xB2\xB2\xB2\xB2>> The 1st riddle will be a demo riddle. You automatically will get 5 points there.");
     gotoxy(10,20);
     printf("\xB2\xB2\xB2\xB2\xB2>> The 30th or last riddle will be in 'Morse Code'. So you have to decode the 'Morse Code' ");
     gotoxy(18,21);
     printf("manually in order to win the Game!");
     gotoxy(45,25);
     printf("\xDB\xDB\xDB\xDB\xDB\xB2\xB2\xB2\xB2 BEST OF LUCK !! \xB2\xB2\xB2\xB2\xDB\xDB\xDB\xDB\xDB");
     gotoxy(88,26);
     printf("~ Developed by ELITE CODERS");
     gotoxy(46,28);
     printf("Press Esc to go back to Main Menu." );
     getch();
     mainmenu();
}




