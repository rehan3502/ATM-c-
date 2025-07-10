#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;


void DisplayMenu();
void DisplayBalance(long balance);
void WithDrawMoney(long balance);
void Deposit(long balance);


void receipt(long balance);
int GenerateOTP(); 





int choosed;
char option;
long AmountToWithdraw;
int withdrawntest = 0 ;
int main()
{

	
	
	srand(time(0)); 

    
    ofstream otpFile("otp.txt");
    int otp = GenerateOTP();
    otpFile << otp;
    otpFile.close();
	 string otpEntered;
	
    cout << "\n\n";
    cout << "\t\t*******************************************" << endl;
    cout << "\t\t*         Automated Teller Machine        *" << endl;
    cout << "\t\t*******************************************" << endl;
    cout << "\n\n";
int balance ;
int balce ;
ifstream balfile ;
balfile.open("BAlANCE.txt") ;

{
	balfile >> balance ;
}

	balfile.close ();
	


   
	
      cout << "Dear user, an OTP has been generated in a secure file. Please enter it and do not share it with anyone.\n";
   

 cout << "Enter your OTP (4 digits): ";
    cin >> otpEntered;

    ifstream storedOTPFile("otp.txt");
    string storedOTP;
    storedOTPFile >> storedOTP;
    
if (otpEntered != storedOTP )
    {
        cout << "Invalid OTP. " << endl;
        cout <<"Two attmepts remaining"<< endl;	
    }
     else
    {
        cout << "\t\t*******************************************" << endl;
        cout << "\t\t*         WELCOME TO YOUR ACCOUNT         *" << endl;
      	cout << "\t\t*         Muhammad Rehan Siddique         *" << endl;
	    cout << "\t\t*******************************************" << endl;
      int choice;
    DisplayMenu();
    cout << "Choose your option" << endl;
    cin >> choice;
    while (choice < 0 || choice > 5)
    {
        cout << "Please enter a number between 1-5" << endl;
        cin >> choice;
    }

    do
    {
        switch (choice)
        {
        case 1:
            DisplayBalance(balance);

            choosed = 1;
            break;
        case 2:
            WithDrawMoney(balance);
            choosed = 2;
            break;
        case 3:
            Deposit(balance);
            choosed = 3;
            break;
        
        case 4:
            exit(0);
            break;
        default:
            cout << "Invalid option! Try again." << endl;
            break;
        }
    } while (choice < 0 || choice > 5);   
    }

     cout << "Enter your OTP (4 digits): ";
    cin >> otpEntered;
    
	   if (otpEntered != storedOTP )
    {
        cout << "Invalid OTP. " << endl;
        cout <<"One attmepts remaining"<< endl;
    
    }
     else
    {
        cout << "\t\t*******************************************" << endl;
        cout << "\t\t*         WELCOME TO YOUR ACCOUNT         *" << endl;
       	cout << "\t\t*         Muhammad Rehan Siddique         *" << endl;
	    cout << "\t\t*******************************************" << endl;
     
	     int choice;
    DisplayMenu();
    cout << "Choose your option" << endl;
    cin >> choice;
    while (choice < 0 || choice > 5)
    {
        cout << "Please enter a number between 1-5" << endl;
        cin >> choice;
    }

    do
    {
        switch (choice)
        {
        case 1:
            DisplayBalance(balance);

            choosed = 1;
            break;
        case 2:
            WithDrawMoney(balance);
            choosed = 2;
            break;
        case 3:
            Deposit(balance);
            choosed = 3;
            break;
        
        case 4:
            exit(0);
            break;
        default:
            cout << "Invalid option! Try again." << endl;
            break;
        }
    } while (choice < 0 || choice > 5);
    }

		
         cout << "Enter your OTP (4 digits): ";
    cin >> otpEntered;
    
	   if (otpEntered != storedOTP)
    {
        cout << "Invalid OTP. Exiting program." << endl;
        
		exit(0);
        
    }
    else
    {
        cout << "\t\t*******************************************" << endl;
        cout << "\t\t*         WELCOME TO YOUR ACCOUNT         *" << endl;
      	cout << "\t\t*         Muhammad Rehan Siddique         *" << endl;
	    cout << "\t\t*******************************************" << endl;
        

    int choice;
    DisplayMenu();
    cout << "Choose your option" << endl;
    cin >> choice;
    while (choice < 0 || choice > 5)
    {
        cout << "Please enter a number between 1-5" << endl;
        cin >> choice;
    }

    do
    {
        switch (choice)
        {
        case 1:
            DisplayBalance(balance);

            choosed = 1;
            break;
        case 2:
            WithDrawMoney(balance);
            choosed = 2;
            break;
        case 3:
            Deposit(balance);
            choosed = 3;
            break;
        
        case 4:
            exit(0);
            break;
        default:
            cout << "Invalid option! Try again." << endl;
            break;
        }
    } while (choice < 0 || choice > 5);
}

   return 0;

}


int GenerateOTP()
{
    return rand() % 9000 + 1000; 
}




