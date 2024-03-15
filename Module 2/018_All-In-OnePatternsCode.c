// #include<stdio.h>
// main()
// {
//   int r,c,sp,i,a;
  
  
//   // Simple Semi - Star Pyramid
//   for(r=1;r<=5;r++)
//     {
//       for(c=1;c<=r;c++)
//         {
//           printf("* ");
//         }
//       printf("\n");
//     }

//   printf("\n\n");
  

//   // Inverse Semi - Star Pyramid
//   for(r=5;r>=1;r--)
//     {
//       for(sp=1;sp<=5-r;sp++)
//         {
//           printf("  ");
//         }
//       for(c=1;c<=r;c++)
//         {
//           printf("* ");
//         }
//       printf("\n");
//     }

//   printf("\n\n");


//   // Full Star Pyramid
//   for(r=1;r<=5;r++)
//     {
//       for(sp=1;sp<=5-r;sp++)
//         {
//           printf("  ");          
//         }
//       for(c=1;c<=2*r-1;c++)
//         {
//           printf("* ");          
//         }
//       printf("\n");
//     }

//   printf("\n\n");


//   // Left Pointed Full Star Pyramid
//   for(r=1;r<=6;r++)
//     {
//       for(c=1;c<=r;c++)
//         {
//           printf("* ");
//         }
//       printf("\n");
//     }
//   for(r=5;r>=1;r--)
//     {
//       for(c=1;c<=r;c++)
//         {
//           printf("* ");
//         }
//       printf("\n");
//     }

//   printf("\n\n");


//   // 1-10 Numeric Semi - Pyramid
//   i=1;
//   for(r=1;r<=5;r++)
//     {
//       for(c=1;c<=r;c++)
//         {
//           printf("%d",i++); 
//           if(i<11)
//           {
//             printf("  ");
//           }
//           else
//           {
//             printf(" ");
//           } 
//         }
//       printf("\n");
//     }

//   printf("\n\n");


//   // 1 & 0 Numeric Semi - Pyramid
//   i=1;
//   for(r=1;r<=5;r++)
//     {
//       for(c=1;c<=r;c++)
//         {
//           printf("%d ",++i%2);          
//         }
//       printf("\n");
//     }

//   printf("\n\n");


//   // 'A' - 'O' Alphebetic Semi - Pyramid
//   a='A';
//   for(r=1;r<=5;r++)
//     {
//       for(c=1;c<=r;c++)
//         {
//           printf("%c ",a++);
//         }
//       printf("\n");
//     }

//   printf("\n\n");


//   // Alphebetic Semi - Pyramid starting with A
//   for(r=1;r<=5;r++)
//     {
//       a='A';
//       for(c=1;c<=r;c++)
//         {
//           printf("%c ",a);
//           a+=1;
//         }
//       printf("\n");
//     }
  
// }