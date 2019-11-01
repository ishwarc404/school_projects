
#include<conio.h>
#include<dos.h>
#include<stdio.h>
#include<iostream.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

void main ()
{

clrscr();

gotoxy(1,28);
cout<<"IRos. An application developed as computer project by "<<"\n"<<"  Ishwar Choudhary and Rohan Mishra of 11A";
delay(2000);


gotoxy(35,15);
cout<<"loading..";
delay(2000);
int tt;
for(tt=0;tt<=100;tt++)
{
gotoxy(37,16);
cout<<tt<<" %";
delay(20);
}

delay(500);


clrscr();

//TIMER KEYWORDS
 char Timer[5][50]={"imer","countdown","clock","watch"};


//CALCULATOR KEYWORDS

char Calculator[24][100]={"alculate","add","Add","ubtract","ultiply","inus","ivi","pow","square","cube","+","-","/","*","0","1","2","3","4","5","6","7","8","9"};

// Employee

 char emp[12][100]={"emp","Emp","oliday","estival","week","onth","day","Day","leave","office"};

// Notes

 char note[6][100]={"note","Note","new","New","jot","write"};

 // Games

 char game[5][100]={"game","Game","play","Play","fun"};
 // Jokes

 char jokes[4][100]={"joke","unny","Joke","ntertain"};

char endchoice;
while(endchoice!='n'||endchoice!='N')
{


clrscr();

char input[200];
gotoxy(30,2);
cout<<"Welcome to IRos";
gotoxy(28,6);
cout<<"How can I help you?";

gotoxy(21,11);
cout<<"Here are some things you can type :";
gotoxy(22,13);
cout<<" You can type'I want to calculate' " ;
gotoxy(20,15);
cout<<"or 'I want to write notes' ";
gotoxy(20,17);
cout<<"or 'I want to play a game' ";
gotoxy(20,19);
cout<<"or 'I want to apply for an employee's holiday'";
gotoxy(20,21);
cout<<"or 'Tell me a funny joke IROS' ";

gotoxy(25,8);
cout<<">> ";
gets(input);



int z;
int i,flag=0,j1=0,j2,j3,j4,j5,j6;
int k,l,m; //variables for timer loop
int o,p;  //variables for calc loop
int a;

for(i=0;input[i]!='\0';i++)
{
    for(z=0;z<5;z++){

	  if(input[i]==Timer[z][0])
	  {
	    j1=0;
	    while(input[i]==Timer[z][j1])
	    {
	    j1++;
	    i++;
	    }

	    if(j1>=strlen(Timer[z]))
	    {
	    flag=2;
	    break;
		    }  }

	  }


    for(l=0;l<25;l++){
	   if(input[i]==Calculator[l][0])
	  {
	    j2=0;
	    while(input[i]==Calculator[l][j2])
	    {
	    j2++;
	    i++;
	    }

	    if(j2>=strlen(Calculator[l]))
	    {
	    flag=1;
	    break;
		   }    }

	  }


     for(o=0;o<12;o++){

	  if(input[i]==emp[o][0])
	  {
	    j3=0;
	    while(input[i]==emp[o][j3])
	    {
	    j3++;
	    i++;
	    }

	    if(j3>=strlen(emp[o]))
	    {
	    flag=5;
	    break;
		    }  }

	  }



	for(m=0;m<7;m++){

	  if(input[i]==note[m][0])
	  {
	    j4=0;
	    while(input[i]==note[m][j4])
	    {
	    j4++;
	    i++;
	    }

	    if(j4>=strlen(note[m]) )
	    {
	    flag=3;
	    break;
		    }  }

	  }


	  for(p=0;p<6;p++){

	  if(input[i]==game[p][0])
	  {
	    j5=0;
	    while(input[i]==game[p][j5])
	    {
	    j5++;
	    i++;
	    }

	    if(j5>=strlen(game[p]))
	    {
	    flag=4;
	    break;
		    }  }

	  }



	  for(a=0;a<10;a++){

	  if(input[i]==jokes[a][0])
	  {
	    j6=0;
	    while(input[i]==jokes[a][j6])
	    {
	    j6++;
	    i++;
	    }

	    if(j6>=strlen(jokes[a]))
	    {
	    flag=6;
	    break;
		    }
		    }
	  }




if(flag!=0)
break;

}



if(flag==1)
    {
clrscr();
gotoxy(25,2);
cout<<"WELCOME TO THE CALCULATOR APP!";
gotoxy(25,5);
cout<<"Enter the number of inputs";
int inputnumber;
gotoxy(34,6);
cin>>inputnumber;
int input[100];
char operation[100];
int k,l; // variables for the loop
int y = 7; //just defining the y coordinate
for( k=0;k<inputnumber;k++)
{ gotoxy(25,y);
  cout<<"Enter input number "<<k+1<<endl;
  gotoxy(30,++y);
  cout<<">> ";
  cin>>input[k];
  ++y;
}
int newy=y+1;
int variable = inputnumber-1; //operators are one less than inputs
gotoxy(20,newy);
cout<<"Enter the operations to be done between the inputs"<<endl;
gotoxy(25,++newy);
cout<<"You can choose from +,-,x,^,/"<<endl;

for(l=0;l<variable;l++)    //loop to accept the operators
{

gotoxy(25,++newy);
cout<<"operator "<<l+1<<" >> ";
cin>>operation[l];
}
gotoxy(25,++newy);
for(int n = 0;n<inputnumber;n++)
{
cout<<input[n]<<operation[n];  // just to check the inputs
}

double finalanswer = input[0];
int counter=0;

for(int i=0,a=0;i<inputnumber,a<variable;i++,a++)
{
   if(operation[a]=='+')
  {
      finalanswer = finalanswer + input[i+1];
      ++counter;
      continue;
  }
  else if(operation[a]=='x')
  {
    finalanswer= finalanswer  * input[i+1];
      ++counter;
      continue;
  }

    else if(operation[a]=='-')
      {
	finalanswer= finalanswer - input[i+1];
	++counter;
	continue;
       }

	else if(operation[a]=='/')
	  {
	    finalanswer = finalanswer / input[i+1];
	    ++counter;
	    continue;
	  }
	    else if(operation[a]=='^')
	      {
	       finalanswer = pow(finalanswer,input[i+1]);
	       ++counter;
	       continue;
	      }

  else
    {clrscr();
    gotoxy(25,2);
    cout<<"WELCOME TO THE CALCULATOR APP!";
    gotoxy(25,5);
  cout<<"There is an error.";
  delay(3000);

  }

}

cout<<" THUS, Finalanswer is "<< finalanswer;
delay(3000);
clrscr();
gotoxy(20,5);
cout<<"Don't hesitate to ask me for anything else";
delay(2000);
clrscr();
gotoxy(25,5);
cout<<"Would you like to continue using IRos ?";
gotoxy(30,7);
cout<<">> ";
cin>>endchoice;

 }

else if(flag==2)
    {
     clrscr();
double seconds;
double minutes;
double sec1,sec2;
gotoxy(25,2);
cout<<"WELCOME TO THE TIMER APP";
gotoxy(27,5);
cout<<"Enter the minutes";
gotoxy(27,6);
cout<<">> ";
cin>>minutes;

gotoxy(25,8);
cout<<"Enter the number of seconds";
gotoxy(25,9);
cout<<">> ";
cin>>seconds;

jump1 :
gotoxy(20,13);
cout<<"Do u want to start with "<<minutes<<"minutes"<<endl;
gotoxy(23,14);
cout<<"and "<<seconds<<" seconds (Y/N)";
char choice;
gotoxy(25,15);
cout<<">> ";
cin>>choice;
clrscr();

if(choice=='y' || choice =='Y')
{//main code // BIGGEST IF
gotoxy(26,5);
cout<<"TIMER STARTED !!";
gotoxy(30,8);
if(seconds<10)
{
cout<<minutes<<":"<<"0"<<seconds;
}
else
cout<<minutes<<":"<<seconds;



//main loop starts
if(seconds>0)
{
for(int i=seconds;i>0;i--)
 {
  if(seconds<10)
    {
      delay(1000);
      gotoxy(26,5);
      cout<<"TIMER STARTED !!";
      gotoxy(30,8);
	cout<<minutes<<":"<<"0"<<--seconds<<endl;
    }
else
    {delay(1000);
      gotoxy(26,5);
      cout<<"TIMER STARTED !!";
      gotoxy(30,8);
      cout<<minutes<<":"<<--seconds<<endl;
    }
 }
while(minutes>0)
{
if(seconds==0)
{
--minutes;
for(int i=59;i>=0;i--)
 {
  delay(1000);
   gotoxy(26,5);
   cout<<"TIMER STARTED !!";
   gotoxy(30,8);
   cout<<minutes<<":"<<i<<endl;
 }
}
}
gotoxy(26,5);
cout<<"TIMER ENDED !!!" ;


}
else
delay(2000);
clrscr();
gotoxy(25,5);
cout<<"Feel free to ask me anything else";
delay(2000);
clrscr();
gotoxy(25,5);
cout<<"Would you like to continue using IRos ?";
gotoxy(30,7);
cout<<">> ";
cin>>endchoice;
}
    }

else if(flag==3)
    {
      clrscr();
char choice;  int count=0;     int i,j;          char echoice;
char choice_f = 'n';  char notes[20][50];//20=no of notes 50=size of each note
 gotoxy(25,2);
 cout<<"WELCOME TO THE NOTES APP!";
 gotoxy(20,5);
 cout<<"Do you want to enter notes(y/n)"<<"\n";
 gotoxy(27,6);
 cout<<">> ";
 cin>>choice ;
do{

 if((choice=='y')|| (choice=='Y'))
 {
 gotoxy(25,8);
 cout<<"Enter notes now"<<"\n";
 gotoxy(20,10);
 cout<<">> ";
 gets(notes[count]);
 count++;
 gotoxy(25,11);
 cout<<"Notes saved";
 }
 else
 {
 gotoxy(25,10);
 cout<<"No problem";
 }


  clrscr();
  gotoxy(25,2);
  cout<<"WELCOME TO THE NOTES APP!";
  gotoxy(20,5);
  cout<<"Do you wish to edit your notes?(y/n)"<<"\n";
  char edchice;
  gotoxy(25,7);
  cout<<">> ";
  cin>>edchice;
  if((edchice=='y')||(edchice=='Y'))
 {
 do{
 gotoxy(15,9);
 cout<<"Enter which  notes are to be edited( 1 for first, 2 for second)" ;
 cout<<"\n";
 int l;
 gotoxy(25,10);
 cout<<">> ";
 cin>>l;
 cout<<"\n";
 gotoxy(20,13);
 cout<<">> ";
 gets(notes[l-1]);
 gotoxy(23,15);
 cout<<"New notes saved"<<"\n";
 gotoxy(22,17);
 cout<<"Do you want to keep editing?(y/n)"<<"\n";
 cin>>echoice;
 }while((echoice=='y')||(echoice=='Y'));
 }


  clrscr();
  gotoxy(25,2);
  cout<<"WELCOME TO THE NOTES APP!";
  gotoxy(22,5);
  cout<<"Do you wish to view your notes?(y/n)";
  cout<<"\n";
  gotoxy(25,6);
  cout<<">> ";
  char chc;
  cin>>chc;
 if((chc=='y') || (chc=='Y'))
 {
  gotoxy(25,8);
  cout<<"Notes are"<<"\n";
 for(i=0;i<count;i++)
 {
 gotoxy(20,10);
 puts(notes[i]);
 }
 }
 else
 {
 cout<<"";
 }

//clrscr();
  gotoxy(25,2);
  cout<<"WELCOME TO THE NOTES APP!";
  gotoxy(20,15);
cout<<" Would you like to continue?(y/n)"<<"\n";
gotoxy(25,17);
cout<<">> ";
cin>>choice_f;
}while(choice_f=='y'||choice_f=='Y');

clrscr();
gotoxy(25,5);
cout<<"Hope to see you again soon";
delay(2000);
clrscr();
gotoxy(25,5);
cout<<"Would you like to continue using IRos ?";
gotoxy(30,7);
cout<<">> ";
cin>>endchoice;


    }
else if(flag==4)
    {
     clrscr();
    gotoxy(25,5);
    cout<<"WELCOME TO THE CRICKET APP!"<<endl;
    int user;

    int cpu[6];  // these are the 6 numbers
     cpu[0]=1;
     cpu[1]=2;
     cpu[2]=3;
     cpu[3]=4;
     cpu[4]=5;
     cpu[5]=6;
     start1 :
     gotoxy(20,8);
     cout<<"WOULD YOU LIKE TO BAT FIRST ? (Y/N)";
     char choice;
     gotoxy(25,9);
     cout<<">> ";
     cin>>choice;
     int total=0,newtotal=0;

     int wickets,oldwickets,newwickets;

     if(choice=='y'||choice=='Y')
     {

     clrscr();
     gotoxy(25,5);
     cout<<"YOU ARE BATTING FIRST";
     gotoxy(23,7);
     cout<<"Enter the number of wickets";  // to accept the number of wickets // need to add a coin toss random func
     int wickets;
     gotoxy(25,8);
     cout<<">> ";
     cin>>wickets;

     int i;

      oldwickets=wickets;  // old wickets is the number of wickets that the user has

while(oldwickets!=0)
{


     for(i=0;i<6;i++) // to randomize the value of i; // need to add the random function.
     {

      if(user!=cpu[i])      // to check if the user number and cpu number match or not
       {   clrscr();
           gotoxy(25,5);
           cout<<"1st INNINGS";
           gotoxy(25,7);
		   cout<<"Enter the number :";
		   cin>>user;

if(user>6 && user<0)
{  gotoxy(25,9);
  cout<<"Enter a number from 0 to 6"<<endl;
  cout<<"Game will start again";
  goto start1;
}

     total = total + user;   // adding up the user score as he plays
      }
      else break;
     }
gotoxy(25,10);
cout<<"U LOST A WICKET";
--oldwickets;               // subtracting the number of wickets when user == cpu[i]
 }delay(2000);
     clrscr();
     gotoxy(25,5);
     cout<<"INNINGS BREAK";
    delay(1000);
     gotoxy(25,7);
     cout<<"Total score is "<<total<<endl;
     gotoxy(25,9);
     cout<<"Target is "<<total+1;
    delay(3000);       // displaying the total score and target score
      newtotal=0;

    int j;
 newwickets=wickets;       // new wickets is the number of wickts that the cpu has
  while(newwickets!=0)
 {
     for(j=0;j<6;j++) // to randomize the value of j;  //  need to add the random function
     {

      if(cpu[j]!=user)
       {
           clrscr();
           gotoxy(20,5);
           cout<<"2nd INNINGS and you are now bowling";
           gotoxy(25,7);
	  cout<<"Enter the number  ";        // same logic used here just that the user is now the cpu and the cpu is the user
	  newtotal = newtotal + cpu[j];
	  if(newtotal>total)    // to check if the cpu score is more than the user score
	  {break;}
      }


     }
   gotoxy(25,10);
   cout<<"THE CPU LOST A WICKET!"<<endl;
   --newwickets;

  }

} // if ends

else  // else starts, this is when the cpu is batting first.
{    clrscr();
     gotoxy(25,5);
     cout<<"THE CPU IS BATTING FIRST";

     gotoxy(25,7);
     cout<<"Enter the number of wickets :";  // to accept the number of wickets
     cin>>wickets;


       newtotal=0;

      int j;
     newwickets=wickets;       // new wickets is the number of wickts that the cpu has
  while(newwickets!=0)
 {
     for(j=0;j<6;j++) // to randomize the value of j;  //  need to add the random function
     {

      if(cpu[j]!=user)
       {
           clrscr();
           gotoxy(25,5);
           cout<<"1st INNINGS";
           gotoxy(25,7);
	  cout<<"Enter the number  ";
	  cin>>user;                              // same logic used here just that the user is now the cpu and the cpu is the user
	  newtotal = newtotal + cpu[j];

      }

      else break;

     }
   gotoxy(25,10);
   cout<<"THE CPU LOST A WICKET!"<<endl;
   --newwickets;

  }
    delay(2000);
     clrscr();
     gotoxy(25,5);
     cout<<"INNINGS BREAK";
     delay(1000);
     gotoxy(25,7);
     cout<<"Total score is "<<newtotal;
     gotoxy(25,9);
     cout<<"Target is "<<newtotal+1<<endl;         // displaying the total score and target score
     delay(3000);



     int i;
      total =0;
      oldwickets=wickets;  // old wickets is the number of wickets that the user has

while(oldwickets!=0)
{


     for(i=0;i<6;i++) // to randomize the value of i; // need to add the random function.
     {

      if(user!=cpu[i])      // to check if the user number and cpu number match or not
       {
         clrscr();
           gotoxy(20,5);
           cout<<"2nd INNINGS and you are now batting";
           gotoxy(25,7);
	 cout<<"Enter the number  ";
	 cin>>user;
 if(user>6||user<0)
 {   gotoxy(25,9);
     cout<<"Enter number from 0 to 6";
     goto start1 ;
 }

     total = total + user;// adding up the user score as he plays

       }

       if(total>newtotal)
       {
	   break;}

     }
 gotoxy(25,10);
cout<<"U LOST A WICKET";
--oldwickets;               // subtracting the number of wickets when user == cpu[i]
 }




}

delay(2000);

if(newtotal>total)
{   clrscr();
    gotoxy(25,5);
    cout<<"You lost !!";
}
else if (newtotal<total)
{   clrscr();
    gotoxy(25,5);
    cout<<"You won !!";
}
else
    clrscr();
    gotoxy(25,5);
    cout<<"Draw match !!";

delay(3000);
clrscr();
gotoxy(25,5);
cout<<"Please use me again";
clrscr();
gotoxy(25,5);
cout<<"Would you like to continue using IRos ?";
gotoxy(30,7);
cout<<">> ";
cin>>endchoice;
    }


else if(flag==5)
    {
clrscr();
struct emp{
char name[50];
float sal;
char holstatus;
char rank[20];
int daysleft;
int daystaken;
int empno;
}e[15];



char aer;
int i,j,x,y;
gotoxy(25,2);
cout<<"WELCOME TO THE EMPLOYEE HOLIDAY APP!";
gotoxy(20,5);
cout<<"Would you like to input any new employees?(y/n)"<<"\n";
char choice;
gotoxy(27,6);
cout<<">> ";
cin>>choice;


if((choice=='y')||(choice=='Y'))
{



clrscr();
gotoxy(25,2);
cout<<"WELCOME TO THE EMPLOYEE HOLIDAY APP!";

gotoxy(20,5);
cout<<"Enter no of employes whose details are being uploaded."<<"\n";
gotoxy(27,6);
cout<<">> ";
cin>>x;


for(j=0;j<x;j++)
 {


	// clrscr();
	 gotoxy(25,2);
	 cout<<"WELCOME TO THE EMPLOYEE HOLIDAY APP!";

	 gotoxy(4,5);
	 cout<<"Enter name,salary,status of holiday allowance(y/n), position, holidays left then holidays taken"<<"\n";

gotoxy(25,7);
cout<<"Enter name "<<j+1;
gotoxy(25,8);
cout<<">> ";
gets(e[j].name);
gotoxy(25,10);
cout<<"Enter salary of "<<(e[j].name);
gotoxy(25,11);
cout<<">> ";
cin>>e[j].sal;
gotoxy(25,13);	                         // loop to just accept the details
cout<<"Enter holiday status of "<<(e[j].name);
gotoxy(25,14);
cout<<">> ";
cin>>e[j].holstatus;
gotoxy(25,16);
cout<<"Enter rank of "<<(e[j].name);
gotoxy(25,17);
cout<<">> ";
gets(e[j].rank);
gotoxy(25,19);
cout<<"Enter days left in holiday allowance of "<<(e[j].name);
gotoxy(25,20);
cout<<">> ";
cin>>e[j].daysleft;
gotoxy(25,22);
cout<<"Enter holidays taken by ";
puts(e[j].name);
gotoxy(25,23);
cout<<">> ";
cin>>e[j].daystaken;
gotoxy(25,25);
cout<<"Enter emplpyee number";
gotoxy(25,26);
cout<<">>";
cin>>e[j].empno;
}


 int q; //variable for the loop
// clrscr();

 cout<<"WELCOME TO THE EMPLOYEE HOLIDAY APP! Details below";

cout<<" Details are";

for(q=0;q<x;q++)
 {
  puts(e[q].name);
  cout<<"\t";                   //loop to output the details
  cout<<e[q].sal<<"\t";
  cout<<e[q].holstatus<<"\t";
  puts(e[q].rank);
  cout<<"\t";
  cout<<e[q].daysleft<<"\t";
  cout<<e[q].daystaken<<"\t";
  cout<<"\n";
  cout<<e[q].empno;
 }
} // if loop ends
/*else
{
cout<<"Come back later";
} */

do {
clrscr();
gotoxy(25,2);
cout<<"WELCOME TO THE EMPLOYEE HOLIDAY APP!";		    //Editing empm section
gotoxy(20,5);
cout<<" Do you want to edit the employee details(y/n)";// Put a do-while to keep doing till user wnts to stop editing
char edit;
gotoxy(25,6);
cout<<">> ";
cin>>edit;
if(edit=='y')
{
  clrscr();
  gotoxy(25,2);
  cout<<"WELCOME TO THE EMPLOYEE HOLIDAY APP!";
  gotoxy(25,5);

  cout<<"Enter number of employee";
  int namer;
  gotoxy(22,7);
  cout<<">> ";
  cin>>namer;
  gotoxy(8,9);
  cout<<"1=Edit salary, 2=Edit holiday status, 3=Edit rank, 4= Days left, 5=Days taken";
  int r,s;
  gotoxy(25,10);

  cout<<">> ";
  cin>>s;


  clrscr();
  gotoxy(25,2);
  cout<<"WELCOME TO THE EMPLOYEE HOLIDAY APP!";



  for(r=0;r<x;r++)             //To check if name is equal to emp name
  {
  if( e[r].empno==namer)  // EMP NO





   {
 switch(s)
       {
	case 1:
		gotoxy(25,5);
		  cout<<"Enter new salary";
			int salne;
		gotoxy(25,6);
		  cout<<">> ";
			cin>>salne;
	e[r].sal=salne;
	break;

	case 2:
		    gotoxy(25,8);
		    cout<<"Enter new holiday status";
				char newstat;
		    gotoxy(25,9);
		    cout<<">> ";
				cin>>newstat;
			  e[r].holstatus=newstat;
			  break;
	case 3:

		    gotoxy(25,11);
				cout<<"Enter new rank";
				char newrnk[30];
		    gotoxy(25,12);
		    cout<<">> ";
		    gets(e[r].rank);
				break;

  case 4:
		gotoxy(25,14);
				cout<<"Enter new number of holidays left";
				int newdys;
		    gotoxy(25,15);
		    cout<<">> ";
			  cin>>newdys;
			  e[r].daysleft=newdys;
				break;

	case 5:
	gotoxy(25,17);
			cout<<" Enter new number of holidays taken";
				int newtks;
		    gotoxy(25,18);
		    cout<<">> ";
		    cin>>newtks;
				e[r].daystaken=newtks;
				break;
	default:
	       gotoxy(25,5);
	       cout<<" Enter a valid editing option";

	 }
	   }
   }
}


clrscr();
gotoxy(25,2);
cout<<"WELCOME TO THE EMPLOYEE HOLIDAY APP!";


gotoxy(20,5);
cout<<"Enter employee number of person to operate on";
int no;
gotoxy(20,6);
cout<<">> ";
cin>>no;
  int c,f;

gotoxy(20,8);
cout<<"Enter number of days applying holiday for";
int nodays;
gotoxy(25,9);
cout<<">> ";
cin>>nodays;
for(f=0;f<x;f++)
{
if( no==e[f].empno)   // CHANGE THIS TO EMP NO
{

   if((e[f].holstatus=='y') &&( e[f].daysleft<=nodays))
	 {
   e[f].daystaken=nodays;
   e[f].daysleft=e[f].daysleft-nodays;
   e[f].holstatus='n';

   clrscr();
   gotoxy(25,2);
   cout<<"WELCOME TO THE EMPLOYEE HOLIDAY APP!";
   gotoxy(22,5);
   cout<<"New details of "<<e[f].name<<"are :";
   gotoxy(22,6);
   cout<<"Name :"; puts(e[f].name);cout<<"\n";
   gotoxy(22,7);
   cout<<"Salary :"<<e[f].sal<<"\n";
   gotoxy(22,8);
   cout<<"Holiday Status :"<<e[f].holstatus<<"\n";
   gotoxy(22,9);
   cout<<"Rank :"<<e[f].rank<<"\n";
   gotoxy(22,10);
   cout<<"Days Left :"<<e[f].daysleft<<"\n";
   gotoxy(22,11);
   cout<<"Days taken :"<<e[f].daystaken<<"\n";
   }
   else
   {
     clrscr();
     gotoxy(25,2);
     cout<<"WELCOME TO THE EMPLOYEE HOLIDAY APP!";
   gotoxy(20,5);
   cout<<"Employee is  not eligible for specidied number of holidays";
   }

}
else
{clrscr();
gotoxy(25,2);
cout<<"WELCOME TO THE EMPLOYEE HOLIDAY APP!";
gotoxy(25,5);
cout<<" EMployee not found";
}
}                                          // Holiday app done, need more cases

clrscr();
gotoxy(25,2);
cout<<"WELCOME TO THE EMPLOYEE HOLIDAY APP!";


  gotoxy(23,5);
  cout<<"Final table is :";   // Format the table



for(i=0;i<x;i++)
{

  cout<<"Name :"<<e[f].name<<"\n";
  gotoxy(22,7);
  cout<<"Salary :"<<e[f].sal<<"\n";
  gotoxy(22,8);
  cout<<"Holiday Status :"<<e[f].holstatus<<"\n";
  gotoxy(22,9);
  cout<<"Rank :"<<e[f].rank<<"\n";
  gotoxy(22,10);
  cout<<"Days Left :"<<e[f].daysleft<<"\n";
  gotoxy(22,11);
  cout<<"Days taken :"<<e[f].daystaken<<"\n";
}
gotoxy(22,14);
cout<<" Do you wish to continue(y/n)";
cin>>aer;
}while(aer=='y');

cout<<" Don't hesitte to ask me for anyting else";
delay(2000);
clrscr();
gotoxy(25,5);
cout<<"Would you like to continue using IRos ?";
gotoxy(30,7);
cout<<">> ";
cin>>endchoice;


}
else if(flag==6)
    {
cout<<"Customer:Waiter, theres a fly in my soup"<<"\n"<<"Waiter: That's all right, he won't drink much.";

cout<<"Lady: Is this my train?"<<"\n"<<"Stationmaster:No, it belongs to the Railway Company.";

cout<<"Today, when a man asked me for a dontation for the local swimming pool,I gave him a glass of water.";

cout<<"Politicians and diapers both have one thing in common, they both need to be changed regularly.";

cout<<"When an employmen application asks who is to be notified in case of an emergency, I write, 'A good doctor'.";

cout<<"\n"<<"Run me again next time you need anything.";

clrscr();
gotoxy(25,5);
cout<<"Would you like to continue using IRos ?";
gotoxy(30,7);
cout<<">> ";
cin>>endchoice;
    }

else
     {
	clrscr();
      gotoxy(25,5);
      cout<<"Enter valid keyword next time";
     }
delay(3000);
clrscr();
gotoxy(25,5);
cout<<"Would you like to continue using IRos ?";
gotoxy(30,7);
cout<<">> ";
cin>>endchoice;
}

 /*clrscr();
 cout<<"Would you like to run the search again ?";
 cin>>dowhilechoice;
 if(dowhilechoice=='y'||dowhilechoice=='Y');
   {goto starting;}*/

delay(200);


getch();
}













