
//Cool star calculator developed by firomsa umer thuesday, march 10, 2020

#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

class calculator {
	public:
		int addition();
		void display();
		int division();
		int multiplication(); 
		int remender();
		int substraction();
};
	
void calculator::display () 
{
	system("title Coolstar_73");
	system("color 8f");
	system ("cls");
	cout<<"\n\n	Basic Calculator\n	----------------\n"<<endl;
	cout<<" %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n"<<endl;
	cout<<"\n	MENU\n	====\n\n";
	cout<<"	01. ADDITON\t           02. SUBSTRACTON\n"<<endl;
	cout<<"	03. MULTIPLICATION\t   04. DIVISION\n"<<endl;
	cout<<"	05. REMENDER\n"<<endl;
	cout<<"	06. ABOUT\n"<<endl;
	cout<<"	07. EXIT\n\n"<<endl;
	cout<<" %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;	
}
			
int calculator::addition () 
{
	start:
		int f = 0;
	system("title ADDITION");
	system("color 8f");
	system ("cls");
	
	cout<<"\n 	To Perform Addition\n 	===================\n"<<endl;
	cout<<"	+-----------------------------------------+\n";
    cout<<"	|                                         |\n";
    cout<<"	| 1. Addition                             |\n";
	cout<<"	+-----------------------------------------+\n"; 
		    
    float a, b, sum;
	cout<<"\n\n	  Enter The First Number: "; 
	cin>>a;     
	cout<<"\n	  Enter The Second Number: "; 
	cin>>b; 
	sum = a + b; 
	cout<<"\n\n	  "<<a<< " + "<<b<< " = "<<sum <<endl;
	cout<<"	  ADDITION ENDED !!"<<endl;
	cout<<"	                                         \n";
	cout<<"	                                         \n";
	cout<<"	-------------------------------------------\n";
	cout<<"	-------------------------------------------\n";
	cout<<"\n>> Press[1] To Add Again Press[Any Num Key] To Continue: ";
	cin>>f;
	if (f==1) goto start;
}
			
int calculator::substraction () 
{
	start:
		int f = 0;
	system("title SUBSTRACTION");
	system("color 8f");
	system ("cls");
				
	cout<<"\n 	To Perform Substraction\n 	=======================\n"<<endl;
	cout<<"	+-----------------------------------------+\n";
    cout<<"	|                                         |\n";
    cout<<"	| 1. SUBSTRACTION                         |\n";
	cout<<"	+-----------------------------------------+\n"; 
			    
    float a, b, sub;
	cout<<"\n\n	  Enter The First Number: "; 
	cin>>a;     
	cout<<"\n	  Enter The Second Number: "; 
    cin>>b; 
	sub = a - b; 
	cout<<"\n\n	  "<<a<< " - "<<b<< " = "<<sub <<endl;
	cout<<"	  SUBSTRACTION ENDED !!"<<endl;
	cout<<"	                                         \n";
	cout<<"	                                         \n";
	cout<<"	-------------------------------------------\n";
	cout<<"	-------------------------------------------\n";
	cout<<"\n>> Press[1] To Add Again Press[Any Num Key] To Continue: ";
	cin>>f;
	if (f==1) goto start;
}
			
int calculator::multiplication () 
{
	start:
		int f = 0;
	system("title MULTIPLICATION");
	system("color 8f");
	system ("cls");
				
	cout<<"\n 	To Perform Multiplication\n 	=========================\n"<<endl;
	cout<<"	+-----------------------------------------+\n";
    cout<<"	|                                         |\n";
    cout<<"	| 1. MULTIPLICATON                        |\n";
	cout<<"	+-----------------------------------------+\n"; 
			    
    float a, b, mul;
	cout<<"\n\n	  Enter The First Number: "; 
	cin>>a;     
	cout<<"\n	  Enter The Second Number: "; 
	cin>>b; 
	mul = a * b; 
	cout<<"\n\n	  "<<a<< " x "<<b<< " = "<<mul <<endl;
	cout<<"	  MULTIPLICATON ENDED !!"<<endl;
	cout<<"	                                         \n";
	cout<<"	                                         \n";
	cout<<"	-------------------------------------------\n";
	cout<<"	-------------------------------------------\n";
	cout<<"\n>> Press[1] To Add Again Press[Any Num Key] To Continue: ";
	cin>>f;
	if (f==1) goto start;
}			
			
