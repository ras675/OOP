#include <iostream>
#include <iomanip>
#include <time.h>
#include <fstream>
#include <string.h>
#include <stdlib.h>

using namespace std;


//==================================================================================================
class Bank //abstract base class
{
public:
    double startBalance;
    string COKAccountHolders;
    double limit;

};


//==================================================================================================
class ATMAccountHolders:public Bank
{
    string accountHolder;
    string accountHolderAddress, branch;
    int accountNumber;
    double startBalance;
    double accountBalance;
    double accountInterest;
    double amount;
    int count;

public:

    void deposit();
    void withdraw();
    void details();
    void payBills();
    void accountExit();
    void interest();

    ATMAccountHolders()
    {
        accountNumber = 210041263;
        accountHolder = "Asif Rayhan";
        accountHolderAddress = "IUT";
        startBalance = 60000.00;
        accountBalance = 60000.00;
        branch  = "AB Bank";
        //amount = 20000;
    }
};
//==================================================================================================
void ATMAccountHolders::interest()
{
    system("cls");

    //cout<<"\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\ATM ACCOUNT INTEREST PAYMENT\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
    cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ATM ACCOUNT INTEREST PAYMENT \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
    cout<<"\t\tThe Interest is calculated over the last SIX months on the present available balance\n\n";
    cout<<"\n\t\tInterest Rate payable is 10% per annual."<<endl<<endl;
    cout<<"\t\tView the accumulated interest? Press any key...\n\n";

    system("pause");
    system("cls");

    cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ATM ACCOUNT INTEREST PAYMENT \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";

    cout<<"\tAccountHolder name :"<<accountHolder<<"\n\n";
    cout<<"\tThe Account Holders' address is :"<<accountHolderAddress<<"\n\n";
    cout<<"\tThe Branch location is :"<<branch<<"\n\n";
    cout<<"\tAccount number :"<<accountNumber<<"\n\n";
    cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
    cout<<"\tStarting account balance :BDT" << startBalance<<"\n\n";
    cout<<"\tPresent available balance :BDT" << accountBalance<<"\n\n";
    accountInterest=accountBalance*0.10*0.5;
    cout<<"\tAfter six month,the interest will be:BDT"<< accountInterest<<endl<<endl;
    accountBalance=accountBalance+accountInterest;
    cout<<"\tAfter six month,the total available balance will be:BDT"<< accountBalance<<endl<<endl;
    cout<<"\tPress any key to Return to the Main Menu\n\n";
    system("PAUSE");
    system("cls");
}
//==================================================================================================