void DisplayMenu()
{
    cout << "\n\n";
    cout << "\t\t*****************************************" << endl;
    cout << "\t\t*             Main Menu                 *" << endl;
    cout << "\t\t*****************************************" << endl;
    cout << "\t\t*         1 - View Account Balance      *" << endl;
    cout << "\t\t*         2 - Withdraw Money            *" << endl;
    cout << "\t\t*         3 - Deposit Money             *" << endl;
    cout << "\t\t*         4 - Exit                      *" << endl;
    cout << "\t\t*                                       *" << endl;
    cout << "\t\t*****************************************" << endl;
    cout << "\t\t*****************************************" << endl;
    cout << "\n";
}

void DisplayBalance(long balance)
{
    cout << "Your balance is: $" << balance << endl;
    char ans;
    cout << "\n\n";
}

void WithDrawMoney(long balance )
{
    choosed = 1;
    int choice;
  
    long CustomAmount;
    long CurrentBalance;
withdrawntest = 1 ;
    do
    {
        cout << "Choose an option to withdraw money" << endl;
        cout << "1 - $20" << endl;
        cout << "2 - $50" << endl;
        cout << "3 - $100" << endl;
        cout << "4 - $500" << endl;

        cin >> choice;
        switch (choice)
        {
        case 1:
            AmountToWithdraw = 20;
            break;
        case 2:
            AmountToWithdraw = 50;
            break;
        case 3:
            AmountToWithdraw = 100;
            break;
        case 4:
            AmountToWithdraw = 500;
            break;
        default:
            cout << "Invalid option! Try again." << endl;
            break;
        }
    } while (choice < 0 || choice > 5);

    if (AmountToWithdraw < balance)
    {
        CurrentBalance = balance - AmountToWithdraw;
           ofstream test("BALANCE.txt"); ;
test << CurrentBalance  ;

test.close() ;
balance = CurrentBalance ;
        cout << "You have withdrawn $" << AmountToWithdraw << " from your account." << endl;
        cout << "Your current balance is $" << balance << endl;
    }
    else
    {
        cout << "Sorry, your account balance is $" << balance << endl;
        cout << "You cannot withdraw $" << AmountToWithdraw << " from your account" << endl;
    }

    cout << "Do you want a receipt (additional $20 charge)? y or n: ";
    cin >> option;
    if (option == 'y')
    {
        receipt(balance);
    }
}

void Deposit(long balance)
{
    choosed = 2;
    char option;
    long AmountToDeposit;
    long NewBalance;
    cout << "Enter the amount you want to deposit: ";
    cin >> AmountToDeposit ;
    NewBalance = balance + AmountToDeposit;
    ofstream test ;
test.open("BALANCE.txt");
test <<  NewBalance ;

test.close() ;

    balance = NewBalance;
    cout << "You have deposited $" << AmountToDeposit << " into your account" << endl;
    cout << "Your balance now is $" << balance << endl;

    cout << "Do you want a receipt (additional $20 charge)? Yes or No: ";
    cin >> option;
    if (option == 'y')
    {
        receipt(balance);
    }
}



void receipt(long balance)
{
    ofstream print;
    print.open("receipt.txt");

    cout << "\n\n\n";
    cout << "****************************************************" << endl;
    cout << "                    RECEIPT                          " << endl;
    cout << "****************************************************" << endl;
    cout << setw(20) << left << "Date:" << __DATE__ << endl;
    cout << setw(20) << left << "Time:" << __TIME__ << endl;
    cout << "****************************************************" << endl;
    cout << setw(20) << left << "Current Balance:" << "$" << balance << endl;

    if (withdrawntest == 1)
    {
        cout << setw(20) << left << "Amount Withdrawn:" << "$" << AmountToWithdraw << endl;
        cout << "****************************************************" << endl;
        cout << "Thank you for using our services! Please come again." << endl;
        print << "Amount Withdrawn: $" << AmountToWithdraw << endl;
        print << "****************************************************" << endl;
        print << "Thank you for using our services! Please come again." << endl;
    }
    else
    {
        cout << "****************************************************" << endl;
    }

    // Save the receipt to a file
    print << "\n\n\n";
    print << "****************************************************" << endl;
    print << "                    RECEIPT                          " << endl;
    print << "****************************************************" << endl;
    print << setw(20) << left << "Date:" << __DATE__ << endl;
    print << setw(20) << left << "Time:" << __TIME__ << endl;
    print << "****************************************************" << endl;
    print << setw(20) << left << "Current Balance:" << "$" << balance << endl;

    if (withdrawntest == 1)
    {
        print << setw(20) << left << "Amount Withdrawn:" << "$" << AmountToWithdraw << endl;
        print << "****************************************************" << endl;
        print << "Thank you for using our services! Please come again." << endl;
    }
    else
    {
        print << "****************************************************" << endl;
    }

    cout << "You can print the receipt from the file 'receipt.txt'" << endl;
    print.close();

}
	

