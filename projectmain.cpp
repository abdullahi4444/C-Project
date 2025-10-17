#include <iostream>
#include <limits>
#include <sstream>
#include <cmath>
using namespace std;
int menu(){
	int nummenu,num1,num2,num3,num4,num5,num6,num7,num8,num9;
	char op1,op2,op3,op4,op5,op6,op7,op8,op9;
	do{
		cout<<"\n        M E N U"<<endl;
		cout<<"       '''''''''"<<endl;
		cout<<"   1.Normal    Programs    "<<endl;
		cout<<"   2.Operators Programs    "<<endl;
		cout<<"   3.Discien   Programs    "<<endl;
		cout<<"   4.Iteration Programs    "<<endl;
		cout<<"   5.Arrays    Programs    "<<endl;
		cout<<"   6.Structure Programs    "<<endl;
		cout<<"   7.Class     Programs    "<<endl;
		cout<<"   8.My Own    Programs    "<<endl;
		cout<<"   9.Exit                  "<<endl;
		cout<<"                           "<<endl;
		cout<<"Choice The Number That You Want From This Menu : ";
		cin>>nummenu;
		while (cin.fail()) { 
        	cin >> nummenu;
            cin.clear();
            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a number: ";
    	}
		switch (nummenu){
//case1 of menu		
		case 1 :
		do{
			cout<<"\n                             1.Normal Programs"<<endl;
			cout<<" ______________________________________________________________________________________"<<endl;
			cout<<"|1  : String Output         "<<"            |      "<<"2 : Number And Character Output        |"<<endl;
			cout<<"|3  : Taking Multiple Input "<<"            |      "<<"4 : Implicit Type Conversion           |"<<endl;
			cout<<"|5  : Automatic Conversion  "<<"            |      "<<"6 : Type Casting                       |"<<endl;
			cout<<"|7  : Back To Menu          "<<"            |      "<<"                                       |"<<endl;
			cout<<"|_______________________________________|_____________________________________________|"<<endl;
			cout<<"\nChoice The Number Of The Code That You Want To See : ";
			cin>>num1;
			while (cin.fail()) { 
	        	cin >> num1;
	            cin.clear();
	            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
	            cout << "Invalid input. Please enter a number: ";
	    	}
			switch (num1){
				
			case 1 :
				void stroutput();
				stroutput();
				break;
	
			case 2 :
				void ncoutput();
				ncoutput();
				break;
	
			case 3 :
				void tminput();
				tminput();
				break;
	
			case 4 :
				void implicit();
				implicit();
				break;
			
			case 5 :
				void automatic();
				automatic();
				break;
			
			case 6 :
				void typecasting();
				typecasting();
				break;
				
			case 7 :
				menu();
				break;
				
			default :
				cout<<"Sorry! This Number Is Not In This Section";
				break;
			}
			}while ( num1 < 7);	
			break;
//case 2 of menu	
		case 2 :
			do{
			cout<<"\n                              2.Operators Programs"<<endl;
			cout<<" ______________________________________________________________________________________"<<endl;
			cout<<"|1  : Arthemetic Operator   "<<"            |      "<<"2  : Increment And Decrement Operator  |"<<endl;
			cout<<"|3  : Assignment Operator   "<<"            |      "<<"4 : Relational Operator                |"<<endl;
			cout<<"|5  : Logical Operators     "<<"            |      "<<"6 : Back To Menu                       |"<<endl;
			cout<<"|_______________________________________|_____________________________________________|"<<endl;
			cout<<"\nChoice The Number Of The Code That You Want To See : ";
			cin>>num2;
			while (cin.fail()) { 
	        	cin >> num2;
	            cin.clear();
	            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
	            cout << "Invalid input. Please enter a number: ";
	    	}
			switch (num2){
				
			case 1 :
				int arthemetic();
				arthemetic();
				break;
	
			case 2 :
				int increment();
				increment();
				break;
	
			case 3 :
				int Assignment();
				Assignment();
				break;
	
			case 4 :
				int Relational();
				Relational();
				break;
	
			case 5 :
				int Logical();
				Logical();
				break;
				
			case 6 :
				menu();
				break;
			
			default :
				cout<<"Sorry! This Number Is Not In This Section";
				break;
			}
			cout<<"\nDo You Want To Do It Again ?  (Y / N) : " ;
			cin>>op2;
			}while ( op2 == 'y' || op2 == 'Y');
			cout<<"\n                       Program Has Fineshed! Good Bye\n";	
			break;
//case 3 of menu	
		case 3 :
			do{
			cout<<"\n                              3.Discien   Programs"<<endl;
			cout<<" ______________________________________________________________________________________"<<endl;
			cout<<"|1  : If Statements         "<<"            |      "<<"2 : If...Else Statements               |"<<endl;
			cout<<"|3  : Odd Or Even Numbers   "<<"            |      "<<"4  : Back To Menu                      |"<<endl;
			cout<<"|_______________________________________|_____________________________________________|"<<endl;
			cout<<"\nChoice The Number Of The Code That You Want To See : ";
			cin>>num3;
			while (cin.fail()) { 
	        	cin >> num3;
	            cin.clear();
	            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
	            cout << "Invalid input. Please enter a number: ";
	    	}
			switch (num3){
				
			case 1 :
				int numbe();
				numbe();
				break;
	
			case 2 :
				int numbE();
				numbE();
				break;
			
			case 3 :
				void out();
				out();
				break;
			
			case 4 :
				menu();
				break;
				
			default :
				cout<<"Sorry! This Number Is Not In This Section";
				break;
			}
			cout<<"\nDo You Want To Do It Again ?  (Y / N) : " ;
			cin>>op3;
			}while ( op3 == 'y' || op3 == 'Y');
			cout<<"\n                       Program Has Fineshed! Good Bye\n";	
			break;
//case 4 of menu	
		case 4 :
			do{
			cout<<"\n                             4.Iteration Programs"<<endl;
			cout<<" ______________________________________________________________________________________"<<endl;
			cout<<"|1  : Printing Number From 1 To 5  "<<"     |      "<<"2 : Display A Text 5 Times             |"<<endl;
			cout<<"|3  : Sum Of First Natural Numbers "<<"     |      "<<"4 : Displaying Number From 1 To 5      |"<<endl;
			cout<<"|5  : Sum Of Positive Numbers      "<<"     |      "<<"6 : Sum Of Positive Numbers do..while  |"<<endl;
			cout<<"|7  : Break With For Loop          "<<"     |      "<<"8 : Break With While Loop              |"<<endl;
			cout<<"|9  : Continue With For Loop       "<<"     |      "<<"10: continue With While Loop           |"<<endl;
			cout<<"|11 : Continue With Nested Loop    "<<"     |      "<<"12: Goto Statement                     |"<<endl;
			cout<<"|13 : Back To Menu                 "<<"     |      "<<"                                       |"<<endl;
			cout<<"|_______________________________________|_____________________________________________|"<<endl;
			cout<<"\nChoice The Number Of The Code That You Want To See : ";
			cin>>num4;
			while (cin.fail()) { 
	        	cin >> num4;
	            cin.clear();
	            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
	            cout << "Invalid input. Please enter a number: ";
	    	}
			switch (num4){
				
			case 1 :
				int printing();
				printing();
				break;
	
			case 2 :
				int disp();
				disp();
				break;
			
			case 3 :
				void natural();
				natural();
				break;
	
			case 4 :
				void print();
				print();
				break;
				
			case 5 :
				int pos();
				pos();
				break;
	
			case 6 :
				void only();
				only();
				break;
				
			case 7 :
				void brf();
				brf();
				break;
	
			case 8 :
				void brw();
				brw();
				break;
				
			case 9 :
				int cof();
				cof();
				break;
	
			case 10 :
				int cow();
				cow();
				break;
				
			case 11 :
				int con();
				con();
				break;
	
			case 12 :
				void gto();
				gto();
				break;
			
			case 13 :
				menu();
				break;
	
			default :
				cout<<"Sorry! This Number Is Not In This Section";
				break;
			}
			cout<<"\nDo You Want To Do It Again ?  (Y / N) : " ;
			cin>>op4;
			}while ( op4 == 'y' || op4 == 'Y');
			cout<<"\n                       Program Has Fineshed! Good Bye\n";	
			break;
//case 5 of menu	
		case 5 :
			do{
			cout<<"\n                              5.Arrays    Programs"<<endl;
			cout<<" ______________________________________________________________________________________"<<endl;
			cout<<"|1  : Displaying Array             "<<"     |      "<<"2 : Individual Defining Array          |"<<endl;
			cout<<"|3  : Array With Loop              "<<"     |      "<<"4 : Two Damension Array                |"<<endl;
			cout<<"|5  : User Input Array             "<<"     |      "<<"6 : Back To Menu                       |"<<endl;
			cout<<"|_______________________________________|_____________________________________________|"<<endl;
			cout<<"\nChoice The Number Of The Code That You Want To See : ";
			cin>>num5;
			while (cin.fail()) { 
	        	cin >> num5;
	            cin.clear();
	            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
	            cout << "Invalid input. Please enter a number: ";
	    	}
			switch (num5){
				
			case 1 :
				int arrayeg1();
				arrayeg1();
				break;
	
			case 2 :
				void arrayloop();
				arrayloop();
				break;
	
			case 3 :
				int arrayeg3();
				arrayeg3();
				break;
	
			case 4 :
				void twodamation();
				twodamation();
				break;
	
			case 5 :
				int marksarray();
				marksarray();
				break;
				
			case 6 :
				menu();
				break;
			
			default :
				cout<<"Sorry! This Number Is Not In This Section";
				break;
			}
			cout<<"\nDo You Want To Do It Again ?  (Y / N) : " ;
			cin>>op5;
			}while ( op5 == 'y' || op5 == 'Y');
			cout<<"\n                       Program Has Fineshed! Good Bye\n";	
			break;
//case 6 of menu	
		case 6 :
			do{
			cout<<"\n                              6.Structure Programs"<<endl;
			cout<<" ______________________________________________________________________________________"<<endl;
			cout<<"|1  : Person Information    "<<"            |      "<<"2  : Cars                  	       |"<<endl;
			cout<<"|3  : Person Citizenship    "<<"            |      "<<"4  : Back To Menu                      |"<<endl;
			cout<<"|_______________________________________|_____________________________________________|"<<endl;
			cout<<"\nChoice The Number Of The Code That You Want To See : ";
			cin>>num6;
			while (cin.fail()) { 
	        	cin >> num6;
	            cin.clear();
	            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
	            cout << "Invalid input. Please enter a number: ";
	    	}
			switch (num6){
				
			case 1 :
				int structure2();
				structure2();
				break;
	
			case 2 :
				int structure1();
				structure1();
				break;
	
			case 3 :
				int structure3();
				structure3();
				break;
				
			case 4 :
				menu();
				break;
			
			default :
				cout<<"Sorry! This Number Is Not In This Section";
				break;
			}
			cout<<"\nDo You Want To Do It Again ?  (Y / N) : " ;
			cin>>op6;
			}while ( op6 == 'y' || op6 == 'Y');
			cout<<"\n                       Program Has Fineshed! Good Bye\n";	
			break;
//case 7 of menu	
		case 7 :
			do{
			cout<<"\n                              7.Class     Programs"<<endl;
			cout<<" ______________________________________________________________________________________"<<endl;
			cout<<"|1  : Object and Class            "<<"      |      "<<"2 : Using public and private           |"<<endl;
			cout<<"|3  : Back To Menu                "<<"      |      "<<"                                       |"<<endl;
			cout<<"|_______________________________________|_____________________________________________|"<<endl;
			cout<<"\nChoice The Number Of The Code That You Want To See : ";
			cin>>num7;
			while (cin.fail()) { 
	        	cin >> num7;
	            cin.clear();
	            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
	            cout << "Invalid input. Please enter a number: ";
	    	}
			switch (num7){
				
			case 1 :
				void Room1();
				Room1();
				break;
	
			case 2 :
				int Room2();
				Room2();
				break;
			
			case 3 :
				menu();
				break;
			
			default :
				cout<<"Sorry! This Number Is Not In This Section";
				break;
			}
			cout<<"\nDo You Want To Do It Again ?  (Y / N) : " ;
			cin>>op6;
			}while ( op6 == 'y' || op6 == 'Y');
			cout<<"\n                       Program Has Fineshed! Good Bye\n";	
			break;
//case 8 of menu	
		case 8 :
			do{
			cout<<"\n                             7.My Own    Programs"<<endl;
			cout<<" ______________________________________________________________________________________"<<endl;
			cout<<"|1  : Employee Salary              "<<"     |      "<<"2 : B14 Boys And Girls Who More        |"<<endl;
			cout<<"|3  : Large,Middle or Small Pizza  "<<"     |      "<<"4 : Tempreture Program                 |"<<endl;
			cout<<"|5  : Area Program                 "<<"     |      "<<"6 : Absolute Number Program            |"<<endl;
			cout<<"|7  : Swap Program                 "<<"     |      "<<"8 : Full Name Displayer                |"<<endl;
			cout<<"|9  : Chech Pass Score             "<<"     |      "<<"10: Check Pass Score Or Fail           |"<<endl;
			cout<<"|11 : Grade Program                "<<"     |      "<<"12: Calculator Program                 |"<<endl;
			cout<<"|13 : Pattern Program              "<<"     |      "<<"14: (24) Hours What I Did Program      |"<<endl;
			cout<<"|15 : What I Did Until I Come University"<<"|      "<<"16: Back To Menu                       |"<<endl;
			cout<<"|_______________________________________|_____________________________________________|"<<endl;
			cout<<"\nChoice The Number Of The Code That You Want To See : ";
			cin>>num8;
			while (cin.fail()) { 
	        	cin >> num8;
	            cin.clear();
	            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
	            cout << "Invalid input. Please enter a number: ";
	    	}
			switch (num8){
				
			case 1 :
				int salary();
				salary();
				break;
	
			case 2 :
				void who();
				who();
				break;
	
			case 3 :
				void pizza();
				pizza();
				break;
				
			case 4 :
				int tempreture();
				tempreture();
				break;
				
			case 5 :
				void area();
				area();
				break;
				
			case 6 :
				void absul();
				absul();
				break;
				
			case 7 :
				int swap();
				swap();
				break;
				
			case 8 :
				void name();
				name();
				break;
				
			case 9 :
				int pas();
				pas();
				break;
				
			case 10 :
				void pof();
				pof();
				break;
				
			case 11 :
				int grade();
				grade();
				break;
				
			case 12 :
				int calculator();
				calculator();
				break;
				
			case 13 :
				void pattern();
				pattern();
				break;
				
			case 14 :
				int twenty();
				twenty();
				break;
				
			case 15 :
				int what();
				what();
				break;
				
			case 16 :
				menu();
				break;
			
			default :
				cout<<"Sorry! This Number Is Not In This Section";
				break;
			}
			cout<<"\nDo You Want To Do It Again ?  (Y / N) : " ;
			cin>>op8;
			}while ( op8 == 'y' || op8 == 'Y');
			cout<<"\n                       Program Has Fineshed! Good Bye\n";	
			break;
						
    	}
/*menu*/
    }while ( nummenu != 9);
	cout<<"\n                       Program Has Fineshed! Good Bye\n";
}

                                //all other functions
                                     //chapter 2
                            
