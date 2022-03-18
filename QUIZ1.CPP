#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
struct student{
    char name[30],roll[10];
    int marks,random;
};
student st;
void cpp(){
     char choice;
     st.marks=0;
     int i=0,j,arr[5];
     while(i<6)
     {
     back:
     st.random=rand()%5;
     for(j=0;j<=5;j++){
      if(st.random==arr[j])
	   goto back;
      }
    }
    arr[i]=st.random;
     switch(st.random){
	case 0:cout<<i+1<<") What is a correct syntax to output \"Hello World\" in C++?"<<endl;
     cout<<"A. System.out.println(\"Hello world\");"<<endl;
     cout<<"B. Console.WriteLine(\"Hello world\");"<<endl;
     cout<<"C. print(\"Hello world\");"<<endl;
     cout<<"D. cout<<\"Hello world\";"<<endl;
     choice=getch();
     if(choice=='D'||choice=='d'){
	cout<<choice<<" is correct Answer"<<endl;
	st.marks++;
     }
     else{
	cout<<choice<<" is incorrect Answer"<<endl;
	cout<<"The corrent answer is d"<<endl;
     }
	break;
	case 1:cout<<i+1<<") Which of the following is called address operator?"<<endl;
	cout<<"a) *"<<endl;
	cout<<"b) &"<<endl;
	cout<<"c) _"<<endl;
	cout<<"d) %"<<endl;
	choice=getch();
	if(choice=='B'||choice=='b'){
		cout<<choice<<" is correct Answer"<<endl;
		st.marks++;
	}
	else{
		cout<<choice<<" is incorrect Answer"<<endl;
		cout<<"The corrent answer is b"<<endl;
	}
	break;
	case 2:cout<<i+1<<") Which of the following is used for comments in C++?"<<endl;
		cout<<"a) // comment"<<endl;
		cout<<"b) /* comment */"<<endl;
		cout<<"c) both // comment or /* comment */"<<endl;
		cout<<"d) // comment */"<<endl;
		choice=getch();
	if(choice=='c'||choice=='C'){
		cout<<choice<<" is correct Answer"<<endl;
		st.marks++;
	}
	else{
		cout<<choice<<" is incorrect Answer"<<endl;
		cout<<"The corrent answer is c"<<endl;
	}
	break;
	case 3:cout<<i+1<<") Who created C++?"<<endl;
		cout<<"a) Bjarne Stroustrup"<<endl;
		cout<<"b) Dennis Ritchie"<<endl;
		cout<<"c) Ken Thompson"<<endl;
		cout<<"d) Brian Kernighan"<<endl;
		choice=getch();
	if(choice=='A'||choice=='a'){
		cout<<choice<<" is correct Answer"<<endl;
		st.marks++;
	}
	else{
		cout<<choice<<" is incorrect Answer"<<endl;
		cout<<"The corrent answer is a"<<endl;
	}
	break;
	case 4:cout<<i+1<<")  A language which has the capability to generate new data types are called"<<endl;
		cout<<"a) Extensible"<<endl;
		cout<<"b) Overloaded"<<endl;
		cout<<"c) Encapsulated"<<endl;
		cout<<"d) Reprehensible"<<endl;
		choice=getch();
	if(choice=='A'||choice=='a'){
		cout<<choice<<" is correct Answer"<<endl;
		st.marks++;
	}
	else{
		cout<<choice<<" is incorrect Answer"<<endl;
		cout<<"The corrent answer is A"<<endl;
	}
	break;
	case 5:cout<<i+1<<") Which of the following is called insertion/put to operator?"<<endl;
		cout<<"a) <"<<endl;
		cout<<"b) >"<<endl;
		cout<<"c) <<"<<endl;
		cout<<"d) >>"<<endl;
		choice=getch();
	if(choice=='c'||choice=='C'){
		cout<<choice<<" is correct Answer"<<endl;
		st.marks++;
	}
	else{
		cout<<choice<<" is incorrect Answer"<<endl;
		cout<<"The corrent answer is C"<<endl;
	}
	break;
	case 6:cout<<i+1<<") Which of the following is called extraction/get from operator?"<<endl;
		cout<<"a) <"<<endl;
		cout<<"b) >"<<endl;
		cout<<"c) <<"<<endl;
		cout<<"d) >>"<<endl;
		choice=getch();
	if(choice=='d'||choice=='D'){
		cout<<choice<<" is correct Answer"<<endl;
		st.marks++;
	}
	else{
		cout<<choice<<" is incorrect Answer"<<endl;
		cout<<"The corrent answer is D"<<endl;
	}
	break;
     }
	i++;
}

