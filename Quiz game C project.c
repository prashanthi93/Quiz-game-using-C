#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct play {
            char name[20];
            int score;
            int rat;       //star ratings
}p;

void start();
void help();

void main()
{
       int chc=0;

    printf("\nPress 1 to start the game\n\nPress 2 to see game help\n\nPress 3 to exit :   ");
    scanf("%d",&chc);

    switch(chc)
    {
        case 1:
        start();
        break;

        case 2:
        help();
        break;

          default:
          exit(1);
    }

  getch();
}

void help()
{
     int ch;

     printf("\n\n\t\t\t GAME HELP ");
     printf("\n ----------------------------------------------------------------------------------------------------------------------");
     printf("\n \n\t\t\t C program Quiz Game\n");
     printf("\n\n >>> There will be a total of 10 questions.");
     printf("\n\n >>> You will be given 4 options and you have to press 1, 2 ,3 or 4 for the right option.");
     printf("\n\n >>> Each question will carry 10 points.");
     printf("\n\n >>> You will be asked questions continuously.");
     printf("\n\n >>> There is no negative marking for wrong answer.");

    printf("\n\n\n BEST OF LUCK !!!! \n\n");

    printf("\n\nContinue playing ? (1/0) :  ");
    scanf("%d",&ch);

    if(ch==1)
    {
        start();
    }
    else
    {
        exit(1);
    }

}

