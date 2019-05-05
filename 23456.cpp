#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include<windows.h>

using namespace std;
int teacherView();
int teacherLogin();
int studentView();
int studentLogin();
int viewattendance();
int registr();
int registrstudent();
int registrteacher();
int studentsecurity(string,string);
int teachersecurity(string,string);
int markattendence();
int updateattendence();
//int update_ece();
int ca_marks();
int delay();
struct markattendence
{   int reg_no;
    string user_name;
    char mark;
};
struct ca_marks
{
    int reg_no;
	int marks;
	int date;
	int month;
	int year;
    string subject;
		
};
int ca_marks()
{
cout<<"--enter the choice---"<<endl;
	cout<<"1. CA allotment"<<endl<<"2. Marks upload "<<endl;
	int l;
	cin>>l;
	switch(l)
		{
		
		case 1:
			{
	system("cls");
  struct ca_marks data;
  cout << "enter CA:";
  cin >>data.subject;
  cout << "enter Date:";
  cin >>data.date;
  cout << "enter month:";
  cin >>data.month;
  cout << "enter year:";
  cin >>data.year;   
  ofstream ca;
  ca.open("C:\\Users\\Hp\\Desktop\\cse\\ca allotment.txt", ios::app);
  ca<<data.subject<<'\t'<<data.date<<'/'<<data.month<<'/'<<data.year<<endl;
  ca.close();  
     break;}

    case 2:
    	{
    	system("cls");
  struct ca_marks upload;
  int i,saar;
  cout<<"enter number of headcounts:";
  cin>>saar;
  for(i=0;i<saar;i++)
  {
  cout << "enter reg. no:";
  cin >>upload.reg_no;
  cout << "enter marks:";
  cin >>upload.marks;   
  ofstream camarks;
  camarks.open("C:\\Users\\Hp\\Desktop\\cse\\marks upload.txt", ios::app);
  camarks<<upload.reg_no<<'\t'<<upload.marks<<'\n';
  camarks.close();  
}
break;}
}
}	