void java(){
     char choice;
     st.marks=0;
     int i=0,j,arr[5];
     while(i<6)
     {
     back:
     st.random=rand()%5;
     for(j=0;j<=5;j++){
      if(st.random==arr[j])
	   goto back;
      }
    }
    arr[i]=st.random;
     switch(st.random){
	case 0:cout<<i+1<<") Number of primitive data types in Java are?"<<endl;
     cout<<"A. 6"<<endl;
     cout<<"B. 7"<<endl;
     cout<<"C. 8"<<endl;
     cout<<"D. 9"<<endl;
     choice=getch();
     if(choice=='C'||choice=='c'){
	cout<<choice<<" is correct Answer"<<endl;
	st.marks++;
     }
     else{
	cout<<choice<<" is incorrect Answer"<<endl;
	cout<<"The corrent answer is c"<<endl;
     }
	break;
	case 1:cout<<i+1<<") What is the size of float and double in java?"<<endl;
	cout<<"a) 32 and 64"<<endl;
	cout<<"b) 32 and 32"<<endl;
	cout<<"c) 64 and 32"<<endl;
	cout<<"d) 64 and 64"<<endl;
	choice=getch();
	if(choice=='A'||choice=='a'){
		cout<<choice<<" is correct Answer"<<endl;
		st.marks++;
	}
	else{
		cout<<choice<<" is incorrect Answer"<<endl;
		cout<<"The corrent answer is a"<<endl;
	}
	break;
	case 2:cout<<i+1<<")Automatic type conversion is possible in which of the possible cases?"<<endl;
		cout<<"a) byte to int"<<endl;
		cout<<"b) int to long"<<endl;
		cout<<"c) long to int"<<endl;
		cout<<"d) short to int"<<endl;
		choice=getch();
	if(choice=='B'||choice=='b'){
		cout<<choice<<" is correct Answer"<<endl;
		st.marks++;
	}
	else{
		cout<<choice<<" is incorrect Answer"<<endl;
		cout<<"The corrent answer is b"<<endl;
	}
	break;
	case 3:cout<<i+1<<")When an array is passed to a method, what does the method receive?"<<endl;
		cout<<"a) The reference of the array"<<endl;
		cout<<"b) A copy of the array"<<endl;
		cout<<"c) Length of the array"<<endl;
		cout<<"d) Copy of first element"<<endl;
		choice=getch();
	if(choice=='A'||choice=='a'){
		cout<<choice<<" is correct Answer"<<endl;
		st.marks++;
	}
	else{
		cout<<choice<<" is incorrect Answer"<<endl;
		cout<<"The corrent answer is a"<<endl;
	}
	break;
	case 4:cout<<i+1<<") Arrays in java are-"<<endl;
		cout<<"a) Object references"<<endl;
		cout<<"b) objects"<<endl;
		cout<<"c) Primitive data type"<<endl;
		cout<<"d) None of the above"<<endl;
		choice=getch();
	if(choice=='B'||choice=='b'){
		cout<<choice<<" is correct Answer"<<endl;
		st.marks++;
	}
	else{
		cout<<choice<<" is incorrect Answer"<<endl;
		cout<<"The corrent answer is b"<<endl;
	}
	break;
	case 5:cout<<i+1<<") When is the object created with new keyword?"<<endl;
		cout<<"a) At run time"<<endl;
		cout<<"b) At compile time"<<endl;
		cout<<"c) Depends on the code"<<endl;
		cout<<"d) None of the above"<<endl;
		choice=getch();
	if(choice=='A'||choice=='a'){
		cout<<choice<<" is correct Answer"<<endl;
		st.marks++;
	}
	else{
		cout<<choice<<" is incorrect Answer"<<endl;
		cout<<"The corrent answer is A"<<endl;
	}
	break;
	case 6:cout<<i+1<<") Identify the keyword among the following that makes a variable belong to a class,rather than being defined for each instance of the class."<<endl;
		cout<<"a) final"<<endl;
		cout<<"b) static"<<endl;
		cout<<"c) volatile"<<endl;
		cout<<"d) abstract"<<endl;
		choice=getch();
	if(choice=='b'||choice=='B'){
		cout<<choice<<" is correct Answer"<<endl;
		st.marks++;
	}
	else{
		cout<<choice<<" is incorrect Answer"<<endl;
		cout<<"The corrent answer is B"<<endl;
	}
	break;
     }
	i++;
}
void html(){
	char choice;
     st.marks=0;
     int i=0,j,arr[5];
     while(i<6)
     {
     back:
     st.random=rand()%5;
     for(j=0;j<=5;j++){
      if(st.random==arr[j])
	   goto back;
      }
    }
    arr[i]=st.random;
     switch(st.random){
	case 0:cout<<i+1<<") What does the abbreviation HTML stand for?"<<endl;
     cout<<"A. HyperText Markup Language"<<endl;
     cout<<"B. HighText Markup Language"<<endl;
     cout<<"C. HyperText Markdown Language"<<endl;
     cout<<"D. None of the above"<<endl;
     choice=getch();
     if(choice=='A'||choice=='a'){
	cout<<choice<<" is correct Answer"<<endl;
	st.marks++;
     }
     else{
	cout<<choice<<" is incorrect Answer"<<endl;
	cout<<"The corrent answer is a"<<endl;
     }
	break;
	case 1:cout<<i+1<<") How many sizes of headers are available in HTML by default?"<<endl;
	cout<<"a) 5"<<endl;
	cout<<"b) 1"<<endl;
	cout<<"c) 3"<<endl;
	cout<<"d) 6"<<endl;
	choice=getch();
	if(choice=='D'||choice=='d'){
		cout<<choice<<" is correct Answer"<<endl;
		st.marks++;
	}
	else{
		cout<<choice<<" is incorrect Answer"<<endl;
		cout<<"The corrent answer is d"<<endl;
	}
	break;
	case 2:cout<<i+1<<") What is the smallest header in HTML by default?"<<endl;
		cout<<"a) h1"<<endl;
		cout<<"b) h2"<<endl;
		cout<<"c) h6"<<endl;
		cout<<"d) h4"<<endl;
		choice=getch();
	if(choice=='c'||choice=='C'){
		cout<<choice<<" is correct Answer"<<endl;
		st.marks++;
	}
	else{
		cout<<choice<<" is incorrect Answer"<<endl;
		cout<<"The corrent answer is c"<<endl;
	}
	break;
	case 3:cout<<i+1<<")What are the types of lists available in HTML?"<<endl;
		cout<<"a) Ordered, Unordered Lists"<<endl;
		cout<<"b) Bulleted, Numbered Lists"<<endl;
		cout<<"c) Named, Unnamed Lists"<<endl;
		cout<<"d) None of the above"<<endl;
		choice=getch();
	if(choice=='A'||choice=='a'){
		cout<<choice<<" is correct Answer"<<endl;
		st.marks++;
	}
	else{
		cout<<choice<<" is incorrect Answer"<<endl;
		cout<<"The corrent answer is a"<<endl;
	}
	break;
	case 4:cout<<i+1<<") How to create an ordered list in HTML?"<<endl;
		cout<<"a) <ul>"<<endl;
		cout<<"b) <ol>"<<endl;
		cout<<"c) <href>"<<endl;
		cout<<"d) <b>"<<endl;
		choice=getch();
	if(choice=='B'||choice=='b'){
		cout<<choice<<" is correct Answer"<<endl;
		st.marks++;
	}
	else{
		cout<<choice<<" is incorrect Answer"<<endl;
		cout<<"The corrent answer is b"<<endl;
	}
	break;
	case 5:cout<<i+1<<") HTML files are saved by default with the extension?"<<endl;
		cout<<"a) .html"<<endl;
		cout<<"b) .h"<<endl;
		cout<<"c) .ht"<<endl;
		cout<<"d) None of the above"<<endl;
		choice=getch();
	if(choice=='a'||choice=='A'){
		cout<<choice<<" is correct Answer"<<endl;
		st.marks++;
	}
	else{
		cout<<choice<<" is incorrect Answer"<<endl;
		cout<<"The corrent answer is a"<<endl;
	}
	break;
	case 6:cout<<i+1<<") We enclose HTML tags within?"<<endl;
		cout<<"a) {}"<<endl;
		cout<<"b) <>"<<endl;
		cout<<"c) !!"<<endl;
		cout<<"d) None of the above"<<endl;
		choice=getch();
	if(choice=='b'||choice=='B'){
		cout<<choice<<" is correct Answer"<<endl;
		st.marks++;
	}
	else{
		cout<<choice<<" is incorrect Answer"<<endl;
		cout<<"The corrent answer is b"<<endl;
	}
	break;
     }
	i++;
}