void stroutput(){
	cout<<"\n                                 |1 : String Output|\n\n";
	cout<<"This Is C++ Programming ";
}
void ncoutput(){
	cout<<"\n                                 |2 : Number And Character Output|\n\n";
	int num1=7;
	double num2=256.783;
	char ch='A';
	cout<<num1<<endl;
	cout<<num2<<endl;
	cout<<ch<<endl;
}
void tminput(){
	cout<<"\n                                 |3 : Taking Multiple Input|\n\n";
	int num,nu;
	cout<<"enter an integer : ";
	cin>>num>>nu;
	cout<<"The First Number Is : "<<num<<endl;
	cout<<"The Second Number Is : "<<nu;
}
void implicit(){
	cout<<"\n                                 |4 : Implicit Type Conversion|\n\n";
	int num_int=9;
	double num_double=num_int;
	cout<<"num int = "<<num_int<<endl;
	cout<<"num double = "<<num_double<<endl;
}
void automatic(){
	cout<<"\n                                 |5 : Automatic Conversion|\n\n";
	int num_int;
	double num_double=9.99;
	num_int=num_double;
	cout<<"Num int = "<<num_int<<endl;
	cout<<"Num double = "<<num_double<<endl;
}
void typecasting(){
	cout<<"\n                                 |6 : Type Casting|\n\n";
	double nu_double=3.56;
	int nu_int=(int)nu_double;
	int nu_int1=int(nu_double);
	cout<<"Num Double = "<<nu_double<<endl;
	cout<<"Num Int = "<<nu_int<<endl;
	cout<<"Num Int1 = "<<nu_int1<<endl;
}

                                      //chapter3
                                      
