// #include<stdio.h>
// int main()
// {
//   int i;
//   printf("Enter Your Choice of One Big Number: ");
//   scanf("%d",&i);

//   // Converting Number to String

//   char str[10];
//   sprintf(str,"%d",i);
  
//   // Finding Number of Digits

//   int count=0;
//   for(int a=0;str[a]!='\0';a++)
//     {
//       count++;     
//     }
//   printf("\nNumber of Digits: %d",count);

//   // Finding Sum of Digits

//   int sum=0;
//   for(int a=0;str[a]!='\0';a++)
//     {
//       sum+=str[a]-'0';      
//     }
//   printf("\nSum of Digits: %d",sum);

//   // Finding Sum of First and Last Digits

//   int first=str[0]-'0';
//   int last=str[count-1]-'0';
//   printf("\nSum of First and Last Digits: %d",first+last);

//   // Finding Max and Min Digits

//   int max=str[0]-'0';
//   int min=str[0]-'0';
//   for(int a=0;str[a]!='\0';a++)
//     {
//       if(str[a]-'0'>max)
//       {
//         max=str[a]-'0';       
//       }
//       if(str[a]-'0'<min)
//       {
//         min=str[a]-'0';        
//       }      
//     }
//   printf("\nMax Digit: %d",max);
//   printf("\nMin Digit: %d",min);

//   // Printing In Reversed Order

//   printf("\n\nReversed Order: ");
//   for(int a=count-1;a>=0;a--)
//     {
//       printf("%c",str[a]);

//     }
//   printf("\n");

//   // Sorting Digits in Ascending and Descending Order

//   int p;
//   for(int a=0;str[a]!='\0';a++)
//     {
//       for(int k=a+1;str[k]!='\0';k++)
//         {
//           if(str[a]-'0'>str[k]-'0')
//           {
//             p=str[a];
//             str[a]=str[k];
//             str[k]=p;
            
//           }
          
//         }
      
//     }
//   printf("\n\nDigits in Ascending Order: %s",str);
  
//   for(int a=0;str[a]!='\0';a++)
//     {
//       for(int k=a+1;str[k]!='\0';k++)
//         {
//           if(str[a]-'0'<str[k]-'0')
//           {
//             p=str[a];
//             str[a]=str[k];
//             str[k]=p;
//           }
//         }
//     }
//   printf("\n\nDigits in Descending Order: %s",str);

// }