void start()
{
          int ans;
          int count=0;
          char rating[20];

        printf("\nPlease enter your name: ");
        scanf("%s",p.name);

        printf(" \n\n************************** Welcome \" %s \"  to C Quiz Game *************************** \n\n", p.name);

        printf("\n\n\n\nQ(1).Grand Central Terminal, Park Avenue, New York is the world's \n\n 1.largest railway station \t\t 2.highest railway station\n 3.longest railway station\t\t 4.None of the above\n\n");
        printf("\nYour answer: ");
        scanf("%d",&ans);

        if(ans==1)
        {
            printf("\nyour answer is Correct ! +10 points\n\n");
            ++count;
            printf("-----------------------------------------------------");
        }
        else
        {
            printf("\nWrong answer ! Correct answer is 1.largest railway station\n\n");
            printf("-----------------------------------------------------");
        }

        printf("\n\n\n\nQ(2).Eritrea, which became the 182nd member of the UN in 1993, is in the continent of \n\n 1.Asia\t\t 2.Africa\n 3.Europe\t 4.Australia\n\n");
        printf("\nYour answer: ");
        scanf("%d",&ans);

        if(ans==2)
        {
            printf("\nyour answer is Correct ! +10 points\n\n");
            ++count;
            printf("-----------------------------------------------------");
        }
        else
        {
            printf("\nWrong answer ! Correct answer is 2.Africa\n\n");
            printf("-----------------------------------------------------");
        }

        printf("\n\n\n\nQ(3).For which of the following disciplines is Nobel Prize awarded? \n\n1.Physics and Chemistry\t2.Physiology or Medicine\n3.Literature, Peace and Economics\t4.All of the above\n\n");
        printf("\nYour answer: ");
        scanf("%d",&ans);
        if(ans==4)
        {
            printf("\nyour answer is Correct ! +10 points\n\n");
            ++count;
            printf("-----------------------------------------------------");
        }
        else
        {
            printf("\nWrong answer ! Correct answer is 4.All of the above\n\n");
            printf("-----------------------------------------------------");
        }

        printf("\n\n\n\nQ(4).Hitler party which came into power in 1933 is known as \n\n 1.Labour Party\t 2.Nazi Party\n 3.Ku-Klux-Klan\t 4.Democratic Party\n\n");
        printf("\nYour answer: ");
        scanf("%d",&ans);
        if(ans==2)
        {
            printf("\nyour answer is Correct ! +10 points\n\n");
            ++count;
            printf("-----------------------------------------------------");
        }
        else
        {
            printf("\nWrong answer ! Correct answer is 2.Nazi Party\n\n");
            printf("-----------------------------------------------------");
        }

        printf("\n\n\n\nQ(5). Fastest shorthand writer was \n\n 1.Dr. G. D. Bist\t 2. J.R.D. Tata\n 3. J.M. Tagore\t 4. Khudada Khan\n\n");
        printf("\nYour answer: ");
        scanf("%d",&ans);
        if(ans==1)
        {
            printf("\nyour answer is Correct ! +10 points\n\n");
            ++count;
            printf("-----------------------------------------------------");
        }
        else
        {
            printf("\nWrong answer ! Correct answer is 1.Dr. G. D. Bist\n\n");
            printf("-----------------------------------------------------");
        }

        printf("\n\n\n\nQ(6).Epsom (England) is the place associated with \n\n 1.Horse racing\t 2.Polo\n 3.Shooting\t 4.Snooker\n\n");
        printf("\nYour answer: ");
        scanf("%d",&ans);
        if(ans==1)
        {
            printf("\nyour answer is Correct ! +10 points\n\n");
            ++count;
            printf("-----------------------------------------------------");
        }
        else
        {
            printf("\nWrong answer ! Correct answer is 1.Horse racing\n\n");
            printf("-----------------------------------------------------");
        }

        printf("\n\n\n\nQ(7). Frames from one LAN can be transmitted to another LAN via the device \n\n 1. Router\t 2. Bridge\n 3. Repeater\t 4. Modem\n\n");
        printf("\nYour answer: ");
        scanf("%d",&ans);
        if(ans==2)
        {
            printf("\nyour answer is Correct ! +10 points\n\n");
            ++count;
            printf("-----------------------------------------------------");
        }
        else
        {
            printf("\nWrong answer ! Correct answer is 2. Bridge\n\n");
            printf("-----------------------------------------------------");
        }

        printf("\n\n\n\nQ(8).  Which of the following is used for modulation and demodulation?\n\n 1. modem\t 2. protocols\n 3. gateway\t 4. multiplexer\n");
        printf("\nYour answer: ");
        scanf("%d",&ans);
        if(ans==1)
        {
            printf("\nyour answer is Correct ! +10 points\n\n");
            ++count;
            printf("-----------------------------------------------------");
        }
        else
        {
            printf("\nWrong answer ! Correct answer is 1.modem\n\n");
            printf("-----------------------------------------------------");
        }

        printf("\n\n\n\nQ(9). The slowest transmission speeds are those of \n\n 1. twisted-pair wire\t 2. coaxial cable\n 3. fiber-optic cable\t 4. microwaves\n");
        printf("\nYour answer: ");
        scanf("%d",&ans);
        if(ans==1)
        {
            printf("\nyour answer is Correct ! +10 points\n\n");
            ++count;
            printf("-----------------------------------------------------");
        }
        else
        {
            printf("\nWrong answer ! Correct answer is  1. twisted-pair wire\n\n");
            printf("-----------------------------------------------------");
        }

        printf("\n\n\n\nQ(10). What is the port number for NNTP?\n\n 1. 119\t 2. 80\n 3. 79\t 4. 70\n");
        printf("\nYour answer: ");
        scanf("%d",&ans);
        if(ans==1)
        {
            printf("\nyour answer is Correct ! +10 points\n\n");
            ++count;
        }
        else
        {
            printf("\nWrong answer ! Correct answer is  1. 119 \n\n");
            printf("-----------------------------------------------------");
        }


        //counting number of correct answers and, ratings
        if(count > 0)
        {
                printf("\n\n\n---------------------------------------------------------------------------------------------");
                printf("\t\t\t\t\t\tThanks for playing , Your score is : %d points \t", count*10);

                p.score=count*10;

                if(p.score >= 80)
                {
                    printf("Rating: * * * * *");
                    p.rat=5;
                }
                else if(p.score >= 60 && p.score < 80)
                {
                    printf("Rating: * * * *");
                    p.rat=4;
                }
                else if(p.score >= 40 && p.score < 60)
                {
                    printf("Rating: * * *");
                  p.rat=3;
                }
                else if(p.score >= 20 && p.score < 40)
                {
                    printf("Rating: * *");
                    p.rat=2;
                }
                else if(p.score < 20)
                {
                    printf("Rating: *");
                     p.rat=1;
                }

               printf("\n\n\n \t\t\t\t\t\t  Have a nice day :)");
    }

  }