int arthemetic(){
cout<<"\n                                 |1 : Arthemetic Operator|\n\n";
int a,b;
cout<<"Please enter the first number : ";
cin>>a;
cout<<"Please enter the second number : ";
cin>>b;
cout<<"\na + b = "<<(a+b)<<endl;
cout<<"a - b = "<<(a-b)<<endl;
cout<<"a * b = "<<(a*b)<<endl;
cout<<"a / b = "<<(a/b)<<endl;
cout<<"a % b = "<<(a%b)<<endl;
}
int increment(){
	cout<<"\n                                 |2 : Increment And Decrement Operator|\n\n";
	int a=10;
	int b=100;
	int resultA=++a;
	int resultB=--b;
	cout<<"\nThe Result Of (A=10) As Increment Value = "<<resultA<<endl;
	cout<<"The Result Of (B=100) As Decrement Value = "<<resultB<<endl;
}
int Assignment(){
	cout<<"\n                                 |3 : Assignment Operator|\n\n";
	int a=2;
	int b=7;
	int temp=a;
	a+=b;
	cout<<"temp = "<<temp<<endl;
	cout<<"The Result of (A=2) and (b=7) As (a+=b) Is = "<<a<<endl;
}
int Relational(){
	cout<<"\n                                 |4 : Relational Operator|\n\n";
	int a=3;
	int b=5;
	bool result1,result2,result3,result4,result5,result6;
		result1=(a==b);
		result2=(a!=b);
		result3=(a>b);
		result4=(a<b);
		result5=(a>=b);
		result6=(a<=b);
	cout<<"3==5 is "<<result1<<endl;
	cout<<"3!=5 is "<<result2<<endl;
	cout<<"3>5 is "<<result3<<endl;
	cout<<"3<5 is "<<result4<<endl;
	cout<<"3>=5 is "<<result5<<endl;
	cout<<"3<=5 is "<<result6<<endl;
}
int Logical(){
	cout<<"\n                                 |5 : Logical Operators|\n\n";
	int a=3;
	int b=5;
	bool result1,result2,result3,result4,result5,result6,result7,result8;
		result1=(3!=5) && (3<5);
		result2=(3==5) && (3<5);
		result3=(3==5) && (3>5);
		result4=(3!=5) || (3<5);
		result5=(3!=5) || (3>5);
		result6=(3==5) || (3>5);
		result7=!(5==2);
		result8=!(5==5);
	cout<<"(3!=5) && (3<5) is = "<<result1<<endl;
	cout<<"(3==5) && (3<5) is = "<<result2<<endl;
	cout<<"(3==5) && (3>5) is = "<<result3<<endl;
	cout<<"(3!=5) || (3<5) is = "<<result4<<endl;
	cout<<"(3!=5) || (3>5) is = "<<result5<<endl;
	cout<<"(3==5) || (3>5) is = "<<result6<<endl;
	cout<<"!(5==2)         is = "<<result7<<endl;
	cout<<"!(5==5)         is = "<<result8<<endl;
}

                                     //chapter 4
                                     
