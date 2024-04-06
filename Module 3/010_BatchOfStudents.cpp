// #include<iostream>
// using namespace std;

// class student
// {
//   public:
//   int roll_no;
//   void getdata()
//   {
//     cout<<"Enter the roll number: ";
//     cin>>roll_no;
//   }
// };

// class test
// {
//   public:
//   int a,b;
//   void getmarks()
//   {
//     cout<<"Enter Marks of Subject 1: ";
//     cin>>a;
//     cout<<"Enter Marks of Subject 2: ";
//     cin>>b;
//   }
// };

// class result : public test, public student
// {
//   public:
//   int total;
//   void display()
//   {
//     cout<<"\n\nRoll Number: "<<roll_no;
//     cout<<"\nMarks of Subject 1: "<<a;
//     cout<<"\nMarks of Subject 2: "<<b;
//     total = a+b;
//     cout<<"\nTotal Marks: "<<total;
//   }
// };

// int main()
// {
//   result r1;
//   r1.getdata();
//   r1.getmarks();
//   r1.display();
// }