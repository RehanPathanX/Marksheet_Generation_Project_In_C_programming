//////////////////////////////MARKSHEET GENERATION PROJECT//////////////////////
#include"stdio.h"
#include"conio.h"
#include"string.h"
#include"dos.h"

void Home_interface();
void data_input();
void Mark_sheet();

char Fname[30],Mname[30],Lname[30],M_name[50],Schoolname[100],DOB[15],grade,result[5];
int cls,Hindi,Science,Social,Marathi,English,Mathematics;
int total;
int rollno;
float per;
char hg,mg,eg,sg,ssg,mtg;

void main()
{
	int choice;
	clrscr();
	Home_interface();

	printf("\n\n\tEnter Your Choice : ");
	scanf("%d",&choice);

	if(choice==1)
	{
	    data_input();
	}
	else if(choice==2)
	{
	    data_input();
	    Mark_sheet();
	}
	else
	{
		printf("\n\n\tInvalid Choice.....!");
	}


getch();
}

void Home_interface()
{

	printf("\n\t***************************************************************");
	printf("\n\t||                                                           ||");
	printf("\n\t||          WELCOME TO MARKSHEET GENERATION SYSTEM	     ||");
	printf("\n\t||                                                           ||");
	printf("\n\t***************************************************************\n");

	printf("\n\tPRESS 1 For For Data Entry OF Student .\n\tPREES 2 Making Marksheet Of Student .");

}

void data_input()
{
	int c=0;
	clrscr();

	printf("\n\t            _______________________            ");
	printf("\n\t____________| START ENTERING DATA |____________");
	printf("\n\t            |_____________________|            ");

	printf("\n\n\tEnter Student Roll Number : ");
	scanf("%d",&rollno);

	printf("\n\n\tEnter Student's First Name : ");
	fflush(stdin);
	gets(Fname);

	printf("\n\n\tEnter Student's Middle Name : ");
	fflush(stdin);
	gets(Mname);

	printf("\n\n\tEnter Student's Last Name : ");
	fflush(stdin);
	gets(Lname);

	printf("\n\n\tEnter Mother's Name : ");
	fflush(stdin);
	gets(M_name);

	printf("\n\n\tEnter School Name : ");
	fflush(stdin);
	gets(Schoolname);

	printf("\n\n\tEnter Date Of Birth : ");
	fflush(stdin);
	gets(DOB);

	printf("\n\n\tEnter Class : ");
	scanf("%d",&cls);

	printf("\n\n\tEnter Marks Of All Subject .");
	delay(1500);
	r:
	printf("\n\n\tHindi : ");
	scanf("%d",&Hindi);
	if(Hindi<1 || Hindi>100)
	{
		printf("\n\tInvalid Marks.....!");
		delay(1500);
		printf("\n\n\tYou have to Enter Agian Marks Of Hindi Subject .");
		delay(1000);
		goto r;
	}
	else if(Hindi>=90)
	{
		hg='A';
		c++;
	}
	else if(Hindi>=80 && Hindi<90)
	{
		hg='B';
	}
	else if(Hindi>=70 && Hindi<80)
	{
		hg='C';
	}
	else if(Hindi>=60 && Hindi<70)
	{
		hg='D';
	}
	else
	{
		hg='E';
	}

	r1:
	printf("\n\n\tMarathi : ");
	scanf("%d",&Marathi);
	if(Marathi<1 || Marathi>100)
	{
		printf("\n\n\tInvalid Marks.....!");
		delay(1500);
		printf("\n\n\tYou have to Enter Agian Marks Of Marathi Subject .");
		delay(1000);
		goto r1;
	}
	else if(Marathi>=90)
	{
		mg='A'; c++;
	}
	else if(Marathi>=80 && Marathi<90)
	{
		mg='B';
	}
	else if(Marathi>=70 && Marathi<80)
	{
		mg='C';
	}
	else if(Marathi>=60 && Marathi<70)
	{
		mg='D';
	}
	else
	{
		mg='E';
	}

	r2:
	printf("\n\n\tEnglish : ");
	scanf("%d",&English);
	if(English<1 || English>100)
	{
		printf("\n\n\tInvalid Marks.....!");
		delay(1500);
		printf("\n\n\tYou have to Enter Agian Marks Of Marathi Subject .");
		delay(1000);
		goto r2;
	}
	else if(English>=90)
	{
		eg='A'; c++;
	}
	else if(English>=80 && English<90)
	{
		eg='B';
	}
	else if(English>=70 && English<80)
	{
		eg='C';
	}
	else if(English>=60 && English<70)
	{
		eg='D';
	}
	else
	{
		eg='E';
	}

	r3:
	printf("\n\n\tScience : ");
	scanf("%d",&Science);
	if(Science<1 || Science>100)
	{
		printf("\n\n\tInvalid Marks.....!");
		delay(1500);
		printf("\n\n\tYou have to Enter Agian Marks Of Science Subject .");
		delay(1000);
		goto r3;
	}
	else if(Science>=90)
	{
		sg='A'; c++;
	}
	else if(Science>=80 && Science<90)
	{
		sg='B';
	}
	else if(Science>=70 && Science<80)
	{
		sg='C';
	}
	else if(Science>=60 && Science<70)
	{
		sg='D';
	}
	else
	{
		sg='E';
	}

	r4:
	printf("\n\n\tSocial Science : ");
	scanf("%d",&Social);
	if(Social<1 || Social>100)
	{
		printf("\n\n\tInvalid Marks.....!");
		delay(1500);
		printf("\n\n\tYou have to Enter Agian Marks Of Social Science Subject .");
		delay(1000);
		goto r4;
	}
	else if(Social>=90)
	{
		ssg='A'; c++;
	}
	else if(Social>=80 && Social<90)
	{
		ssg='B';
	}
	else if(Social>=70 && Social<80)
	{
		ssg='C';
	}
	else if(Social>=60 && Social<70)
	{
		ssg='D';
	}
	else
	{
		ssg='E';
	}

	r5:
	printf("\n\n\tMathematics : ");
	scanf("%d",&Mathematics);
	if(Mathematics<1 || Mathematics>100)
	{
		printf("\n\n\tInvalid Marks.....!");
		delay(1500);
		printf("\n\n\tYou have to Enter Agian Marks Of Mathematics Subject .");
		delay(1000);
		goto r5;
	}
	else if(Mathematics>=90)
	{
		mtg='A'; c++;
	}
	else if(Mathematics>=80 && Mathematics<90)
	{
		mtg='B';
	}
	else if(Mathematics>=70 && Mathematics<80)
	{
		mtg='C';
	}
	else if(Mathematics>=60 && Mathematics<70)
	{
		mtg='D';
	}
	else
	{
		mtg='E';
	}

       total=Hindi+English+Marathi+Science+Social+Mathematics;
       total=(float)total;
       per= total/6.0;

       if((total>=210) || (Hindi>=35) || (English>=35) || (Marathi>=35) || (Science>=35) || (Social>=35) || (Mathematics>=35))
       {
		strcpy(result,"PASS");
       }
       else
       {
		 strcpy(result,"FAIL");
       }


	if(hg==mg==eg==sg==ssg==mtg=='A' || c==6)
	{
		grade='A';
	}
	else if(c==5)
	{
		grade='A';
	}
	else if(c==4)
	{
		grade='B';
	}
	else if(c==3)
	{
		grade='C';
	}
	else if(c==2)
	{
		grade='D';
	}
	else
	{
		grade='E';
	}


}

