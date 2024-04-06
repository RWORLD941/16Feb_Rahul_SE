#include<iostream>
// using namespace std;

// // Multi-level Inheritance

// class acc_open
// {
//   public:
//   int acc_no;
//   char name[20];
//   string acc_type;

//   void acc_getdata()
//   {
//     cout<<"Enter Account Number: ";
//     cin>>acc_no;
//     cout<<"Enter Account Holder's Name: ";
//     cin>>name;
//     cout<<"Enter Account Type: ";
//     cin>>acc_type;
//   }
// };



// class acc_deposit:public acc_open
// {
//   public:
//   int deposit; // Should be minimum 2000

//   int deposit_getdata()
//   {
//     cout<<"\nEnter Deposit Amount: ";
//     cin>>deposit;
//     return deposit;
//   }
// };



// class acc_withdraw:public acc_deposit
// {
//   public:
//   int withdraw,depo; // Should be at most equal to deposit
//   void withdraw_getdata()
//   {
//     cout<<"\nEnter Withdraw Amount: ";
//     cin>>withdraw;
//     while (withdraw > (deposit-2000))
//     {
//       cout<<"\nWithdraw Amount should be less than or equal to Deposit Amount\n";
//       cout<<"\nEnter Withdraw Amount: ";
//       cin>>withdraw;
//     }
//   }
// };



// class acc_statement:public acc_withdraw
// {
//   public:

//   void printdata()
//   {
//     cout<<"\nAccount Number: "<<acc_no;
//     cout<<"\nAccount Holder's Name: "<<name;
//     cout<<"\nAccount Type: "<<acc_type;
//     cout<<"\nDeposit Amount: "<<deposit;
//     cout<<"\nWithdraw Amount: "<<withdraw;
//     cout<<"\nBalance Amount: "<<(deposit-withdraw);
//   }
// };


// int main()
// {
//   acc_statement s;
//   s.acc_getdata();

//   /////////////////////////////////
//   /////////////////////////////////
//   int depo;
//   depo = 0;
//   while (true)
//   {
//     depo = s.deposit_getdata();
//     if (depo >= 2000)
//     {
//       break;
//     }
//     else{
//       cout<<"Deposit amount should be at least 2000\n";      
//     };
//   };
//   /////////////////////////////////
//   /////////////////////////////////

//   s.withdraw_getdata();
//   s.printdata();
// }