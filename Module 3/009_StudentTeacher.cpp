// #include<iostream>
// #include<algorithm>
// using namespace std;

// class person
// {
//   public:
//   string name,type;
//   int age;
//   void getdata()
//   {
//     cout<<"Enter the name of the person: ";
//     cin>>name;
//     cout<<"Enter the age of the person: ";
//     cin>>age;
//     cout<<"Is he/she a student or a teacher? ";
//     cin>>type;
    
//     transform(type.begin(), type.end(), type.begin(), ::tolower); // convert type to lowercase
//   }
// };

// class student:public person
// {
//   public:
//   int percentage;
//   void getdata()
//   {
//     cout<<"\nEnter the percentage of the student: ";
//     cin>>percentage;
//   }
// };

// class teacher:public person
// {
//   public:
//   int salary;
//   void getdata()
//   {
//     cout<<"\nEnter the salary of the teacher: ";
//     cin>>salary;
//   }
// };

// int main()
// {
//   person p1;
//   p1.getdata();
  
//   if(p1.type == "student")
//   {
//     student s1;
//     s1.getdata();

//     cout<<"\n\nThe name of the person is "<<p1.name;
//     cout<<"\nThe age of the person is "<<p1.age<<" years.";
//     cout<<"\nThe type of the person is Student.";
//     cout<<"\nThe percentage of the student is "<<s1.percentage<<"%.";
//   }
//   else if(p1.type == "teacher")
//   {
//     teacher t1;
//     t1.getdata();

//     cout<<"\n\nThe name of the person is "<<p1.name;
//     cout<<"\nThe age of the person is "<<p1.age<<" years.";
//     cout<<"\nThe type of the person is Teacher."<<p1.type;
//     cout<<"\nThe salary of the teacher is Rs. "<<t1.salary;
//   }
//   else
//   {
//     cout<<"\n\nInvalid Input";
//   }
// }