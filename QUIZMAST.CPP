#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<stdio.h>
#include<dos.h>



	void main()

     {
	clrscr();

	 cout<<endl<<endl;
	 cout<<"                           "<<"Welcome To Quizmasters";
	 cout<<endl;
	 cout<<endl;
	 cout<<endl;
	 delay(1000);
	 cout<<"        Goodmorning user, please enter your details...";
	 cout<<endl;
	 cout<<endl;
	 delay(1000);
	 cout<<"Name :  ";
	 char username[20];
	 gets(username);
	 cout<<endl;
	 cout<<"Age :  ";
	 int age;
	 cin>>age;
	 cout<<endl;
	 clrscr();
	 cout<<endl;
	 cout<<endl;
	 delay(1000);
	 cout<<"       Okay, let us move on to the game";
	 cout<<endl;
	 cout<<endl;
	 delay(1000);
	 cout<<"       Enter the amount you want to start with..(greater than 0, please): Rs";
	 int prize;
	 cin>>prize;
	 delay(2000);
	 clrscr();
	 cout<<endl;
	 cout<<endl;
	 cout<<"      Choose your cataegory:  ";
	 cout<<endl<<endl<<endl;
	 delay(1000);
	 cout<<" (1)  Google                      (2) Microsoft ";
	 cout<<endl<<endl;
	 cout<<" (3)  Apple                       (4) Facebook           ";
	 cout<<endl<<endl<<endl;
	 int cat;
	 delay(1500);
	 cout<<"Choose the respective number:  ";
	 cin>>cat;
	 cout<<endl;
	 delay(1500);
	 clrscr();
	 if (cat==1)
	 {
	 cout<<endl;
	 cout<<endl;
	 cout<<"    You have chosen Google as your cataegory ";
	 delay(1500);
	 clrscr();
	 cout<<endl;
	 cout<<"      Let us start the game..."<<endl<<endl<<"      All the best"<<endl<<endl;
	 delay(1000);
	 cout<<"      And your first question is....";
	 delay(1500);
	 clrscr();
	 cout<<endl<<endl;
	 cout<<"      Question 1";
	 cout<<endl;
	 delay(1000);
	 cout<<"             In which year did Google.com register?"<<endl;
	 cout<<endl;
	 cout<<endl;
	 delay(1000);
	 cout<<"(1) 1993                       (2) 1995"<<endl;
	 cout<<endl;
	 cout<<"(3) 1997                       (4) 1990"<<endl;
	 cout<<endl;
	 delay(2000);
	 cout<<"Answer the question";
	 cout<<endl;
	 cout<<"Your option is... : ";
	 int opt;
	 cin>>opt;
	 cout<<endl;
	 cout<<endl;
	 cout<<"Checking";
	 for(int i=0; i<4; i++)
	 {
	  delay(1000);
	  cout<<".";
	 }
	 cout<<endl;
	 cout<<endl;
	 if (opt==3)
		{prize=prize*10;
		cout<<"Your answer is absolutely correct"<<endl;delay(500);
		cout<<endl;
		cout<<"And you have won: Rs"<<prize;delay(500);
		cout<<endl<<endl;delay(500);
		cout<<"Congratulatons";
		delay(4000);
		clrscr();
		}
	 else
		{ prize=prize-10;
		cout<<"And your answer is wrong... :(";
		cout<<endl;
		delay(500);
		cout<<"But the game has just started"<<endl<<endl;delay(500);
		cout<<"No problem, you can continue..."<<endl<<endl;delay(500);
		cout<<"Amount you have with you is : Rs"<<prize;delay(4000);
		clrscr();
		}
	 cout<<endl<<endl<<endl;
	 cout<<"          Okay, let us move to the next question now ";
	 delay(3000);
	 clrscr();
	 cout<<endl;
	 cout<<"Question 2";
	 cout<<endl;
	 cout<<"             ?";
	 cout<<endl;
	 cout<<endl;
	 cout<<"(1)            (2)";
	 cout<<endl;
	 cout<<endl;
	 cout<<"(3)            (4) "<<endl<<endl;
	 cout<<endl;
	 delay(1000);
	 cout<<"Think carefully";
	 cout<<endl;delay(1000);
	 cout<<"Now, choose your answer.. : ";
	 cin>>opt;
	 cout<<endl<<endl;
	 if (opt==1)
	 {      prize=prize*2;
		cout<<"You are absolutely right.."<<endl;delay(500);
		cout<<"You now have a sum of  $"<<prize<<"  with you"<<endl;delay(500);

		cout<<"Well played "<<username;delay(4000);
		clrscr();
	 }
	 else
	 {      prize=prize-10;
		cout<<"Okay, that was wrong"<<endl;delay(500);
		cout<<"But do not worry, it is a long journey still"<<endl;delay(500);
		cout<<"The amount of money you now have is : Rs"<<prize<<endl;delay(500);
		cout<<"Better luck next time "<<username;delay(4000);
		clrscr();
	 }
	 cout<<endl;
	 cout<<endl;

	 cout<<"        And your third question is....";
	 delay(2000);
	 clrscr();
	 cout<<endl;
	 cout<<"      Question 3:";
	 cout<<endl;
	 delay(1000);
	 cout<<"                         ? ";
	 cout<<endl;
	 cout<<endl;
	 cout<<"    (1)         (2) ";
	 cout<<endl;
	 cout<<"    (3)         (4) ";
	 cout<<endl;
	 cout<<endl;
	 delay(1000);
	 cout<<"So what option do you choose?";
	 cout<<endl;
	 cout<<"Option : ";
	 cin>>opt;

	 if (opt==2)
	 {prize=prize*2;
	 cout<<endl;
	 cout<<endl;
	 delay(500);
	 cout<<"Congratulations";
	 delay(500);
	 cout<<endl;
	 cout<<"You have answered the question correctly";
	 cout<<endl;delay(500);
	 cout<<"And now you have Rs."<<prize<<"  with you";
	 delay(4000);
	 }
	 else
	 {prize=prize-20;
	 delay(500);
	 cout<<"And it is a wrong answer";
	 cout<<endl;delay(500);
	 cout<<"So now you have Rs"<<prize<<" with you";delay(500);
	 cout<<"No problem, you still have a chance";delay(4000);
	 }
	 clrscr();
	 delay(1000);
	 cout<<endl<<endl;
	 cout<<"      Let us move on to the next question";
	 cout<<endl;
	 cout<<endl;
	 delay(1000);
	 cout<<"      So, the next question is Question number 4";
	 delay(1000);
	 clrscr();
	 cout<<endl;
	 cout<<endl;
	 delay(500);
	 cout<<"Question 4:";
	 cout<<endl;delay(500);
	 cout<<"             ";
	 cout<<endl;
	 cout<<" (1)                   (2)";
	 cout<<endl;
	 cout<<" (3)                   (4)";
	 cout<<endl;
	 cout<<endl;
	 delay(1000);
	 cout<<"Think carefully, this is your second last question";
	 cout<<endl;
	 cout<<endl;delay(500);
	 cout<<"So your answer is..";
	 cout<<endl<<endl; delay(1000);
	 cout<<"Option Number :  ";
	 cin>>opt;
	 if(opt==4)
	 {
	 prize=prize*2;
	 cout<<endl;
	 cout<<endl;
	 cout<<"And your answer of the question is absolutely correct"<<endl;
	 delay(500);
	 cout<<"Well played"<<endl;
	 delay(500);
	 cout<<"And now you have an amount of Rs."<<prize<<" with you"<<endl;
	 delay(500);
	 cout<<"Congratulations";
	 delay(4000);
	 }
	 else
	 {
	 prize=prize-10;
	 delay(500);
	 cout<<"And you messed it up, wrong answer"<<endl;
	 delay(500);
	 cout<<"No worries, you still have a last chnace.."<<endl;
	 delay(500);
	 cout<<"The Last and the Final QUESTION, that could get you ";
	 delay(500);
	 cout<<prize*10<<" Rupees is yet to come";
	 delay(4000);
	 }
	 clrscr();
	 cout<<endl;
	 cout<<endl;
	 cout<<endl;
	 cout<<endl;
	 cout<<"                 THE"<<endl<<endl;delay(1000);
	 cout<<"                 LAST"<<endl<<endl;          delay(1000);
	 cout<<"                 QUESTION"<<endl<<endl;      delay(4000);
	 clrscr();
	 cout<<endl;
	 cout<<endl;
	 cout<<"So this is your last question..."<<endl;delay(1500);
	 cout<<"If you answer this correctly, you can win ";
	 cout<<prize*10<<" Rupees";                         delay(1500);
	 cout<<"So think carefully before you answer, this is your last chance";
	 cout<<endl;delay(1500);
	 cout<<"Question 5";
	 cout<<"           " ;
	 cout<<endl;
	 cout<<endl;
	 cout<<"(1)             (2)";
	 cout<<endl;
	 cout<<"(3)             (4)";
	 cout<<endl;delay(2500);
	 cout<<"      Final Question, Final Answer"<<endl;
	 cout<<"      THINK TWICE"<<endl;delay(1000);
	 cout<<"      Now Answer"<<endl<<endl;delay(1000);
	 cout<<" Option No. : ";
	 cin>>opt;
	 delay(1000);
	 clrscr();
	 if (opt==1)
	 {
	  prize=prize*10;
	  cout<<endl;
	  cout<<endl;
	  cout<<endl;
	  delay(500);
	  cout<<"        CONGRATULATIONS";
	  cout<<endl;delay(1000);
	  cout<<"        You have answered the question correctly";
	  cout<<endl;delay(1000);
	  cout<<"        And you have won Rs "<<prize;
	  cout<<endl;delay(1000);
	  cout<<"        Well Played";
	 }
	 else
	 {
	  prize=prize-10;
	  cout<<endl;
	  cout<<endl;
	  cout<<endl;
	  delay(100);
	  cout<<"Sorry, but your answer was wrong";
	  cout<<endl;
	  delay(1500);
	  cout<<"And now you have to go home with Rupees "<<prize;
	  delay(500);
	 }
	}
	getch();
     }