void result(){
    int per=0;
    cout<<"STUDENT NAME: "<<st.name<<endl;
    cout<<"ROLL NO.: "<<st.roll<<endl;
    cout<<"MARKS: "<<st.marks<<"OUT OF 6"<<endl;
    per=(100*st.marks)/6;
    cout<<"PERCENTAGE: "<<per<<"%"<<endl;
    if(per>=50)
      cout<<"PASSED"<<endl;
    else
      cout<<"FAILED"<<endl;
}
void main()
{
	clrscr();
	char press;int select;
     do{
	  clrscr();
	  cout<<"**********"<<endl;
	  cout<<"QUIZ GAME"<<endl;
	  cout<<"**********"<<endl;
	  cout<<"BUDDY, ENTER YOUR FIRST NAME:"<<endl;
	  cin>>st.name;
	  cout<<"AND YOU ROLL NO:"<<endl;
	  cin>>st.roll;
	  clrscr();
	  cout<<"MARKS LESS THAN 50% WILL BE CONSIDERED AS FAILED"<<endl;
	  cout<<"SELECT ON WHICH SUBJECT OR TOPIC YOU WANT YOUR QUIZ"<<endl;
	  cout<<"1.) C++"<<endl;
	  cout<<"2.) JAVA"<<endl;
	  cout<<"3.) HTML"<<endl;
	  select=getch();
	  clrscr();
	  switch(select){
	      case 1:
		   cout<<"**** C++ QUIZ ****"<<endl;
		   cpp();
		   clrscr();
		   cout<<"C++ QUIZ RESULT="<<endl;
		   result();
		   break;
	      case 2:
		   cout<<"**** JAVA QUIZ ****"<<endl;
		   java();
		   clrscr();
		   cout<<"JAVA QUIZ RESULT="<<endl;
		   result();
		   break;
	      case 3:
		   cout<<"**** HTML QUIZ ****"<<endl;
		   html();
		   clrscr();
		   cout<<"HTML QUIZ RESULT="<<endl;
		   result();
		   break;
	      default:
		   cout<<"INVALID INPUT, PLEASE CHECK"<<endl;
		   break;
	  }
	  cout<<"PRESS Y OR y TO CONTINUE, ELSE ANY KEY TO TERMINATE"<<endl;
	  press=getch();
	  clrscr();
     }while(press=='y'||press=='Y');
  getch();
}

