#include<stdio.h>
#include<stdlib.h>

void quit()
{
    printf("\n\n\n\n\n\n\n\n\n\nHOPE YOU ENJOYED !!! SEE YOU !!");
}

void start()
{
    int score=0;
    char a;
    char A,B,C,D;
    printf("\n\nROUND 1 : \n\n\n\nQuestion 1 :Which of the following is the invalid inclusion of a file?\n(A)#include<file>\t(B)#include\"file\"\n(C)#include<file\t(D)All of the above is valid.\n ");

    a=getch();
              if(a == 'C')
              {
                  printf("\nCORRECT !!");
                  score=score+5;
              }
              else
                {
                    printf("\nWRONG !!");
                    score = score-1;
                }
              printf("\n\n\n\nQuestion 2 :The prototype of a function can be used to:\n(A)define a function\t(B)declare a function\n(C)erase a function\t(D)none of the above \n ");
             a=getch();
              if(a=='B')
              {
                  printf("\nCORRECT !!");
                   score=score+5;
              }
              else
               {
                printf("\nWRONG!!");
                score = score-1;
               }
               printf("\n\n\n\nQuestion 3 :Who is the father of C language?\n(A)bjarne stroustrup\t(B)dennis ritche\n(C)james A.gosling\t(D)Dr.E.f.Codd ");
               a=getch();
               if(a=='B')
               {
                   printf("\nCORRECT !!");
                    score=score+5;
               }
               else
                {
                    printf("\nWRONG !!");
                    score = score-1;
                }
               printf("\n\n\n\nQuestion 4: Which of the following cannot be static in C?\n(A)Variable\t(B)Function\n(C)Structures\t(D)None of the mentioned\n");
               a=getch();
               if(a=='D')
               {
                   printf("\nCORRECT !!");
                   score=score+5;
               }
               else
               {
                   printf("\nWRONG!!");
                   score=score-1;
               }
               printf("\n\n\n\nQuestion 5: Which is valid C expression?\n(A)int my_num = 100,000\t(B)int my_num = 100000\n(C)int my num = 1000\t(D)int $my_num = 10000;");
               a=getch();
               if(a=='B')
               {
                   printf("\nCORRECT!!");
                   score=score+1;
               }
               else
               {
                   printf("\nWRONG!!");
                   score=score-1;
               }
        printf("\n\nYou have completed the first round !!");
        printf("\n\nYOUR SCORE AFTER FIRST ROUND IS %d. ",score);
        printf("\n\n\n\n\n\n\n\n ****ROUND : SECOND****");
        printf("\n\nQuestion 1: Entomology is the science that studies \n(A) Behaviour of human beings\n(B)insects\n(C) The origin and history of technical and scientific terms\n(D) The formation of rocks");
        a=getch();
        if(a=='B')
        {
            printf("\nCORRECT !");
            score=score+4;
        }
        else
            printf("\nWRONG !");
        printf("\n\nQuestion 2: Galileo was an italian astronomer who\n(A) developed the telescope\n(B) discovered four satellites for jupiter\n(C) discovered that the movement of pendulum produces a regular time measurement\n(D) All of the above");
        a=getch();
        if(a=='D')
        {
            printf("\nCORRECT !");
            score=score+4;
        }
        else
            printf("\nWRONG !");
        printf("\n\nQuestion 3: Exposure to sunlight helps a person improve his health because\n(A) the infrared light kills the bacteria in our body\n(B) resistance power increases\n(C) the pigmented cells in the skin get stimulated and produce a healthy tan\n(D)the ultravoilet rays convert skin oil into Vitamin D");
        a=getch();
        if(a=='D')
        {
            printf("\nCOREECT !");
            score=score+4;
        }
        else
        printf("\nWRONG !");
        printf("\n\nQuestion 4: Friction can be reduced by changing from\n(A) sliding to rolling\n(B)rolling to sliding\n(C)potential energy to kinetic energy\n(D) dynamic to static");
        a=getch();
        if(a=='A')
        {
            printf("\nCORRECT !");
            score=score+4;

        }
        else
            printf("\nWRONG !");
        printf("\n\nQuestion 5: Headquaters of UNO are situated at\n(A) new york,USA\n(B)hague(netherlands\n(C) Geneva\n(D) Paris");
        a=getch();
        if(a=='A')
        {

            printf("\nCORRECT!");
            score=score+4;
        }
        else
            printf("\nINCORRECT !");
        printf("\n\n\nAfter the two rounds you final score is %d",score);
        printf("\n\n\n\n ROUND: THIRD");
        printf("\n\nQuestion 1: Find the H.C.F, if the numbers are in the ratio of 4:5:6 and their L.C.M is 2400.\n(A)35\t(B)20\n(C)40\t(D)67");
        a=getch();
        if(a=='B')
        {
            printf("\nCORRECT!");
            score=score+5;
        }
else
            printf("\nINCORRECT !");
            printf("\n\nQuestion 2:what is the value of c,if 8 is 4% of a, and 4 is 8% of b.c equals b/a.\n(A)12\t(B)1/4\n(C)0.155\t(D)none of these");
            a=getch();
            if(a=='B')
        {
            printf("\nCORRECT!");
            score=score+5;
        }
else
            printf("\nINCORRECT !");
            printf("\n\nQuestion 3: 3 years back average age of A and B was 32.today average age of A,B and C is 30.what is the age of C?\n(A)5\t(B)10\n(C)15\t(D)20");
            a=getch();
             if(a=='D')
        {
            printf("\nCORRECT!");
            score=score+5;
        }
else
            printf("\nINCORRECT !");
            printf("\n\nQuestion 4: Find the remainder when 67^99 is divided by 7.\n(A)4\t(B)6\n(C)1\t(D)2");
            a=getch();
             if(a=='C')
        {
            printf("\nCORRECT!");
            score=score+5;
        }
else
            printf("\nINCORRECT !");
            printf("\n\nQuestion 5: Half percent, written as a decimal,is\n(A)0.2\t(B)0.02\n(C)0.005\t(D)0.05");
            a=getch();
            if(a=='C')
        {
            printf("\nCORRECT!");
            score=score+5;
        }
else
            printf("\nINCORRECT !");
            printf("\n\n\n\nYour final score is %d.",score);
            printf("\n\nWELL PLAYED !!\n");
            printf("press M to go to main menu and press Q to quit the game.");
            a=getch();
            if(a=='M')
            return main();
            else
                return quit();
}


