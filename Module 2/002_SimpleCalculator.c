// #include<stdio.h>
// main()
// {
//   float n1,n2;
//   char ch;

//   printf("Enter number1: ");
//   scanf("%f",&n1);
//   printf("Enter number2: ");
//   scanf("%f",&n2);

//   printf("\n\t +.Addition");
//   printf("\n\t -.Subtraction");
//   printf("\n\t *.Multiplication");
//   printf("\n\t /.Division");
//   printf("\n\t %.Modulus");

//   printf("\nEnter your choice: ");

//   scanf(" %c",&ch); 

//   switch(ch)
//     {
//       case '+':
//         printf("\nSum of numbers is : %.0f", n1+n2);
//         break;

//       case '-':
//         printf("\nDifference of numbers is : %.0f", n1-n2);
//         break;

//       case '*':
//         printf("\nProduct of numbers is : %.2f", n1*n2);
//         break;

//       case '/':
//         printf("\nQuotient of numbers is : %.2f", n1/n2);
//         break;

//       case '%':
//         printf("\nModulus of numbers is : %.2f", fmod(n1,n2));
//         break;

//       default:
//         printf("\nInvalid choice");
//         break;
//     }
// }