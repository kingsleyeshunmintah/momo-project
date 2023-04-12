#include <iostream>

	// ....Header Files..... //
using namespace std;

int main() {
	// ...... Variables
	int attempt , time_out , option ;
	string pin = "0000" , reset_pin , number , number2 , ref;
 	float amount ,  new_balance , balance = 1000.00 ;


start:
cout<<"\n********** Momo Portal *********** \n\n\n";
cout<<"Select from option 1-3 : \n"
	"	1. RESET PIN\n"
	"	2. TRANSFER MONEY\n"
	"	3. CHECK BALANCE\n "
	"	4. ADD MONEY\n"
	"	5. exit\n\n\n"
	"**********************************\nEnter :"
;cin>>option;
switch(option){
	
		system("cls");
	case 1:
		system("cls");
		cout<<"********** Reset Pin **********\n"
		"Enter old pin "; cin >> reset_pin;
		
		if(reset_pin != pin){
			system("cls");
			cout<<"\n\n\n\nWrong Pin\n\n\n\n"
			"************************\a";
			attempt = attempt + 1;
			if(attempt == 3){
				cout<<" Account Blocked due to many wrong Pin entries!\n\a";
				return 0;
			}
			goto start;
			}else{
				attempt = 0;
				cout<<"\n\n\n********************\n\n\n"
				"Enter New Pin "; cin>>reset_pin;
				pin = reset_pin;
				system("cls");
				cout<<"\n*********************\n\n"
				"Pin Reset was successful, \n current Pin is "<<pin
				<<"\n\n\n*******************\n\n\n";
				;
				goto start;
			}
		;
	break;	
	case 2:
		
			system("cls");
		cout<<"********** Trasfer Money **********\n"
		"Enter Receipient Contact "; cin >> number;
			cout<<"Confirm Contact  ";cin>>number2;
			if(number != number2){
					system("cls");
				cout<<"\n\n"<<number<<" & "<<number2<<" do not match  \n";
			
				goto start;
			}else{
				
			
					cout<<"\nEnter Amount ";cin >> amount;
					cout<<"\nEnter refernce "; cin>>ref;
					cout<<"\n Confirm Pin to send "<<amount<<" to "<<number<<" ";
					cin>>reset_pin; 	
				if(reset_pin != pin ){
					system("cls");
					cout<<"\n\n\n\nWrong Pin\n\n\n\n"
					"************************\a";
					attempt = attempt + 1;
						if(attempt == 3){
				cout<<" Account Blocked due to many wrong Pin entries!\n\a";
					return 0;
					}
					goto start;
					
					}else if(amount > balance){
							system("cls");
						cout<<"\n\n\n********************\n\n\n"
						"Insuficient Amount, You need additional GHC "<<amount-balance<<" to send GHC "<<amount;
					 
						cout<<"\n*********************\n\n\a";
						
						goto start;			
					}else{
							attempt = 0;
							system("cls");
							balance = balance-amount;
						cout<<" Amount of GHC "<<amount<<" Sent to "<<number<<"with reference "<<ref;
						cout<<"\n Current Balnce is GHC "<<balance<<endl;
					 
						goto start;
					}
				}
		;
		
	break;
	case 3:
			system("cls");
		cout<<"********** CHECK BALANCE **********\n"
		"Enter PIN To Access  ";ecd: cin >> reset_pin;
		if(reset_pin != pin && attempt<3){
					system("cls");
			cout<<"\n\n\n\nWrong Pin\n\n\n\n"
					"************************\a\n";
					attempt = attempt + 1;
					cout<<3-attempt<<" entries reaminig!!";
					goto ecd;
					
					if(attempt == 3){
				cout<<" Account Blocked due to many wrong Pin entries!\n\a";
					return 0;
				}
				goto start;
			}else{
			attempt = 0;
			cout<<"\n\n\ Current Balance is GHC "<<balance<<endl;
			goto start;
			
			}
		
	break;
	case 4:
	
		system("cls");
		cout<<"********** ADD MONEY FROM eCODE BANK **********\n"
		"Enter Amount  "; cin >>amount;
		new_balance = balance + amount;
		cout<<"Current balance is GHC "<<new_balance<<", Previous balance was GHC "<<balance;
		balance = new_balance;
		goto start;

	break;
	case 5:
		system("cls");
		cout<<"\n\n******* exit Successful *******\n";
		cout<<"Thanks For Using Our Program [ UENR -IT (A)]\a ";
		
		return 0;
		
	break;	
	
	default: system("cls");
		cout<<"Invalid Option\n Try again";
		 cout<<"\a\ncodes by Eshun : UEB3221622";
		 
	goto start;
	break;
}



	 
	
	return 0;
}