void main()
{
    char choice,a,b,d,A,B,C,D;
    int score=0;
   printf("\n\n\t\t*****QUIZ GAME****\n__________________________________________________\n****WELCOME TO THE WORLD SQUARE QUIZ GAME****\n");
   printf("__________________________________________________\n");
   printf("\n--> press S to start the game.\n");
   printf("--> press V to view high score.\n");
   printf("--> press R to reset the score.\n");
   printf("--> press H for help.\n");
   printf("--> press Q to quit the game.\n\n____________________________________________________");
   choice=getch();
   switch(choice)
   {
   case 'S' : start();
                break;
   case 'V' : printf("your highscore is %d", score);
               break;

   case 'R' : printf("\nAre you sure want to reset the score ?\nPress Y for YES\nPress N for NO.\n");
              a=getch();
              if(a=='A')
              {
                  score=score*0;
                   printf("high score=%d", score);
              }
              break;
   case 'H' :
              printf(" __INSTRUCTION TO THE GAME__\n\n ");
             printf("\n1.There will be total 3 rounds in the quiz.");
             printf("\n2.Each round will have 5 questions.");
             printf("\n3.First round have question regarding C programming.In this round, 5 marks will be awarded for every correct answer and -1 for every wrong answer.");
             printf("\n4.Second round is about general knowledge in which 4 marks will be awarded for every correct answer and there is no negative marking for wrong answer.");
             printf("\n5.Third round will have aptitude questions which carry 5 marks for each correct answer and 0 will be awarded for wrong answer.");
             printf("\n6.At the end you will have your score card.");
             printf("\n******ALL THE VERY BEST !!******");
             break;
  case 'Q' :quit();
            break;
    }

}
