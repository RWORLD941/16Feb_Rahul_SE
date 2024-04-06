// #include<iostream>
// using namespace std;

// class input
// {
//   public:
//   float a,b;
//   input()
//   {
//     cout<<"Enter the first number: ";
//     cin>>a;
//     cout<<"Enter the second number: ";
//     cin>>b;
//   }
// };

// class add:public input
// {
//   public:
//   void sum()
//   {
//     cout<<"Sum is: "<<a+b<<endl;
//   }
// };

// class sub:public input
// {
//   public:
//   void diff()
//   {
//     cout<<"Difference is: "<<a-b<<endl;
//   }
// };

// class mul:public input
// {
//   public:
//   void product()
//   {
//     cout<<"Product is: "<<a*b<<endl;
//   }
// };

// class divi:public input
// {
//   public:
//   void quotient()
//   {
//     cout<<"Quotient is: "<<a/b<<endl;
//   }
// };

// int main()
// {
//   // As class is inherited from input class, it will automatically call the constructor of input class
  
//   cout<<"Enter numbers for addition\n"<<endl;
//   add a1;
//   a1.sum();

 
//   cout<<"\n\nEnter numbers for subtraction\n"<<endl;
//   sub s1;
//   s1.diff();


//   cout<<"\n\nEnter numbers for multiplication\n"<<endl;
//   mul m1;
//   m1.product();

  
//   cout<<"\n\nEnter numbers for division\n"<<endl;
//   divi d1;
//   d1.quotient();
// }