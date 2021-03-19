#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

 void show_record()
{
 char name[20];
 float scr;
 FILE *f;
 clrscr();
 f=fopen("score.txt","r");
 fscanf(f,"%s%f",&name,&scr);
 printf("\n\n\t\t************************************************");
 printf("\n\n\t\t %s has secured the highest cash price %0.2f",name,scr);
 printf("\n\n\t\t************************************************");
 printf("\n\n\n\n\tPress any key to go back to main menu");
 fclose(f);
 getch();
}

 void edit_score(float score, char plnm[20])
{
 float sc;
 char nm[20];
 FILE *f;
 clrscr();
 sc=0;
 f=fopen("score.txt","r");
 fscanf(f,"%s%f",&nm,&sc);
 if (score>=sc)
 {
  sc=score;
  fclose(f);
  f=fopen("score.txt","w");
  fprintf(f,"%s\n%.2f",plnm,sc);
  fclose(f);
 }
}


 void help()
{
 clrscr();
 printf("\n\n                        HELP");
 printf("\n ---------------------------------------------------");
 printf("\n ................Quiz Game on C...............");
// printf("\n >> There are 2 rounds in the game , WARMUP ROUND & CHALLENGE ROUND");
// printf("\n >> In warmup round you will be asked a total of 3 questions to test your genral");
// printf("\n    knowledge.                                             ");
// printf("\n    you will be eligible to play the game if you can give atleast 2");
// printf("\n    right answers otherwise you can't play the game......");
 printf("\n >> Your games starts with the CHALLENGE ROUND. In this round you will be asked");
 printf("\n    total 10 questions each right answer will be awarded 1000000 rupees.");
 printf("\n    by this way you can win upto CORERPATI ............");
 printf("\n >> You will be given 4 options and you have to press A,B,C or D for the ");
 printf("\n    right answer");
 printf("\n >> You will be asked questions continuously if you keep giving the right answer.");
 printf("\n >> No negative marking for wrong answers");

 printf("\n\n\t**********************BEST OF LUCK***********************");
 printf("\n\n\n\n\tPress any key to go back to main menu");
}


  int main()
{
 int countr,r,r1,count,i,n;
 int correct,wrong;
 float score;
 char choice;
 char playername[20];
 mainhome:
	clrscr();
	printf("\t\t\tAssignment for Vaave\n");
	printf("\n\t\t-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");

	printf("\n\t\t\t WELCOME TO QUIZ GAME  ");
	printf("\n\t\t-*-*-*-*-*-*-*-*-*-*- *-*-*-*-*-*-*-*-*-*-*");
	printf("\n\t\t-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");
	printf("\n\t\t\t Chaliyeh shuru karte h!!!!");
	printf("\n\t\t-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");
	printf("\n\t\t-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");
	printf("\n\t\t > Press S to start the game ");
	printf("\n\t\t > Press V to view the highest cash price won ");
	printf("\n\t\t > Press H for help");
	printf("\n\t\t > Press Q for quit");
	printf("\n\t\t-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");

	choice=toupper(getch());
	if(choice=='V')
	{
	show_record();
	getch();
	goto mainhome;
	}

	else if(choice=='H')
	{
	help();
	getch();
	goto mainhome;
	}
	else if(choice=='Q')
	{
	exit(0);
	}

	else if(choice=='S')
	{
	  clrscr();

	printf("\n\n\n\n\t\tRegister your name here:- ");
	gets(playername);

	clrscr();
	printf("\n---------------Welcome %s ------------------------",playername);
  //	printf("\n\n\t HERE ARE SOME INFORMATION THAT YOU NEED TO KNOW");
  //	printf("\n * There are 2 rounds first round is FASTEST FINGER FIRST in which");
  //	printf("\n   3 question will be asked you need to give atleast 2 correct answer and");
  //	printf("\n   in 2 round there is CHALLENGING ROUND where 10 question will be asked");
  //	printf("\n   if you give any wrong answer you'll loose the game");
	printf("\n                  !!!!SO ARE YOU READY!!!!           ");
	printf("\n             !!!!!!!!!ALL THE BEST !!!!!!!!!!!       ");
	printf("\n\n\n Press Y to start the game!\n");
	printf("\n Press anyother key to return to main menu");
	if(toupper(getch())=='Y')
	{
	 goto game;
	}
	else
	{
	 goto mainhome;
	 clrscr();
	}

	//PLEASE IGNORE HOME FUNCTION
	//THE REASON WHY I DIDN'T REMOVE THIS FROM CODE IS BECAUSE
	//OF THE BRACKETS INDENTATION PROBLEM


	home:
	clrscr();
	count=0;

	for(i=1; i<=3; i++)
	{
	clrscr();
	r1=i;

	switch(r1)
	 {
	  case 1:
		 printf("\n\n1.Grand Central Terminal, Park Avenue,New York is the world's");
		 printf("\n\nA.largest railway station \t\t B.highest railway station \n\nC.longest railway station \t\tD.none of the above");
	  if(toupper(getch())=='A')
		  {
		   printf("\n\nCORRECT!!!");
		   count++;
		   printf("\n\n\tPress ENTER for next question");
		   getch();
		   break;
		  }
	  else
		   {
		    printf("\n\nWrong!!! The correct answer is largest railway station");
		    getch();
		   break;
		   }

	 case 2:
		 printf("\n\n2.Entomology is the science that studies");
		 printf("\n\nA.Behaviour of human beigns \t\t B.Insects \n\nC.The origin and history of technical and scientific terms \n\nD.The formation of rocks");
	  if(toupper(getch())=='B')
		  {
		   printf("\n\nCORRECT!!!");
		   count++;
		   printf("\n\n\tPress ENTER for next question");
		   getch();

		   break;
		  }
	  else
		   {
		    printf("\n\nWrong!!! The correct answer is Insects");
		    getch();
		   break;
		   }
	case 3:
		 printf("\n\n3.Eritrea,which became the 182nd member of the UN in 1993, is in the continent of");
		 printf("\n\nA.Asia \t\t B.Africa \n\nC.Europe \t\tD.Australia");
	  if(toupper(getch())=='B')
		  {
		   printf("\n\nCORRECT!!!");
		   count++;
		   getch();
		   break;
		  }
	  else
		   {
		    printf("\n\nWrong!!! The correct answer is Africa");
		    getch();
		   break;
		   }

}
}

	 if(count>=2)
	 {
	  goto test;
	 }
	 else
	 {
	 clrscr();
	 printf("\n\n SORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
	 getch();
	 goto mainhome;
	 }
	  test:
	  clrscr();
	  printf("\n\n\t*** CONGRATULATION %s you are eligible to play the game ***",playername);
	  printf("\n\n\n\n\t!Press any key to start the Game!");
     //	  if(toupper(getch())=='P')
     //	  {
     //	  goto game;
     //	  }

     // MAIN FUNCTION STARTS FROM THE BOTTOM


    game:
	 countr=0;
	 correct=0;
	 wrong=0;
	 for(i=1; i<=10; i++)
	 {
	 clrscr();
	 r=i;

	 switch(r)
	  {
	   case 1:
		  printf("\n\n1. Grampani Sanctuary is located at");
		  printf("\n\nA.Junagarh,Gujarat\t\tB.Tiphu,Assam\n\nC.Kohima,Nagaland\t\tD.Gangtok,Sikkim");
	   if(toupper(getch())=='B')
	    {
	    printf("\n\nCORRECT!!!");
	    countr++;
	    correct++;
	    printf("\n\n\tPress ENTER for next question");
	    getch();
	    break;
	    getch();
	    }
	   else
	   {
	    printf("\n\nWrong!!! The correct answer is B.Tipu,Assam");
	    wrong++;
	    getch();

	    break;
	   }
	   case 2:
		  printf("\n\n2. For which of the following disciplines is noble prize awarded");
		  printf("\n\nA.Physics and chemistry\t\tB.Physiology or medicine\n\nC.Literature,peace and economics\t\tD.All of the above");
	   if(toupper(getch())=='D')
	    {
	    printf("\n\nCORRECT!!!");
	    countr++;
	    correct++;
	    printf("\n\n\tPress ENTER for next question");
	    getch();
	    break;
	    getch();
	    }
	   else
	   {
	    printf("\n\nWrong!!! The correct answer is D.All of the above");
	    wrong++;
	    getch();

	    break;
	   }
	   case 3:
		 printf("\n\n3. What is the unit of measurement of distance between stars?");
		 printf("\n\nA.Light year\t\tB.Coulomb\n\nC.Nautical Mile\t\tD.Kilometer");
	   if(toupper(getch())=='A')
	    {
	    printf("\n\nCORRECT!!!");
	    countr++;
	    correct++;
	    printf("\n\n\tPress ENTER for next question");
	    getch();
	    break;
	    getch();
	    }
	   else
	   {
	    printf("\n\nWrong!!! The correct answer is A.Light year");
	    wrong++;
	    getch();

	    break;
	   }
	   case 4:
		  printf("\n\n4. Hitler party which came into power in 1933 is known as");
		  printf("\n\nA.Labour party\t\tB.Nazi party\n\nC.Ku-klux-klan\t\tD.Democratic party");
	   if(toupper(getch())=='B')
	    {
	    printf("\n\nCORRECT!!!");
	    countr++;
	    correct++;
	    printf("\n\n\tPress ENTER for next question");
	    getch();
	    break;
	    getch();
	    }
	   else
	   {
	    printf("\n\nWrong!!! The correct answer is B.Nazi party");
	    wrong++;
	    getch();

	    break;
	   }
	   case 5:
		  printf("\n\n5. FCC stands for");
		  printf("\n\nA.Foreign Finance Corporation\t\tB.Film Finance Corporation\n\nC.Federation of Football Council\t\tD.None of the above");
	   if(toupper(getch())=='B')
	    {
	    printf("\n\nCORRECT!!!");
	    countr++;
	    correct++;
	    printf("\n\n\tPress ENTER for next question");
	    getch();
	    break;
	    getch();
	    }
	   else
	   {
	    printf("\n\nWrong!!! The correct answer is B.Film Finance Corporation");
	    wrong++;
	    getch();

	    break;
	   }
	   case 6:
		  printf("\n\n6. Fastest shorthand writer was");
		  printf("\n\nA.Dr.G.D.Bist\t\tB.J.R.D Tata\n\nC.J.M.Tagore\t\tD.Khudada khan");
	   if(toupper(getch())=='A')
	    {
	    printf("\n\nCORRECT!!!");
	    countr++;
	    correct++;
	    printf("\n\n\tPress ENTER for next question");
	    getch();
	    break;
	    getch();
	    }
	   else
	   {
	    printf("\n\nWrong!!! The correct answer is A.Dr.G.D.Bist");
	    wrong++;
	    getch();

	    break;
	   }
	   case 7:
		 printf("\n\n7. For which of the following disciplines is noble prize awarded");
		 printf("\n\nA.Physics and chemistry\t\tB.Physiology or medicine\n\nC.Literature,peace and economics\t\tD.All of the above");
	   if(toupper(getch())=='D')
	    {
	    printf("\n\nCORRECT!!!");
	    countr++;
	    correct++;
	    printf("\n\n\tPress ENTER for next question");
	    getch();
	    break;
	    getch();
	    }
	   else
	   {
	    printf("\n\nWrong!!! The correct answer is D.All of the above");
	    wrong++;
	    getch();

	    break;
	   }
	  case 8:
		  printf("\n\n8. Epsom (England) is the place associated with");
		  printf("\n\nA.Horse Racing\t\tB.Polo\n\nC.Shooting\t\tD.Snooker");
	   if(toupper(getch())=='A')
	    {
	    printf("\n\nCORRECT!!!");
	    countr++;
	    correct++;
	    printf("\n\n\tPress ENTER for next question");
	    getch();
	    break;
	    getch();
	    }
	   else
	   {
	    printf("\n\nWrong!!! The correct answer is A.Horse racing");
	    wrong++;
	    getch();

	    break;
	   }
	   case 9:
		  printf("\n\n9. Galileo was an italian astronomer who");
		  printf("\n\nA.developed the telescope\t\tB.discovered four satellies of jupiter\n\nC.discovered that the movement of pendulum produces a rgular time measurement\t\tD.All of the above");
	   if(toupper(getch())=='D')
	    {
	    printf("\n\nCORRECT!!!");
	    countr++;
	    correct++;
	    printf("\n\n\tPress ENTER for next question");
	    getch();
	    break;
	    getch();
	    }
	   else
	   {
	    printf("\n\nWrong!!! The correct answer is D.All of the above");
	    wrong++;
	    getch();

	    break;
	   }
	   case 10:
		  printf("\n\n10. Golf player Vijay Singh belongs to which country?");
		  printf("\n\nA.USA\t\tB.Fiji\n\nC.India\t\tD.UK");
	   if(toupper(getch())=='B')
	    {
	    printf("\n\nCORRECT!!!");
	    countr++;
	    printf("\n\n\tPress ENTER for next question");
	    correct++;
	    goto score;
	    getch();
	    break;
	    getch();
	    }
	   else
	   {
	    printf("\n\nWrong!!! The correct answer is B.Fiji");
	    wrong++;
	    getch();
	    goto score;
	    break;
	   }


      score:
	    clrscr();
	    score=(float)countr*1000000;

	    printf("\n\t Total Questions = 10");
	    printf("\n\t Correct Answers %d",correct);
	    printf("\n\t Wrong Answers %d",wrong);


	    if(score>0.00 && score<10000000)
	    {
	     printf("\n\n\t\t***************CONGRATULATIONS********************");
	     printf("\n\n\n\t You won rupees %.2f",score);
	     goto go;
	    }

	    else if(score==10000000)
	    {
	     printf("\n\n\n\t\t**************** CONGRATULATION *******************");
	     printf("\n\n\t\t\t\t!!!!!!! AAP JEET GAYE QUIZ !!!!!!!!!");
	     printf("\n\n\t\t You Won %.2f rupees",score);
	     printf("\n\n\t\t Thank You!!");
	    }

	    else if(score==0.00)
	    {
	     printf("\n\n\t********* SORRY YOU DIDN'T WON THE QUIZ ***********");
	     printf("\n\n\n\t\t Thanks for your participation");
	     printf("\n\n\n\t\t TRY AGAIN");
	     goto go;
	    }

       go:
	   puts("\n\n Press Y if you want to play the next game");
	   puts(" Press any key if you want to go main menu");

	   if(toupper(getch())=='Y')
	    goto game;
	   else
	       {
		edit_score(score,playername);
		goto mainhome;
		}
		}
		}

    }

      else if(choice!='S'||'V'||'H'||'Q')
	{
	printf("\n\nYou have entered the wrong choice so run the program again");
	}

getch();
}