int markattendence()
{
	cout<<"--enter the choice for subject---"<<endl;
	cout<<"1. ECE 223"<<endl<<"2. CSE 202"<<endl;
	int c;
	cin>>c;
	switch(c)
		{
		
		case 1:
			{
	system("cls");
  struct markattendence profile;
  int i,head;
  cout<<"enter number of headcounts:";
  cin>>head;
  for(i=0;i<head;i++)
  {
  cout << "enter reg. no:";
  cin >>profile.reg_no;
  cout << "enter user name:";
  cin >>profile.user_name;
  cout<<"mark(y/n)";
  cin>>profile.mark;   
  ofstream utdata;
  utdata.open("C:\\Users\\Hp\\Desktop\\cse\\markattendence\\markattendence(ece 223).txt", ios::app);
  utdata<<profile.reg_no<<' '<<profile.user_name<<'\t'<<profile.mark<<'\n';
  utdata.close();  
}
break;
}
    case 2:
    	{
    	system("cls");
  struct markattendence profile;
  int i,head;
  cout<<"enter number of headcounts:";
  cin>>head;
  for(i=0;i<head;i++)
  {
  cout << "enter reg. no:";
  cin >>profile.reg_no;
  cout << "enter user name:";
  cin >>profile.user_name;
  cout<<"mark(y/n)";
  cin>>profile.mark;   
  ofstream uedata;
  uedata.open("C:\\Users\\Hp\\Desktop\\cse\\markattendence\\markattendence(cse 202).txt", ios::app);
  uedata<<profile.reg_no<<' '<<profile.user_name<<'\t'<<profile.mark<<'\n';
  uedata.close();  
}
break;	
		}
}
}
int updateattendence()
{
int reg_no;
string user_name;
char mark;
struct markattendence profile;
	cout<<"enter the choice to update attendence"<<endl;
	cout<<"1. ECE 223"<<endl<<"2. CSE 202"<<endl;
	int subject,k;
	cin>>subject;
	switch(subject)
	{
		//case 1:update_ece();break;
		//case 2:update_cse();break;
    }
}
/*int update_ece()
{
    fstream utdata;
    fstream temp;
    utdata.open("C:\\Users\\Hp\\Desktop\\cse\\markattendence\\markattendence(ece 223).txt",ios::in);
    temp.open("temp.txt",ios::out);
    int reg_no;
    string user_name;
    char mark;
   // char name [25];
   // char age[25];
   // char phone [25];
   char a[25];
    cin.ignore();
    cout<<" \n\t enter the phone number to update record : ";
    cin.getline(a,25);
    while(!utdata.eof())
    {
        utdata.getline(reg_no);
        utdata.getline(user_name);
        utdata.getline(mark);
        if(strcmp(reg_no,a)==0)
        {

            cout<<" \n\tenter new value of record  \n ";
            cout<<" \n reg_no : ";
            cin.getline(reg_no);
            cout<<" \n user_name : ";
            cin.getline(user_name);
            cout<<" \n mark : ";
            cin.getline(mark);
            temp<< reg_no<<user_name<<mark<<'\n';
        }
        else
        {
             temp<< reg_no<<user_name<<mark<<'\n';
        }


    }
    temp.close();
    utdata.close();

    utdata.open("C:\\Users\\Hp\\Desktop\\cse\\markattendence\\markattendence(ece 223).txt",ios::out);
    temp.open("temp.txt",ios::in);
    while(!temp.eof())
    {
        temp.getline(reg_no);
        temp.getline(user_name);
        temp.getline(mark);
        utdata<< reg_no<<user_name<<mark<<'\n';
    }
    temp.close();
    utdata.close();
    utdata("temp.txt");
    cout<<"\n done !!! \n";
}*/
int delay()
{
for(int i = 0; i<3; i ++)
{
	cout<<"\n Saving Records ...";
    for(int ii = 0; ii<20000; ii ++)
    {
    	for(int iii = 0; iii<20000; iii ++)
       	{
      		
	    }
    }
}
   
cout<<"\n Exiting Now ...";
for(int i = 0; i<3; i ++){
   for(int ii = 0; ii<20000; ii ++) { 
     for(int iii = 0; iii<20000; iii ++){
	 }
    } 
}

return 0;
}
int teacherView()
{	
string teacherusername, teacherpassword;

cout<<"\n Enter username : ";
cin>>teacherusername;

cout<<"\n Enter password : ";
cin>>teacherpassword;

int res= teachersecurity(teacherusername,teacherpassword);

if(res  == 0)
{
   cout<<"\n Invalid Credentials !!";
   cout<<"\n Press any key for Main Menu..";
   getchar(); getchar();	
   return 0;
}

int goBack = 0;
while(1)
{
system("cls");

cout<<"1. Mark attendance for various subjects\n";
cout<<"2. Update attendance\n";
cout<<"3. Delete the attendance\n";
cout<<"4. CA allotment and marks upload\n";
cout<<"0. Go Back <- \n";
int choice;

cout<<"\n Enter you choice: ";
cin>>choice;

switch(choice)
{
	case 1: markattendence(); break;
	case 2: updateattendence(); break;
	case 3: //deleteattendence(username); break;
	case 4: ca_marks();break;
	case 0: //goBack = 1;break;
        default: cout<<"\n Invalid choice. Enter again ";
        getchar();           	
}   

if(goBack == 1)
{
break; //break the loop
}

}
}
int teacherLogin()
{
system("cls");
cout<<"\n -------- Teacher Login ---------";	
teacherView();
delay();
return 0;
	
}
int studentView()
{
		
string studentusername, studentpassword;

cout<<"\n Enter username : ";
cin>>studentusername;

cout<<"\n Enter password : ";
cin>>studentpassword;

int res=studentsecurity(studentusername,studentpassword);

if(res  == 0)
{
   cout<<"\n Invalid Credentials !!";
   cout<<"\n Press any key for Main Menu..";
   getchar(); getchar();	
   return 0;
} 

int goBack = 0;
while(1)
{
system("cls");

cout<<"1. View the attendance\n";
cout<<"2. Percentage of attendance\n";
cout<<"3. See the upcoming topic subject wise\n";
cout<<"4. Upcoming CA\n";
cout<<"5. View of CA marks.\n";
cout<<"6. CGPA and TGPA calculator\n";
cout<<"\n 0. Go Back <- \n";
int choice;

cout<<"\n Enter you choice: ";
cin>>choice;

switch(choice)
{
	case 1: viewattendance(); break;
	case 2: //percentageattendance(username)/n; break;
	case 3: //upcomingtopic(username)/n; break;
	case 4: //upcomingca(username)/n; break;
	case 5: //viewcamarks(username)/n; break;
	case 6: //cgp_tgpa(username)/n; break;
	case 0: goBack = 1;break;
        default: cout<<"\n Invalid choice. Enter again ";
        getchar();           	
}   

if(goBack == 1)
{
break; //break the loop
}     
	
}
   
}
int viewattendance()
{
cout<<"--enter the choice for subject---"<<endl;
	cout<<"1. ECE 223"<<endl<<"2. CSE 202"<<endl;
	int o;
	cin>>o;
	switch(o)
		{
		
		case 1:
			{
	system("cls");
  int reg_no;
  std::string user_name;
  char mark;
  
  ifstream utdata("C:\\Users\\Hp\\Desktop\\cse\\markattendence\\markattendence(ece 223).txt");
  if(utdata.is_open())
  {
  	while(utdata>>reg_no>>user_name>>mark)
  	{
  	std::cout<<reg_no<<' '<<user_name<<'\t'<<mark<<'\n';
	  }
	  utdata.close();
  
	 }   
  else
  std::cout<<"file is not open"<<'\n';
  std::cin.get();
  
      break;
}
    case 2:
    	{
    	system("cls");
  struct markattendence profile;
  int i;
  ofstream uedata;
   uedata.open("C:\\Users\\Hp\\Desktop\\cse\\markattendence\\markattendence(cse 202).txt", ios::in);
  cout<<profile.reg_no;
  cout<<profile.user_name;
  cout<<profile.mark;   
  
uedata.close();  

break;	
		}
}	
}
int studentLogin()
{
system("cls");
cout<<"\n -------- Student Login ---------";	
studentView();
delay();
return 0; 
}
int registr()
{
	system("cls");
	cout<<"enter the choice\n";
    cout<<"1. student register\n";
	cout<<"2. teacher register\n";
	int q;
	cin>>q;
	switch(q)
	{
		case 1:
			{
				registrstudent();
				break;
			}
		case 2:
			{
				registrteacher();
				break;
			}
	}
			
}
int registrstudent()
{
string studentusername, studentpassword;
    cout<<"\n Enter Username : ";     cin>>studentusername;
    cout<<"\n Enter password : ";     cin>>studentpassword;
    //check if record already exist..
    ifstream read;
    read.open("C:\\Users\\Hp\\Desktop\\cse\\studentpswd.txt");
    
    if(read)
    {   int recordFound =0; 
	   string line;
	    while(getline(read, line)) {
    	if(line == studentusername+".txt" )
    	{
    		recordFound = 1 ;
    	    break;
		}
        }
        if(recordFound == 1)
        {
    	cout<<"\n Username already Register. Please choose another username ";
    	getchar(); getchar();
    	delay();
    	read.close();
    	return 0;
		}
	}
    read.close();

        ofstream out;
	out.open("C:\\Users\\Hp\\Desktop\\cse\\studentpswd.txt", ios::app);
	out<<studentusername+".txt"<<"\n";
	out.close();

	ofstream out1;
	string temp = studentusername+".txt";
	out1.open(temp.c_str());
	out1<<studentusername<<"\n"; 	out1<<studentpassword<<"\n";
	
	out1.close();

	cout<<"\n Student Registered Successfully !!";
    
        cout<<"\n Please any key to continue..";
	getchar(); getchar();
	return 0;	
}
int registrteacher()
{
	string teacherusername, teacherpassword;
    cout<<"\n Enter Username : ";     cin>>teacherusername;
    cout<<"\n Enter password : ";     cin>>teacherpassword;
    //check if record already exist..
    ifstream read;
    read.open("C:\\Users\\Hp\\Desktop\\cse\\teacherpswd.txt");
    
    if(read)
    {   int recordFound =0; 
	   string line;
	    while(getline(read, line)) {
    	if(line == teacherusername+".txt" )
    	{
    		recordFound = 1 ;
    	    break;
		}
        }
        if(recordFound == 1)
        {
    	cout<<"\n Username already Register. Please choose another username ";
    	getchar(); getchar();
    	delay();
    	read.close();
    	return 0;
		}
	}
    read.close();

        ofstream out;
	out.open("C:\\Users\\Hp\\Desktop\\cse\\teacherpswd.txt", ios::app);
	out<<teacherusername+".txt"<<"\n";
	out.close();

	ofstream out1;
	string temp = teacherusername+".txt";
	out1.open(temp.c_str());
	out1<<teacherusername<<"\n"; 	out1<<teacherpassword<<"\n";
	
	out1.close();

	cout<<"\n Teacher Registered Successfully !!";
    
        cout<<"\n Please any key to continue..";
	getchar(); getchar();
	return 0;
}
int studentsecurity( string studentusername,string studentpassword )
{
// read file line by line & check if username-password.dat exist?
// if it exsist return 1 else 0

ifstream read;
read.open("C:\\Users\\Hp\\Desktop\\cse\\studentpswd.txt");

if (read) {
// The file exists, and is open for input
int recordFound = 0;
string line;
string temp = studentusername  +".txt";
cout<<"\n file name is : "<<temp;
while(getline(read, line)) {
	if(line == temp)
	{
		recordFound = 1;
		break;
	}
}

if(recordFound == 0)
    return 0;
else
   return 1;
}
else
{
   return 0;
}
}
int teachersecurity( string teacherusername,string teacherpassword )
{
// read file line by line & check if username-password.dat exist?
// if it exsist return 1 else 0

ifstream read;
read.open("C:\\Users\\Hp\\Desktop\\cse\\teacherpswd.txt");

if (read) {
// The file exists, and is open for input
int recordFound = 0;
string line;
string temp = teacherusername  +".txt";
cout<<"\n file name is : "<<temp;
while(getline(read, line)) {
	if(line == temp)
	{
		recordFound = 1;
		break;
	}
}

if(recordFound == 0)
    return 0;
else
   return 1;
}
else
{
   return 0;
}
}
int main()
{
	system("color 7C");
int a,b;
	cout<<"     \t\t        Student Attendance and CA Management System       "<<endl;
	cout<<"               -----------------------------------------------    "<<endl<<endl;
	cout<<"                         press any key for options         "<<endl;
	cin>>a;
	system("cls");
	while(a)
	{
		system("cls");
		cout<<" \tchoose one option"<<endl;
		cout<<" \t------------------"<<endl;
		cout<<" 1. teacher login" <<endl<<endl<<" 2. student login"<<endl<<endl<<" 3. register"<<endl<<endl;   
		cin>>b;
		switch(b)
		{
			case 1:
				{
				
			    system("cls");
			    teacherLogin();
				break;
			}
			
			case 2:
				{
				system("cls");
				studentLogin();
				break;
			}
			case 3:
				{
				system("cls");
				registr();
			}
			default:
				cout<< " enter 1 (or) 2"<<endl;
				break;
		}
		
	}


     return 0;
 }
	
		        