void Mark_sheet()
{

	clrscr();
printf("\n|*************************************************************************|");
printf("\n|     MAHARASHTARA BOARD HIGH SCHOOL EXAMINATION CIRTIFICATE              |");
printf("\n|*************************************************************************|");
printf("\n|									  |");
printf("\n|									  |");
printf("\n|									  |");
printf("\n|									  |");
printf("\n|									  |");
printf("\n|									  |");
printf("\n|-------------------------------------------------------------------------|");
printf("\n|    SUBJECTS		      MAX MARKS	    MARKS OBTAINED       GRADE    |");
printf("\n|-------------------------------------------------------------------------|");
printf("\n|    HINDI                      100              %d                %c      |",Hindi,hg);
printf("\n|    MARATHI 		        100              %d                %c      |",Marathi,mg);
printf("\n|    ENGLISH 			100              %d                %c      |",English,eg);
printf("\n|    MATHAMATICS		100              %d                %c      |",Mathematics,mtg);
printf("\n|    SCIENCE			100              %d                %c      |",Science,sg);
printf("\n|    SOICIAL SCIENCE		100              %d                %c      |",Social,ssg);
printf("\n|-------------------------------------------------------------------------|");
printf("\n|     Total :     	     	600		 %d  PERCENTAGE : %.2f  |",total,per);
printf("\t|-------------------------------------------------------------------------|");
printf("\n|  RESULT : %s IN DIVISION 						  |",result);
printf("\n|  GRADE  :  %c				      		          	  |",grade);
printf("\n|-------------------------------------------------------------------------|");



gotoxy(5,5);
printf("\n|  Name Of Student : %s %s %s           Roll Number : %d",Fname,Mname,Lname,rollno);

gotoxy(6,6);
printf("\n|  Father's Name : %s %s           	     Class : %d th",Mname,Lname,cls);

gotoxy(7,7);
printf("\n|  Mother's Name : %s ",M_name);

gotoxy(8,8);
printf("\n|  Date Of Birth : %s ",DOB);

gotoxy(8,8);
printf("\n|  School Name : %s\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t",Schoolname);

getch();
}