int numbe(){
	cout<<"\n                                 |1 : If Statements|\n\n";
	int nmber;
	cout<<"Enter An Integer : ";
	cin>>nmber;
	if (nmber >0){
		cout<<"You Entered a Posotive Integer : "<<nmber<<endl;
	}
	cout<<"\nThis Statement Is Always Excuted.";
}
int numbE(){
	cout<<"\n                                 |2 : If...Else Statements|\n\n";
	int nmber;
	cout<<"Enter An Integer : ";
	cin>>nmber;
	if (nmber >0){
		cout<<"You Entered a Posotive Integer : "<<nmber<<endl;
	}
	else{
		cout<<"You Enter A Negative Number : "<<nmber<<endl;
	}
	cout<<"\nThis Statement Is Always Excuted.";
}
void out(){
	cout<<"\n                                 |3 : Odd Or Even Numbers|\n\n";
	int num;  
    cout<<"Enter a Number: ";  
    cin>>num;  
    	if (num % 2 == 0)    
        {    
            cout<<"It is even number"<<endl;    
        }   
        else  
        {    
            cout<<"It is odd number"<<endl;    
        }  
}

                                    //chapter 5
                                    
int printing(){
	cout<<"\n                                 |1 : Printing Number From 1 To 5|\n\n";
	cout<<"Using For Loop"<<endl;
	for(int i=1 ; i<=5 ; ++i){
		cout<<i<<" ";
	}
}
int disp(){
	cout<<"\n                                 |2 : Display A Text 5 Times|\n\n";
	cout<<"Using For Loop\n"<<endl;
	for(int i=1 ; i<=5 ; ++i){
		cout<<"Hellow World!"<<endl;
	}
}
void natural(){
	cout<<"\n                                 |3 : Sum Of First Natural Numbers|\n\n";
	int Nub,Sub;
	Sub=0;
	cout<<"Enter A Positive Inreger : ";
	cin>>Nub;
	for (int count=1 ; count<=Nub ; ++count){
		Sub += count;
	}
	cout<<"Sum = "<<Sub<<endl;
}
void print(){
	cout<<"\n                                 |4 : Displaying Number From 1 To 5|\n\n";
	int i=1;
	cout<<"Using While Loop"<<endl;
	while (i<=5){
		cout<<i<<" ";
		++i;
	}
}	
int pos(){
	cout<<"\n                                 |5 : Sum Of Positive Numbers: |\n\n";
	int number=0;
	int summ=0;
	while (number>=0){
		cout<<"Enter A Number : ";
	    cin>>number;
		summ+=number;
	}
		cout<<"\nThe Sum Is : "<<summ<<endl;
}
void only(){
	cout<<"\n                                 |6 : Sum Of Positive Numbers do..while: |\n\n";
	int s=0;
	int u=0;
	do{
		cout<<"Enter A positive Number : ";
		cin>>u;
		if (u>0){
			s+=u;
		}
	}while(u>=0);
	 cout<<"\nThe sum is : "<<s<<endl;
}
void brf(){
	cout<<"\n                                 |7 : Break With For Loop|\n\n";
	for (int i=1 ; i<=5 ; i++){
		if (i==3){
			break;
		}
		cout<<i<<endl;
	}
}
void brw(){
	cout<<"\n                                 |8 : Break With While Loop|\n\n";
	int number;
	int sum=0;
	while (true){
		cout<<"Enter A Number : ";
		cin>>number;
		if (number<0){
			break;
		}
		sum+=number;
	}
	cout<<"The Sum Is : "<<sum<<endl;
}
int cof(){
	cout<<"\n                                 |9 : Continue With For Loop|\n\n";
	for (int i=1 ; i<=5 ; i++){
		if (i==3){
			continue;
		}
		cout<<i<<endl;
	}
}
int cow(){
	cout<<"\n                                 |10 : continue With While Loop|\n\n";
	int sum=0;
	int number=0;
	while (number>=0){
		sum+=number;
		cout<<"Enter A Number : ";
		cin>>number;
		if (number>50){
			cout<<"The Number Is Greater Than 50 And Won't Be Calculated."<<endl;
			number=0;
			continue;
		}
	}
	cout<<"The Sum Is : "<<sum<<endl;
}
int con(){
	cout<<"\n                                 |11 : continue With Nested Loop|\n\n";
	int sum=0;
	int number;
	for (int i=1 ; i<=3 ; i++){
		for (int j=1 ; j<=3 ; j++){
			if (j==2){
				continue;
			}
			cout<<"i= "<<i<<" , j= "<<j<<endl;
		}
	}
}
void gto(){
	cout<<"\n                                 |12 : Goto Statement|\n\n";
	float num,average,sum=0.0;
	int i,n;
	cout<<"Maximum number Of Inputs : ";
	cin>>n;
	for (i=1 ; i<=n ; ++i){
		cout<<"Enter n "<<i<<" : ";
		cin>>num;
		if (num<0.0){
			goto jump;
		}
		sum+=num;
	}
	jump:
		average = sum/(i-1);
		cout<<"\nAverage = "<<average;
}

                                    //chapter 6
     
