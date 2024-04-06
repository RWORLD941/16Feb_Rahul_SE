// #include<iostream>
// using namespace std;

// template<typename T>
// void sort(T a[], int n)
// {
//   for(int i = 0; i < n; i++)
//     {
//       for(int j = i + 1; j < n; j++)
//         {
//           if(a[i] > a[j])
//           {
//             T temp = a[i];
//             a[i] = a[j];
//             a[j] = temp;
//           } 
//         } 
//     }
// }

// int main()
// {
//   int n;
//   cout << "Enter the size of the array: ";
//   cin >> n;
//   int a[n];
//   cout << "Enter the elements of the array: ";
//   for(int i = 0; i < n; i++)
//     {
//       cin >> a[i];
//     }
//   sort(a, n);
//   cout << "Sorted array: ";
//   for(int i = 0; i < n; i++)
//     {
//       cout << a[i] << " ";
//     }
// }