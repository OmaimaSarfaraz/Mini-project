/*THIS PROGRAM ASK USER TO CHOOSE FROM 4 OPTIONS OR TO EXIT FIRST OPTION IS CALCULATOR
SECOND OPTION IS TABLE THIRD OPTION IS POWER OF ANY NUMBER OR FOURTH OPTION IS GUESS GAME*/
#include <iostream> 
#include <math.h>
#include<string>
using namespace std;
int main()
{  
   //ASKING FOR NAME AND CHOICE
   string name;
   int choice;
   cout<<"Enter your name: ";
   getline(cin,name); 
   cout<<"HI! "<<name<<" WHAT DO YOU WANT \n1.CALCULATOR \n2.TABLE \n3.POWER OF A NUMBER \n4.NUMBER GUESSING GAME \n5.EXIT \nENTER YOUR CHOICE: ";
   cin>>choice;
   //SELECTING THE CASE OF USER CHOICE
   switch(choice)
   {
   	case 1:
   	{  //CASE 1 FOR CALCULATOR FUNCTIONS
	   char op;
	   float n1, n2; 
	   cout<<"**CALCULATOR**"<<endl;  
	   cout<<"Enter two integers one by one: ";
	   cin>>n1>>n2;
	   cout<<"Enter an operator (+,-,*,/): ";
	   cin>>op;
	
       switch(op)
      {
        case '+':
		{
		 cout<<n1<<" + "<<n2<<" = "<<n1+n2;
	     break;   }
	    case '-':
	 	{
		 cout<<n1<<" - "<<n2<<" = "<<n1-n2;
	     break;   }
	    case '*':
	 	{
		 cout<<n1<<" * "<<n2<<" = "<<n1*n2;
	     break;   }
	    case '/':
	 	{ if(n2!=0)
		  { cout<<n1<<" / "<<n2<<" = "<<n1/n2;
	        }
	      else
	     { cout<<"Division by zero is not allowed";
		   }
		  break;   }

	    default:
	    	cout<<"Invalid Operator";
    }	   
   		break;
	   }
   	case 2:
   	{   //CASE 2 FOR TABLE PRINTING
	    int table,length;
   	    cout<<"**TABLE**"<<endl;
	    cout<<"Which table you want to print: ";
	    cin>>table;
	    cout<<"Which length you prefer: ";
	    cin>>length;
	    for(int i=1;i<=length;i++)
	    {
	       cout<<table<<" * "<<i<<" = "<<table*i<<endl;
	    }
   		break;
	   }
	case 3:
	{   //CASE 3 FOR POWER OF ANY NUMBER
	    int num,power;
	    long double result;
	    cout<<"**POWER**"<<endl;
	    cout<<"Enter a number: ";
	    cin>>num;
	    cout<<"Enter a power of a number: ";
	    cin>>power;
	    result=pow(num,power);
	    cout<<"The result of ("<<num<<")^"<<power<<" is: "<<result;
		break;
	}
	case 4:
	{   //CASE 4 FOR NUMBER GUESSING CHALLANGE
	    int num=15,playernum=0,attempts=0,i=5;
        const int maxattempts=5;
        cout<<endl<<"WELCOME! "<<name<<" to the number guessing game. "<<endl;
        cout<<"I am thinking of a number between 10 to 20."<<endl;
         while(playernum!=num && attempts<maxattempts)
	      { 
	         cout<<"Now You have "<<i<<" attempts."<<endl<<"Enter your guess: ";
	         cin>>playernum;
	         attempts++;
	         i--;
	         if(playernum>num)
	          {cout<<"Too high! Try again."<<endl;
	           }
	         else if(playernum<num)
	          {cout<<"Too low! Try again."<<endl;
	           } 
	         else 
	          {cout<<"Conratulations! You have guessed the number "<<num<<endl;
	           }
	      }
	      	if(attempts==maxattempts && playernum!=num)
	         {
	   	        cout<<"YOU LOST! GOOD TRY";
	         }
		break;
	}
	case 5:
	{  //CASE 5 FOR EXIT 
	    cout<<"YOU CHOOSE EXIT! GOOD BYE.";
		break;
	}
	default:
	{ //DEFAULT FOR SELECTING WRONG OPTION
	  cout<<"***INVALID CHOICE***";
	}
   }
   return 0;
}
