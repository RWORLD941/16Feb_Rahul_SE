#include<iostream>
using namespace std;

int bal,with,depo,total,acc_no,pin,pin1,pin2,a_pin,ch1,ch2;
string name,acc_type,address,location;

class acc_open
{
  public:

  acc_open()
  {
    cout<<"\n************        NEW ACCOUNT CREATION        ************\n"<<endl;
    cout<<"     ----------------------------------------------     "<<endl;
    cout<<"\nEnter the Names of the Account Holders: ";
    cin>>name;
    cout<<"\nEnter the Account Holders Address: ";
    cin>>address;
    cout<<"\nEnter the Branch location: ";
    cin>>location;
    cout<<"\nEnter the Account Number: ";
    cin>>acc_no;

  }
};

class depos
{
  public:
  depos()
  {
    cout<<"\nEnter the Initial Depoist Amount (Minimum 5000): ";
    cin>>depo;
  }
};

class depo_not_enough
{
  public:
  depo_not_enough()
  {
    while (true)
    {
      depos d;
      if (depo >= 5000)
      {
        cout<<"\n     ----------------------------------------------     "<<endl;
        cout<<"\n******************************************************\n"<<endl;
        bal = depo;
        break;
      }
      else{
        cout<<"Initial Deposit amount should be at least 5000\n";
      };
    };
  }
};

class welcome
{
  public:
  welcome()
  {
    // current date and time on the current system
    time_t now = time(0);
    // convert now to string form
    char* date_time = ctime(&now);
    cout<<"\n\n\n\n\n************        WELCOME TO ATM        ************\n"<<endl;
    cout<<"     ----------------------------------------------     "<<endl;
    cout <<"\n          Current date: " << date_time << endl;
    cout<<"     ----------------------------------------------     "<<endl;
    cout<<"\n******************************************************\n"<<endl;
    cout<<"\n     Press 1 and Then Press Enter to Access Your Account Via Pin Number"<<endl;
    cout<<"\n                               or"<<endl;
    cout<<"\n     Press 0 and press Enter to get Help"<<endl;
    cout<<"\nEnter Your Choice: ";
    cin>>ch1;
    cout<<"\n******************************************************\n"<<endl;

  }
};

class new_pin
{
  public:
  new_pin()
  {
    cout<<"\n************        NEW PIN SETTING        ************\n"<<endl;
    cout<<"     ----------------------------------------------     "<<endl;
    cout<<"\nEnter the Pin Number you want to set: ";
    cin>>pin1;
    cout<<"Re-enter the Pin Number: ";
    cin>>pin2;
  }
};

class new_pin_verification
{
  public:
  new_pin_verification()
  {
    while (true)
      {
        new_pin n;
        if(pin1 == pin2)
        {
          cout<<"\nNew Pin Set Successfully"<<endl;
          a_pin = pin1;
          cout<<"\n     ----------------------------------------------     "<<endl;
          cout<<"\n******************************************************\n"<<endl;
          break;
        }
        else
        {
          cout<<"\nPin Number does not match\n"<<endl;
        }
      }
  }
};

class pin_enter
{
  public:
  void pin_entering()
  {
    cout<<"\n\n\n\n\n\n******************************************************\n"<<endl;
    cout<<"\nEnter Your Account Pin Access Number! [Only one attempt is allowed]"<<endl;
    cout<<"\n******************************************************\n"<<endl;
    cin>>pin;
  }
};

class help
{
  public:
  void helping()
  {
    cout<<"\n\n\n\n\n\n************        ATM ACCOUNT STATUS        ************\n"<<endl;
    cout<<"\n     You must have the correct pin number to access your account. \n     See your bank representative for assistance during bank opening hours."<<"\n\n     Thanks for,your choice today!!"<<endl;
    cout<<"\n\n******************************************************\n"<<endl;
    // cout<<"\nPress any key to continue....."<<endl;
    abort();
  }
};

class inc_pin
{
  public:
  void incc_pin()
  {
    cout<<"\n\n\n\n\n\n************        THANK YOU        ************\n"<<endl;

    cout<<"\nYou had made your attempt which failed!!! No more attempts allowed!! Sorry!!"<<endl;
    cout<<"\n\n******************************************************\n"<<endl;
    // cout<<"\nPress any key to continue....."<<endl;
    abort();
  }
};

class main_scr
{
  public:
  main_scr()
  {
    cout<<"\n\n\n\n\n\n************        ATM MAIN MENU SCREEN        ************\n"<<endl;
    cout<<"\n               Enter [1] To Deposit Cash"<<endl;
    cout<<"\n               Enter [2] To Withdraw Cash"<<endl;
    cout<<"\n               Enter [3] To Check Balance"<<endl;
    cout<<"\n               Enter [4] To Exit ATM"<<endl;
    cout<<"\nPLEASE ENTER A SELECTION AND PRESS ENTER RETURN KEY: ";
    cin>>ch2;
    cout<<"\n\n******************************************************\n"<<endl;
  }
};