//==================================================================================================
void ATMAccountHolders::deposit()
{
    system("cls");
    cout<<"\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ATM ACCOUNT DEPOSIT SYSTEM \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";

    cout<<"\tAccountHolder name :"<<accountHolder<<"\n\n";
    cout<<"\tThe Account Holders' address is :"<<accountHolderAddress<<"\n\n";
    cout<<"\tThe Branch location is :"<<branch<<"\n\n";
    cout<<"\tAccount number :"<<accountNumber<<"\n\n";
    cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
    cout<<"\tStarting account balance :BDT" << startBalance<<"\n\n";
    cout<<"\tPresent available balance :BDT" << accountBalance<<"\n\n";
    cout<<"\tEnter the Amount to be Deposited :BDT";

    double amount;
    cin>>amount;
    cout<<"\n\n";

    if(amount<0)

    {
        //system("cls");
        cout<<"\tDeposited amount cannot be negetive\n\n";
        cout<<"\tThank you\n\n";
        cout<<"Press any key to return to main menu\n\n";
        system("PAUSE");
        system("cls");


    }
    else
    {


        accountBalance=accountBalance+amount ;
        cout<<"\n\tYour new available Balance is:BDT" << accountBalance<<endl;
        cout<<"\n\t\t\tThank You!\n\n"<<endl;
        cout<<"Press any key to Return to the Main Menu\n\n";
        system("PAUSE");
        system("cls");
    }
}
//==================================================================================================
void ATMAccountHolders::withdraw()//Withdrawal Transactions
{
    system("cls");
    cout<<"\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ATM ACCOUNT WTHDRAWAL \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";

    cout<<"\tAccountHolder name :"<<accountHolder<<"\n\n";
    cout<<"\tThe Account Holders' address is :"<<accountHolderAddress<<"\n\n";
    cout<<"\tThe Branch location is :"<<branch<<"\n\n";
    cout<<"\tAccount number :"<<accountNumber<<"\n\n";
    cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
    cout<<"\tStarting account balance :BDT" << startBalance<<"\n\n";
    cout<<"\tPresent available balance :BDT" << accountBalance<<"\n\n";
    cout<<"\tEnter the Amount to be Withdrawn BDT";

    double amount;
    cin>>amount;

    if(amount>accountBalance)
    {
        system("cls");
        cout<<"\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ATM ACCOUNT WITHDRAWAL \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
        cout<<"\tAccountHolder name :"<<accountHolder<<"\n\n";
        cout<<"\tThe Account Holders' address is :"<<accountHolderAddress<<"\n\n";
        cout<<"\tThe Branch location is :"<<branch<<"\n\n";
        cout<<"\tAccount number :"<<accountNumber<<"\n\n";
        cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
        cout<<"\n\tInsufficient  Balance in your account.\n\n"<<endl;
        cout<<"\t\t\tSorry !!\n"<<endl;
        system("PAUSE");
        system("cls");
    }
    else
    {
        double b;
        accountBalance=accountBalance-amount ;
        system("cls");
        cout<<"\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ATM ACCOUNT WTHDRAWAL \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
        cout<<"\tAccountHolder name :"<<accountHolder<<"\n\n";
        cout<<"\tThe Account Holders' address is :"<<accountHolderAddress<<"\n\n";
        cout<<"\tThe Branch location is :"<<branch<<"\n\n";
        cout<<"\tAccount number :"<<accountNumber<<"\n\n";
        cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
        cout<<"\tYour new available Balance is BDT" << accountBalance<<endl<<endl;
        cout<<"\t\t\tThank you"<<endl<<endl;
        cout<<"\tPress any key to Return to the Main Menu\n\n";
        system("PAUSE");
        system("cls");
    }

}
//==================================================================================================
void ATMAccountHolders::payBills()
{
    system("cls");


    cout<<"\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ATM BILLS PAYMENT SYSTEM \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n";

    cout<<"\tAccountHolder name :"<<accountHolder<<"\n\n";
    cout<<"\tThe Account Holders' address is :"<<accountHolderAddress<<"\n\n";
    cout<<"\tThe Branch location is :"<<branch<<"\n\n";
    cout<<"\tAccount number :"<<accountNumber<<"\n\n";
    cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
    cout<<"Pay Electricity bill in BDT now?\n\n";
    cout<<"\t\tPress 1 for Yes OR Press 0 for No\n\n";

    int r;

    cin>>r;
    system("cls");
    cout<<"Enter bill in BDT:\n"<<endl;
    if(r==1)
    {
        int bill;
        cin>>bill;
        accountBalance=accountBalance-bill;
        system("cls");
        cout<<"\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ATM BILLS PAYMENT SYSTEM \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n";
        cout << "\n\tYour electricity bill of BDT " << bill << " has been paid.\n\n";

        cout<<"\tYour account new available balance is BDT" << accountBalance<<endl ;
        cout<<"\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
        cout<<"Press any key to Return to the Main Menu\n\n";

    }
    if(r==0)
    {
        system("cls");
        cout<<"\n===========================ATM BILLS PAYMENT SYSTEM==========================\n\n";
        cout<<"\n\n\tExiting Bill Payment System.\n\n";
        cout<<"====================THANK YOU============================\n\n";
    }
    system("PAUSE");
    system("cls");
};

//==================================================================================================
void ATMAccountHolders::details()
{
    system("cls");


    cout<<"\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ATM ACCOUNT DETAILS \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
    cout<<"\tAccountHolder name :"<<accountHolder<<"\n\n";
    cout<<"\tThe Account Holders' address is :"<<accountHolderAddress<<"\n\n";
    cout<<"\tThe Branch location is :"<<branch<<"\n\n";
    cout<<"\tAccount number :"<<accountNumber<<"\n\n";
    cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
    cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
    cout<<"Press any key to Return to the Main Menu\n\n";

    system("PAUSE");
    system("cls");
}

