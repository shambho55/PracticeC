 #include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main(){
	int a,i = 0;
	string text,old,password1,password2,pass,name,password0,age,user,word,word1;
	string creds[2],cp[2];

	cout << "  		Security System " << "\n";

	cout << "________________________________" << "\n" << "\n";
	cout << "|			1. Register          |" << "\n";
	cout << "|			2. Login          	 |" << "\n";
	cout << "|			3. Change Password   |" << "\n";
	cout << "|__________4. End Program_______|" << "\n" << "\n";

	do{
		cout << "\n" << "\n";
		cout << "Enter you choice:	";
		cin >> a;
		switch(a){
			case 1:{
				cout << "________________________________" << "\n" << "\n";
				cout << "|------------Register----------|" << "\n";
				cout << "|______________________________|" << "\n" << "\n";
				cout << " Please enter username :- ";
				cin >> name;
				cout << " Please enter your password :- ";
				cin >> password0;
				cout << "Please enter your age :- ";
				cin >> age;

				ofstream of1;
				of1.open("file.txt");
				if(of1.is_open()){
					of1 << name << "\n";
					of1 << password0;
					cout << "Registration successful" << "\n";
				}
				break;
			}
			case 2:{
				i = 0;
				cout << "_________________________________" << "\n";
				cout << "|--------------login------------|" << "\n";
				cout << "|________________________________" << "\n" << "\n";

				ifstream of2;
				of2.open("file.txt");
				cout << " Please enter username :- ";
				cin >> user;
				cout << " Please enter your password :- " ;
				cin >> pass;

				if(of2.is_open()){
					while(!of2.eof()){
						while(getline(of2,text)){
							istringstream iss(text);
							iss >> word;
							creds[i] = word;
							i++;
						}

						if(user == creds[0] && pass == creds[1]){
							cout << "----------login successful------------" ;
							cout << "\n" << '\n';

							cout << "Details : " << "\n";
							cout << "Username : " << name << "\n";
							cout << "Password : " << pass << "\n";
							cout << "Age: " << age << "\n";
						}
						else{
							cout << "\n" << "\n" ;
							cout << "Incorrect Credentials" << "\n";
							cout << "|		   1.Press 2 to Login			   |" << "\n";
							cout << "|         2.Press 3 to change password    |" << "\n";
							break;

						}
					}
				}
				break;
			}
		case 3:{
			i = 0;
			cout << "----------Change password---------" << "\n";
			
			ifstream of0;
			of0.open("file.txt");
			cout << "Enter the old password :- " ;
			cin >> old;
			if(of0.is_open()){
				while(of0.eof()){
					while(getline(of0,text)){
						istringstream iss(text);
						iss >> word1;
						cp[i] = word1;
						i++;
					}

					if(old == cp[1]){
						of0.close();

						ofstream of1;
						if(of1.is_open()){
							cout << " Enter your new password :- ";
							cin >> password1;
							cout << "Enter your password again :- " ;
							cin >> password2;

							if(password1 == password2){
								of1 << cp[0] << "\n";
								of1 << password1 ;
								cout << "Password changed successfully" << "\n";
							}
							else{
								of1 << cp[0] << "\n";
								of1 << old;
								cout << "Password do not match" << "\n";
							}
						}
					}
					else{
						cout << "Please enter a valid password" << "\n";
						break;
					}
				}
			}
			break;
		}
	case 4:{
		cout << "__________Thank You!___________" ;
		break;
		}
	default:
		cout << "Enter a valid choice";
	}
	}
	while(a != 4);
	return 0;

}