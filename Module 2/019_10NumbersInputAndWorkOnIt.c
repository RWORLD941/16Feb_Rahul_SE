// #include<stdio.h>
// int main()
// {
//   int num[10];
//   int i;
//   printf("Enter Your 10 numbers List\n");

//   for(i=1;i<=10;i++)
//     {
//       printf("Enter Number %d: ",i);
//       scanf("%d",&num[i]);
//     }

//   // Finding Sum of Numbers
  
//   int sum=0;
//   for(i=1;i<=10;i++)
//     {
//       sum=sum+num[i];
//     }
//   printf("\nSum of Numbers is: %d\n",sum);

//   // Finding Max Number and Min Number
  
//   int max=num[0];
//   int min=num[0];
//   for(i=1;i<=10;i++)
//     {
//       if(num[i]>max)
//       {
//         max=num[i];
//       }
//       if(num[i]<min)
//       {
//         min=num[i];
//       }
//     }
//   printf("\nMax Number is: %d\n",max);
//   printf("\nMin Number is: %d\n",min);

//   // Sorting Odd and Even Numbers

//   int odd[10],even[10];
//   int e=0,o=0;
//   for(i=1;i<=10;i++)
//     {
//       if(num[i]%2==0)
//       {
//         even[e]=num[i];
//         e++;        
//       }
//       else
//       {
//         odd[o]=num[i];
//         o++;        
//       }
//     }

//   // Printing Odd and Even Numbers

//   printf("\n\nOdd Numbers: ");
//   for(i=0;i<o;i++)
//     {
//       printf("%d ",odd[i]);
//     }
//   printf("\nThere are %d Odd Numbers",o);

//   printf("\n\nEven Numbers: ");
//   for(i=0;i<e;i++)
//     {
//       printf("%d ",even[i]);
//     }
//   printf("\nThere are %d Even Numbers",e);

//   // Sum of Odd and Even Numbers

//   int sum_odd=0,sum_even=0;
//   for(i=0;i<o;i++)
//     {
//       sum_odd+=odd[i];      
//     }
//   for(i=0;i<e;i++)
//     {
//       sum_even+=even[i];
//     }

//   printf("\n\nSum of Odd Numbers: %d",sum_odd);
//   printf("\n\nSum of Even Numbers: %d",sum_even);
  
// }