int arrayeg1(){
	cout<<"\n                                 |1 : Displaying Array|\n\n";
	int numbers[5]={16,26,36,46,56};
	cout<<numbers[2];
	return 0;
}
void arrayloop(){
	cout<<"\n                                 |2 : Individual Defining Array|\n\n";
	float a[5];
	int i;
	a[0]=9.9;
	a[1]=12.9;
	a[2]=13.1;
	a[3]=8.9;
	a[4]=10.6;
	for(i=0; i<=4; i++)
		cout<<"Value in a ["<<i<<"]="<<a[i]<<endl;
}
int arrayeg3(){
	cout<<"\n                                 |3 : Array With Loop|\n\n";
	double temp[5]={66.2,63.2,69.6,70.2,55.4};
	int j;
	for(j=0; j<=4; j++)
		cout <<temp[j]<<endl;
	return 0;
}
int twodamation(){
	cout<<"\n                                 |4 : Two Damension Array|\n\n";
	double nums[2][3]={{66.2,63.2,69.6},{70.2,55.4,44.5}};
			cout <<"num[0][2] = "<<nums[0][2]<<endl;
	return 0;
}
int marksarray(){
	cout<<"\n                                 |3  : Person Citizenship|\n\n";
	int mark[5] = {19, 10, 8, 17, 9};
	mark[3] = 9;
	cin >> mark[-1];
	cin >> mark[2];
	cout << mark[0];
	cout << mark[-1];
}

                                   //chapter 7
                                   
