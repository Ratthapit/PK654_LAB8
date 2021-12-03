#include <iostream>
#include<string>
using namespace std;
int main() {
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n?????: ";
   	
   	string name;
   	getline(cin,name);
   	
   	cout << "Fahsai: Wow!!! "<<name<<" is a really cool name.\n";
   	cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n"<<name<<": ";
   	
	int studen_id;
   	cin>>studen_id;
   	cin.ignore();
   	
	int x=studen_id;
   	while(x>99){
		if(studen_id>99){
			studen_id /=10;
		}
		
		x=studen_id;
	}
	
	cout << "Fahsai: I think you may be GEAR "<<studen_id-12<<". I have a free movie ticket for you.\n";
	cout << "Fahsai: Let's go to the cinema together!!!\n";
	cout << "Fahsai: What movie do you want to watch?\n"<<name<<": ";
	
	string Movie_name;
   	getline(cin,Movie_name);
   	
   	cout << "Fahsai: So....which day are you free to go with me?\n"<<name<<": ";
   	
   	string day;
   	getline(cin,day);
   	
   	cout << "Fahsai: "<<day<<"....that is OK!!! I'm looking forward to watching "<<Movie_name<<" with you.\n"<<name<<": ";
   	
   	string say_something;
   	getline(cin,say_something);
   	
    cout << "Fahsai: 555+ see you "<<day<<". Bye Bye \\(^ ^)/ ";
    
}