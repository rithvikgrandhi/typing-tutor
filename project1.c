#include<stdio.h>
#include<stdlib.h>
//#include<conio.h>
#include<time.h>
#include<unistd.h>
#include<string.h>



int main(){
    int deck;
    printf("    --------------- WELCOME TO TYPING TUTOR --------------\n");
    printf("------------- SELECT 1 FOR TRAINING AND 2 FOR CHALLENGE---------------\n");
    scanf("%d",&deck);

//000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
//                          ----------- CHOICE 1 ----------
    if (deck==1)
{   printf("\n");
    printf("WELCOME TO TRAINING MODE\n");
    printf("be sure to end it with a full stop\n");
    sleep(2);
    printf("%s","------- ENTER THE GIVEN TEXT IN -----\n");
    printf("IN 3....\n");
    sleep(1);
    printf("2....\n");
    sleep(1);
    printf("1....GO\n");
    sleep(1);
    system("clear");
    

    char a[500]="the quick brown fox jumps over the lazy dog.";
    printf("%s\n",a);
    time_t start;
	time_t end;
    
  int c;
  system ("/bin/stty raw");
  int i=1;
  int totalattempts =0;
  int totalwrong =0;
  time(&start);
  while((c=getchar())!= '.') {
      totalattempts++;

  if(c!=a[i]){
      printf("\a\n");
      totalwrong++;
      i--;
      system("clear");
      printf("%s","the quick brown fox jumps over the lazy dog.\n");
      for(int j=0;j<=i;j++){
          printf("%c",a[j]);
      }
  }
     // putchar(c);
            i++;

     //else
    //putchar(c);
  }
  /* use system call to set terminal behaviour to more normal behaviour */
  time(&end);
  printf("\n");
  printf("ACCURACY=%.2f",(((float)totalattempts)-((float) totalwrong-1))*100/(float)totalattempts);printf("%%");

    float t= end-start;
	float cpm= (9/t)*60;
	int wpm1=cpm;
    printf("\n YOUR SPEED IS = %d WPM",wpm1);
  system ("/bin/stty cooked");
  return 0;
}

//000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
//                               --------- CHOICE 2 -----------

else if(deck==2)
{     int choice2;

    printf("YOU HAVE CHOSEN CHALLENGE MODE\n");
    
    printf("CHOOSE\n1 FOR EASY\n2 FOR MEDIUM\n3 FOR HARD\n");
    scanf("%d",&choice2);
//11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111
    //                          ========= OPTION 1 ============
    if(choice2==1)
    {
        printf("you have entered easy mode\n");
        char name[500]; 
	time_t start;
	time_t end;
    
    char b[500]="The quick brown fox jumps over the lazy dog";
    printf("\nThe quick brown fox jumps over the lazy dog \n");
	printf("YOUR TIME STARTS IN... 3 \n");
	sleep(2);
	printf("2 \n");
	sleep(1);
	printf("1 \n");
	sleep(1);
	time(&start);
	
    scanf("%*c%[^\n]s",name);
	fflush(stdin);
	time(&end);
	float len3=strlen(b);
	float k=0;
	int len2=strlen(name);
	int j;
	for(j=0;j<len2;j++)
	{
	if(b[j]==name[j])
	{
	    k++;  
	}
	}
	char g[5]="%";
	printf("characters count in given text = %.0f\n",len3);
	printf("characters matched = %.0f\n",k);
	
	
	float r=k*100/len3;
	printf("percentage matched = %.2f",r);printf(" %s",g);
	float t= end-start;
	float cpm= (9/t)*60.0;
	  printf("\nYOUR SPEED IS = %.0f WPM\n",cpm);
	
    if(r==100.00)
	{
	    if(cpm<=30)
    printf("YOUR TYPING SPEED IS SLOW, WORK HARDER CHOOSE OPTION 1 FOR TRAINING\n");
    else if(cpm>30&&cpm<=60)
    printf("YOU TYPING SPEED IS AVERAGE, YOU CAN TRAIN IN OPTION 1 TO IMPROVE\n");
    else if(cpm>60&&cpm<80)
    printf("YOUR TYPING SPEED IS FAST\n");
    else if(cpm>80)
    printf("YOU HAVE HANDS OF GOD\n");
	}
	return 0;
}
        
        
 //11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111
 //                             ========== OPTION 2 =============
    else if(choice2==2)
    {
        char lame[500]; 
	time_t start;
	time_t end;
    printf("WELCOME TO MEDIUM HARDNESS MODE");
    char z[500]="Mary and Samantha arrived at the bus station early but waited until noon for the bus.";
    printf("\nMary and Samantha arrived at the bus station early but waited until noon for the bus.\n");
   
	printf("YOUR TIME STARTS IN.. 3 \n");
	sleep(2);
	printf("2 \n");
	sleep(1);
	printf("1 \n");
	sleep(1);
	time(&start);
	
    scanf("%*c%[^\n]s",lame);
	fflush(stdin);
	time(&end);
	float len3=strlen(z);
	float k=0;
	int len2=strlen(lame);
	int j;
		float t= end-start;

	for(j=0;j<len2;j++)
	{
	if(z[j]==lame[j] && t<90)
	{
	    k++;  
	}
	}
	char g[5]="%";
	printf("characters count in given text = %.0f\n",len3);
	printf("characters matched = %.0f\n",k);
	
	
	float r=k*100/len3;
	printf("percentage matched = %.2f",r);printf(" %s",g);
	int wpm= (16/t)*60.0;
    printf("\nYour speed is = %d WPM\n",wpm);
	if(k==100.00)
	{
	    if(wpm<=30)
    printf("YOUR TYPING SPEED IS SLOW, WORK HARDER CHOOSE OPTION 1 FOR TRAINING\n");
    else if(wpm>30&&wpm<=60)
    printf("YOU TYPING SPEED IS AVERAGE, YOU CAN TRAIN IN OPTION 1 TO IMPROVE\n");
    else if(wpm>60&&wpm<80)
    printf("YOUR TYPING SPEED IS FAST\n");
    else if(wpm>80)
    printf("YOU HAVE HANDS OF GOD\n");
	}
	return 0;

    }
//333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333
//                              ------------- CHOICE 3 -------------
    else if(choice2==3)
    {
     //   char hard[500]="Jack struggles to understand Wilder and Murray, because their modes of communication fail to express ideas clearly. However, he perceives that Murray’s language, which is pretentious and academic, cannot truly grasp any notion of the sublime, while Wilder’s seemingly incomprehensible crying mystically captures the sublime even without words.";
        char hard[500];
        FILE *fp;
	fp = fopen ("hardtext.txt", "r");
        fgets(hard, 500, fp);
        printf("%s\n",hard);
        printf("ENTER THE ABOVE SENTENCE\n");
        char hardinput[500];
          time_t starth;
	       time_t endh;
	       	time(&starth);

        scanf("%*c%[^\n]s",hardinput);
       time(&endh);
        int th=endh-starth;
        float wpm2=(45/th)*60;
        if(strcmp(hard,hardinput)==1 && th<30)
        {
        printf("CONGRATS YOU WON THE HARD CHALLENGE\n");
        printf("YOU ARE NOW A TYPING GOD\n");
        
        float wpm2=(45/th)*60;
        printf("YOUR TYPING SPEED IS = ");
        printf("%f\n",wpm2);
        }
        else
        {
        printf("YOU LOST\n");
        printf("YOU NEED MORE PRACTICE, GO TO OPTION 1\n");
        }
  
    }
}
}