class deposit
{
  public:
  void deposited()
  {
    cout<<"\n\n\n\n\n\n************        ATM ACCOUNT DEPOSIT SYSTEM        ************\n"<<endl;
    cout<<"\n\n\nThe Names of the Account Holders are: "<<name<<endl;
    cout<<"\nThe Account Holders Address is: "<<address<<endl;
    cout<<"\nThe Branch location is: "<<location<<endl;
    cout<<"\nThe Account Number is: "<<acc_no<<endl;
    cout<<"\n\n******************************************************\n"<<endl;
    cout<<"\nPresent available balance: Rs. "<<bal<<endl;
    cout<<"\nEnter the Amount to be Deposited: Rs. ";
    cin>>depo;
    total=bal+depo;
    cout<<"\nYour new available Balanced Amount is Rs. "<<total<<endl;
    bal = total;
    cout<<"\n\nThank You!"<<endl;
    abort();
    // cout<<"\nPress any key to Return to the Main Menu"<<endl;
  }
};

class withdraw
{
  public:
  void withdrawal()
  {
    cout<<"\n\n\n\n\n\n************        ATM ACCOUNT WITHDRAWAl        ************\n"<<endl;
    cout<<"\n\n\nThe Names of the Account Holders are: "<<name<<endl;
    cout<<"\nThe Account Holders Address is: "<<address<<endl;
    cout<<"\nThe Branch location is: "<<location<<endl;
    cout<<"\nThe Account Number is: "<<acc_no<<endl;
    cout<<"\n\n******************************************************\n"<<endl;
    cout<<"\nPresent available balance: Rs. "<<bal<<endl;
    cout<<"\nEnter the Amount to be Withdrawn: Rs. ";
    cin>>with;
    if(bal-with>5000)
    {
      total=bal-with;
      cout<<"\nYour new available Balanced Amount is Rs. "<<total<<endl;
      bal=total;
      cout<<"\n\nThank You!"<<endl;
      abort();
    }
    else
    {
      cout<<"\n\nYou have insufficient balance to withdraw the amount"<<endl;
      cout<<"\n\nThank You!"<<endl;
      abort();
    }
    // cout<<"\nPress any key to Return to the Main Menu"<<endl;
  }
};

class fail_withdraw
{
  public:
  void fail_withdrawal()
  {
    cout<<"\n\n\n\n\n\n************        ATM ACCOUNT WITHDRAWAl        ************\n"<<endl;
    cout<<"\n\n\nThe Names of the Account Holders are: "<<name<<endl;
    cout<<"\nThe Account Holders Address is: "<<address<<endl;
    cout<<"\nThe Branch location is: "<<location<<endl;
    cout<<"\nThe Account Number is: "<<acc_no<<endl;
    cout<<"\n\n******************************************************\n"<<endl;
    cout<<"\nInsufficient Available Balance in your account."<<endl;
    cout<<"\n\nSorry!!!"<<endl;
    abort();
    // cout<<"\nPress any key to continue....."<<endl;
  }
};

class balance
{
  public:
  void balanced()
  {
    cout<<"\n\n\n\n\n\n************        ATM ACCOUNT BALANCE        ************\n"<<endl;
    cout<<"\n\n\nThe Names of the Account Holders are: "<<name<<endl;
    cout<<"\nThe Account Holders Address is: "<<address<<endl;
    cout<<"\nThe Branch location is: "<<location<<endl;
    cout<<"\nThe Account Number is: "<<acc_no<<endl;
    cout<<"\n\n******************************************************\n"<<endl;
    cout<<"\nPresent available balance: Rs. "<<bal<<endl;
    cout<<"\n\nThank You!"<<endl;
    abort();
    // cout<<"\nPress any key to continue....."<<endl;
  }
};



int main()
{
  acc_open a;
  depo_not_enough d1;
  new_pin_verification n1;
  welcome w;

help h;
pin_enter p;
inc_pin i;
balance b;

  switch(ch1)
    {
      case 0:
        h.helping();
        break;

      case 1:
        p.pin_entering();
        if(pin!=a_pin)
        {
          i.incc_pin();
        }
        break;  

      default:
        cout<<"Invalid Option"<<endl;
        break;
    }

  main_scr m;
  deposit d2;
  withdraw w1;
  fail_withdraw f;

  switch(ch2)
    {
      case 1: // Deposit
      d2.deposited();
      break;

      case 2: // Withdraw
      if(bal>5000)
      {
        w1.withdrawal();
      }
      else
      {
        f.fail_withdrawal();
      }
      break;

      case 3: // Balance
      b.balanced();
      break;

      case 4: // Exit
      cout<<"\n\n\n\n\n\n************        THANK YOU        ************\n"<<endl;
      abort();

      default:
      cout<<"Invalid Option"<<endl;
      break;
    }

}