struct car{
  string brand;
  string model;
  int year;
};
int structure1(){
	cout<<"\n                                 |2 : Cars|\n\n";
	car myCar1;
  	myCar1.brand = "BMW";
  	myCar1.model = "X5";
  	myCar1.year = 1999;
  	
  	car myCar2;
  	myCar2.brand = "Ford";
  	myCar2.model = "Mustang";
  	myCar2.year = 1969;
  	
  	cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
  	cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";
}

struct Person2{
	string citizenship;
	int age;
};
int structure3(){
	cout<<"\n                                 |3  : Person Citizenship|\n\n";
	Person2 p;
	cout<<"Enter Person Citizenship : ";
	cin>>p.citizenship;
	cout<<"Enter Person Age : ";
	cin>>p.age;
	cout << "\n\nThe Person citizenship is: " << p.citizenship << endl;
	cout << "The Person age is: " << p.age << endl;
}

struct Person{
    char name[50];
    int age;
    float salary;
};
int structure2(){
	cout<<"\n                                 |1  : Person Information|\n\n";
	Person p1;
    
    cout << "Enter Full name: ";
    cin>>p1.name;
    cout << "Enter age: ";
    cin >> p1.age;
    cout << "Enter salary: ";
    cin >> p1.salary;

    cout << "\nDisplaying Information." << endl;
    cout << "Name: " << p1.name << endl;
    cout <<"Age: " << p1.age << endl;
    cout << "Salary: " << p1.salary;
}

                                   //chapter 8
                                   
class Room{
   public:
    double length;
    double breadth;
    double height;
    double calculateArea() {
        return length * breadth;
    }
    double calculateVolume() {
        return length * breadth * height;
    }
};
void Room1(){
	Room room1;
    room1.length = 42.5;
    room1.breadth = 30.8;
    room1.height = 19.2;
    cout << "Area of Room =  " << room1.calculateArea() << endl;
    cout << "Volume of Room =  " << room1.calculateVolume() << endl;
}

class Qolal{
   private:
    double length;
    double breadth;
    double height;
   public:
    void initData(double len, double brth, double hgt){
        length = len;
        breadth = brth;
        height = hgt;
    }
    double calculateArea(){
        return length * breadth;
    }
    double calculateVolume(){
        return length * breadth * height;
    }
};
int Room2(){
	Qolal room2;
    room2.initData(42.5, 30.8, 19.2);
    cout << "Area of Room =  " << room2.calculateArea() << endl;
    cout << "Volume of Room =  " << room2.calculateVolume() << endl;
}

                                     //my own
                                     