int calculator::division () 
{
	start:
		int f = 0;
	system("title DIVISION");
	system("color 8f");
	system ("cls");
				
	cout<<"\n 	To Perform Division\n 	===================\n"<<endl;
	cout<<"	+-----------------------------------------+\n";
    cout<<"	|                                         |\n";
    cout<<"	| 1. DIVISION                             |\n";
	cout<<"	+-----------------------------------------+\n"; 
			    
    float a, b, div;
	cout<<"\n\n	  Enter The First Number: "; 
	cin>>a;     
	cout<<"\n	  Enter The Second Number: "; 
	cin>>b; 
	div = a / b; 
	cout<<"\n\n	  "<<a<< " / "<<b<< " = "<<div <<endl;
	cout<<"	  DIVISION ENDED !!"<<endl;
	cout<<"	                                         \n";
	cout<<"	                                         \n";
	cout<<"	-------------------------------------------\n";
	cout<<"	-------------------------------------------\n";
	cout<<"\n>> Press[1] To Add Again Press[Any Num Key] To Continue: ";
	cin>>f;
	if (f==1) goto start;
}
			
int calculator::remender () 
{
	start:
		int f = 0;
	system("title REMENDER");
	system("color 8f");
	system ("cls");
				
	cout<<"\n 	To Perform Remender\n 	===================\n"<<endl;
	cout<<"	+-----------------------------------------+\n";
    cout<<"	|                                         |\n";
    cout<<"	| 1. REMENDER                             |\n";
	cout<<"	+-----------------------------------------+\n"; 
			    
    int a, b, rem;
	cout<<"\n\n	  Enter The First Number: "; 
	cin>>a;     
	cout<<"\n	  Enter The Second Number: "; 
	cin>>b; 
	rem = a % b; 
	cout<<"\n\n	  "<<a<< " % "<<b<< " = "<<rem <<endl;
	cout<<"	  REMENDER ENDED !!"<<endl;
	cout<<"	                                         \n";
	cout<<"	                                         \n";
	cout<<"	-------------------------------------------\n";
	cout<<"	-------------------------------------------\n";
	cout<<"\n>> Press[1] To Add Again Press[Any Num Key] To Continue: ";
	cin>>f;
	if (f==1) goto start;
}					

class other {

	public:
		
		void about () 
		{
			system("title ABOUT");
			system ("color 6e");
			system ("cls");
			cout <<"\n About \n";
			cout <<" -----\n";
		    cout <<"\n  [program version - 1.06] \n";
			cout <<"  copy right @2012 E.C / 2020 G.C\n";
			cout <<"  Program Devloper <CoolStar 73>\n";
			cout <<"  Devloped date thuesday, march 10, 2020 G.C\n";
			cout <<"  Laste Update Sunday, August 16, 2020 G.C\n";			
	    }
	    
};

int addition();
void display();
int division();
int multiplication(); 
int remender();
int substraction();
void about ();
void intro();

int main () 
{
	intro();
	fira:
		int f = 0;
	calculator obj;
	obj.display();
		int s = 0;
	cout<<"\n>> Please Select Your Option !! [1-7]: ";
	cin>>s;
	if (s==1) obj.addition();
	if (s==2) obj.substraction();
	if (s==3) obj.multiplication();
	if (s==4) obj.division();
	if (s==5) obj.remender();
	other mo;
	if (s==6) mo.about();
	if (s==7 )goto by;
	if (s>7||s<1) 
	cout<<"\a\a--- ["<<s<<"] is Invalid Number Please Try Again. <---  X";

error:		
  cout <<"\n\n>> >> ";
  cout <<"Back to MENU press(1) or QUIT(2): ";
  cin>>f;
  if (f==1) goto fira;
  if (f==2) goto by;
  
  else{
	 system("title error...");
	 system("color 4f");
	 cout <<"\a\a";
	 system("cls");
	 cout <<"\n\n   ["<<f<<"] Is Invalid Please Try Again !!"<<endl;
	 goto error;
  }
	
	by:
	{
		system("title EXITING...");
		system("color 4f");
		system("cls");
		cout <<"\n\n\n		Thank you for using this program\n";
		cout <<"		CoolStar Corporation...\n"<<endl;
		system ("exit");
	}
	
 return 0;
 
}

void intro ()
{
	system("title INTRODUCTION");
	system("color 8f");
	cout<<"\n\n\n\tCOOLSTAR";
	cout<<"\n\n\tCALCULATOR";
	cout<<"\n\n\tDEVELOPED BY COOLSTAR-CS_73 CORPORATION\n";
	cout<<"\n\n\n\n ******************************\n";
	cout<<"\n  PRESS ENTER TO GET STARTED: \n";
	cout<<"\n ******************************\n";
	cin.ignore();
	
}