//==================================================================================================

void ATMAccountHolders::accountExit()
{
    system("cls");


    cout<<"\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\ ATM ACCOUNT EXIT \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";

    cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
    // system("PAUSE");
    exit(1);
}



//==================================================================================================

class Limits:public Bank
{
public:
    void SetLimit(double NewLimit)
    {}

    double Getlimit()
    {}

};

int main()
{
    int e;
    ATMAccountHolders p;

    system ("Color 3f");
    cout<<"\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\ WELCOME TO ATM \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
    cout<<"\t\t\t--------------------\n"<<endl;
    //Prompt to show today's date
    cout << "\t\tCurrent date : ";
    //Show date and time function
    time_t now;
    time(&now);

    printf("%s\n", ctime(&now));;
    //Give space for the function of date and time
    cout<<"\t\t\t--------------------\n"<<endl;
    cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
    //==================================================================================================

    cout<<"\tPress 1 and Then Press Enter to Access Your Account Via account  Number\n\n";
    cout<<"\t\t\t\t\t or \n\n";
    cout<<"\tPress 0 and press Enter to get Help.\n\n";

    int access;
    cin>>access;
    switch(access)
    {
    case 1://account number to access account
        system("cls");
        int i,account_number,pin;

        cout<<"\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ATM ACCOUNT ACCESS \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
        cout<<"\n\nEnter Your Account number to Access! [Only one attempt is allowed]\n\n"<<endl;
        cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
        cin>>account_number;

        system("cls");

        if(account_number==210041263)

        {
            system("cls");
            cout<<"\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ATM ACCOUNT ACCESS \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
            cout<<"\n\nEnter your account pin number![only one attempt is allowed]\n\n"<<endl;
            cin>>pin;
            system("cls");
            if(pin==263)
            {
                system("cls");
                do
                {



                    cout << endl << "\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ATM Main Menu Screen \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n" << endl;
                    cout << "\t\tEnter [1] To  Deposit Cash" << endl;
                    cout << "\t\tEnter [2] To Withdraw Cash" << endl;
                    cout << "\t\tEnter [3] To check AccountHolder details" << endl;
                    cout << "\t\tEnter [4] To Pay Bills" << endl;
                    cout << "\t\tEnter [5] to Pay Account Interest" << endl;
                    cout << "\t\tEnter [0] to Exit ATM" << endl << endl;
                    cout << "\tPLEASE ENTER A SELECTION AND PRESS ENTER TO CONTINUE : \n\n";
                    cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";

                    cin>>e;
                    switch(e)
                    {
                    case 1:
                        p.deposit();

                        break;
                    case 2:
                        p.withdraw();
                        break;
                    case 3:
                        p.details();
                        break;
                    case 4:
                        p.payBills();
                        break;
                    case 5:
                        p.interest();
                        break;
                    case 0:
                        p.accountExit();
                        break;
                    default:
                        cout<<"Please Enter the Correct Number Choice"<<endl;
                    }
                }
                while(e!=0);

                break;
            }

            else
            {
                system("cls");

                cout<<"\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb THANK YOU \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
                cout<<"\nYou had made your attempt which failed!!! No More attempts allowed!! Sorry!!\n\n";
                cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";

                //system("PAUSE");
                exit (1);
            }
        //==================================================================================================


        case 0://pin to access account
            system("cls");
            cout<<"\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ATM ACCOUNT HELP CENTER \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
            cout<<"\tYou must have the correct account number as well as pin number to access this acount. See your\n\n";
            cout<<"\t  bank representative for assistance during bank opening hours\n\n";
            cout<<"\t\tThanks for, your choice today!!\n\n";
            cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
            system ("PAUSE");
            exit(1);
            break;
            //==================================================================================================
        }
        else
        {
            system("cls");

            cout<<"\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb THANK YOU \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
            cout<<"\nYou had made your attempt which failed!!! No More attempts allowed!! Sorry!!\n\n";
            cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";

            //system("PAUSE");
            exit (1);
        }

        //system("PAUSE");
        return 0;

    }
}