int salary(){
	cout<<"\n                                 |1 : Employee Salary|\n\n";
	string name;
	int day,cash,product;
	cout<<"Please Enter The Name Of The Employee :";
	cin>>name;
	cout<<"\nEnter How Many Days He/She Work In This Month : "<<name<<":";
	cin>>day;
	cout<<"\nEnter How Much Cost He/She Work Per A day : "<<name<<":";
	cin>>cash;
	product=day*cash;
	cout<<"             \nThe Salary Of "<<name<<" In This Month Is : "<<product;
}
void who(){
	cout<<"\n                                 |2 : B14 Boys And Girls Who More|\n\n";
    int boys,girls;
	cout<<"First Enter The Number Of Boys in B14 :";
	cin>>boys;
	cout<<"Second Enter Number Of Girls :";
	cin>>girls;
	if (boys>girls)
	{
		cout<<"\n      in b14 BOYS are more than GIRLS ";
	}
	else if (girls>boys)
	{
		cout<<"\n      in b14 GIRLS are more than BOYS ";
	}
	else
	{
		cout<<"\n      b14 BOYS and GIRLS are equal ";
	}
}
void pizza(){
	cout<<"\n                                 |3 : Large,Middle or Small Pizza|\n\n";
    int money;
    cout<<"Enter The Money That You Have To Buy PIZZA :";
    cout<<"\n                               10,20,30,40 : ";
    cin>>money;
    if (money==10){
    	cout<<"SMALL PIZZA";
	}
	else if (money==20){
    	cout<<"MIDDLE PIZZA";
	}
	else if (money==30){
    	cout<<"LARGE PIZZA";
	}
	else if (money==40){
    	cout<<"EXTRA LARGE PIZZA";
	}
	else if(money<10){
		cout<<"SORRY you have few money!!";
	}
	else{
		cout<<"!!!!!!!!!!!";
	}
}
int tempreture(){
	cout<<"\n                                 |4 : Tempreture Program|\n\n";
	float tem;
	cout<<"Enter The Current Tempreture In Celsius : ";
	cin>>tem;
	if (tem<10){
		cout<<"\n      TODAY IS COLD !";
	}
	else if (tem>=10 && tem<=25){
		cout<<"\n      IT IS MIDDLE TODAY ";
	}
	else{
		cout<<"\n      IT IS HOT TODAY !";
	}
}
void area(){
	cout<<"\n                                 |5 : Area Program|\n\n";
	int length,width,area;
	cout<<"Enter the length of the area : ";
	cin>>length;
	cout<<"Enter the width of the area : ";
	cin>>width;
	area=length*width;
	cout<<"the area of rectangle is : "<<area;
}
void absul(){
	cout<<"\n                                 |6 : Absolute Number Program|\n\n";
	int num,ab_value;
	cout<<"Enter a number : ";
	cin>>num;
	ab_value = abs(num);
	cout<<"the absolute value of "<<num<<" is : "<<ab_value<<endl;
}
int swap(){
	cout<<"\n                                 |7 : Swap Program|\n\n";
	int a,b,swap;
	cout<<"enter the first number : ";
	cin>>a;
	cout<<"enter the second number : ";
	cin>>b;
	cout<<"before swapping a = "<<a<<" and the b = "<<b<<endl;
	swap = a;
	a = b;
	b = swap;
	cout<<"after swapping a = "<<a<<" and the b = "<<b<<endl;
}
void name(){
	cout<<"\n                                 |8 : Full Name Displayer |\n\n";
	string name1,name2,name3;
	cout<<"please enter the first name : ";
	cin>>name1;
	cout<<"\nnow enter the middle name : ";
	cin>>name2;
	cout<<"\nenter the last name : ";
	cin>>name3;
	cout<<"\n       the full name is : "<<name1<<" "<<name2<<" "<<name3<<endl;
}
int pas(){
	cout<<"\n                                 |9 : Chech Pass Score |\n\n";
	int mark;
	cout<<"please enter your marks : ";
	cin>>mark;
	if (mark>=60){
		cout<<"      congratulation!      YOU PASSED";
	}
}
void pof(){
	cout<<"\n                                 |10 : Check Pass Score Or Fail |\n\n";
	int mark;
	cout<<"please enter your marks : ";
	cin>>mark;
	if (mark>=60){
		cout<<"      congratulation!      YOU PASSED";
	}
	if (mark<60){
		cout<<"      sorry!      YOU FAILED";
	}
}
int grade(){
	cout<<"\n                                 |11 : Grade Program |\n\n";
	int mark,cpp,html,eng,math,css,total,avg,grade;
	cout<<"please enter down your marks in details : ";
	cout<<"\n\ncpp mark : ";
	cin>>cpp;
	cout<<"html mark : ";
	cin>>html;
	cout<<"eng mark : ";
	cin>>eng;
	cout<<"math mark : ";
	cin>>math;
	cout<<"css mark : ";
	cin>>css;
	total=cpp+html+eng+math+css;
	cout<<"\n your total is : "<<total;
	avg=total/5;
	cout<<"\n your average is : "<<avg;
	if (avg<=100,avg>=90){
		cout<<"\n      your grade is  A";
	}
	else if (avg<=90,avg>=80){
		cout<<"\n      your grade is  B";
	}
	else if (avg<=80,avg>=70){
		cout<<"\n      your grade is  C";
	}
	else if (avg<=70,avg>=60){
		cout<<"\n      your grade is  D";
	}
	else{
		cout<<"\n      you fail , your grade is  E";
	}
}
int calculator(){
	cout<<"\n                                 |12 : Calculator Program|\n\n";
	char op;
	double num1,num2;
	string another;
	do {
		cout<<"What Operator Do Want To Perform Your Calculation :";
		cout<<" ( +  -  *  / ) : ";
		cin>>op;
		cout<<"Enter Number One :";
		cin>>num1;
		cout<<"Enter Number Two :";
		cin>>num2;
		switch (op){
			case '+':
				cout<<"\nThe Addition Is : "<<num1<<" "<<op<<" "<<num2<<" = "<<num1+num2<<endl;
				break;
			case '-':
				cout<<"\nThe Subtraction Is : "<<num1<<" "<<op<<" "<<num2<<" = "<<num1-num2<<endl;
				break;
			case '*':
				cout<<"\nThe Multiplication Is : "<<num1<<" "<<op<<" "<<num2<<" = "<<num1*num2<<endl;
				break;
			case '/':
		
				if(num2!=0){
					cout<<"\nThe Division Is : "<<num1<<" "<<op<<" "<<num2<<" = "<<num1/num2<<endl;
				    break;
				}
				else{
					cout<<"\nError! Division By Zero Is Not Invalid : "<<endl;
				}
			default:
		   		cout<<"Error! The Operator Is Incorrect";
		   		break;
		   	}
		   	
		cout<<"\n\nAnother Calculation (If Not Type On (No)   :  ?  (yes/no)"<<"\n\n"<<endl;
		cout<<"(yes) or (no) : ";
		cin>>another;
	}while ( another == "yes" || another == "YES");
	cout<<"\n                       Program Has Fineshed! Good Bye";
	
	return 0;
}
void pattern(){
	cout<<"\n                                 |13 : Pattern Program |\n\n";
	int n = 13;
	int c1 = (n-1)/2;
	int c2 = 3 * n / 2 - 1;
	for (int i = 0; i < n; i++){
		for(int j = 0; j < n ; j++){
			if(i + j == c1 || i - j == c1 || j - 1 == c1 || i + j == c2 || i == c1 || j == c1)
				cout<<"*";
			else
				cout<<" ";
			
		}
		cout<<endl;
	}
}
int twenty(){
	cout<<"\n                                 |14 : (24) Hours What I Did Program|\n\n";
    int hour;
    cout << "Enter the hour of the day (0-23): ";
    cin >> hour;
    if (hour >= 0 && hour < 24) {
        if (hour < 8) {
            cout << "Sleeping" << endl;
        } else if (hour < 12) {
            cout << "Morning routine and breakfast" << endl;
        } else if (hour < 14) {
            cout << "Working or studying" << endl;
        } else if (hour < 18) {
            cout << "Lunch break and relaxation" << endl;
        } else if (hour < 21) {
            cout << "Back to work or study" << endl;
        } else {
            cout << "Dinner and family time" << endl;
        }
    } else {
        cout << "Invalid hour. Please enter a value between 0 and 23." << endl;
    }

    return 0;
}
int what(){
	cout<<"\n                                 |15 : What I Did Until I Come University|\n\n";
    int wakeUpTime;
    cout << "Enter the time you woke up (0-23): ";
    cin >> wakeUpTime;
    if (wakeUpTime >= 0 && wakeUpTime < 24) {
        if (wakeUpTime < 6) {
            cout << "You woke up early, you might meditate or exercise." << endl;
        }
		else if (wakeUpTime < 7) {
            cout << "You have enough time for a full breakfast and some reading." << endl;
        }
		else if (wakeUpTime < 8) {
            cout << "Quick breakfast and maybe some last-minute review of your notes." << endl;
        }
		else {
            cout << "You're probably in a rush, grab a snack and head out." << endl;
        }
        if (wakeUpTime < 9) {
            cout << "Time to get ready for university." << endl;
            if (wakeUpTime < 8) {
                cout << "You can take your time to choose what to wear." << endl;
            }
			else {
                cout << "Choose your outfit quickly, you don't want to be late!" << endl;
            }
        }
		else {
            cout << "Seems like you're already at university or on your way there." << endl;
        }
    }
	else {
        cout << "Invalid time. Please enter a value between 0 and 23." << endl;
    }
    return 0;
} 

                                   
int main(){
	menu();
}
