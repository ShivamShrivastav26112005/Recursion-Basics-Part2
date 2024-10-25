

//                          IMPORTANT STARTS RECURSION
                      

// Ques.1 Calculate factorial of n number where n is user input
// first calculate with traditional methods means using for loop

// #include<iostream>
// using namespace std;
//  int main()
//  {
//     int n;
//     cout<<"Enter n ";
//     cin>>n;

// int f=1; //  extra variable
// for(int i=2; i<=n;i++)
// {
//     f*=i;
// }
// cout<<f;


//  }

// Enter n 5
// 120
// Enter n 1 // 1 and 0 factorial = 1
// 1
// Enter n 0
// 1



// Calculate factorial of n no. using for loop and function 

// #include<iostream>
// using namespace std;
// int fact(int a)
// {
//     int f=1;
//     for(int i=2; i<=a; i++)
//     {
//         f*=i;
//     }
//     return f;
// }

// int main()
// {
//     int n;
//     cout<<"Enter n ";
//     cin>>n;
     
//     cout<<fact(n);
// }

// Enter n 5    // 5 is our i/p
// 120




// Ques. Print all factorial b/w 1 to n.Take n user i/p.
// method-1

// #include<iostream>
// using namespace std;
// void fact(int a)
// {
//     for(int j=1; j<=a; j++)
//  {
//     int f=1;
//     for(int i=2; i<=j; i++)
//     {
//         f*=i;
//     }
//     cout<<f<<endl;
//  }
// }

// int main()
// {
//     int n;
//     cout<<"Enter n ";
//     cin>>n; 

//     fact(n);
// }

// Enter n 5
// 1
// 2
// 6
// 24
// 120




// method-2 using for loop and functions

// #include<iostream>
// using namespace std;
// void fact(int a)
// {
//    int f=1;
//     for(int i=1; i<=a; i++)
//     {
//         f*=i;
//     cout<<f<<endl;
//  }
//  }
// int main()
// {
//     int n;
//     cout<<"Enter n ";
//     cin>>n; 

//     fact(n);
// }

// Enter n 5
// 1
// 2
// 6
// 24
// 120




// Method-3 -> Very Important (Recursive method) 

// Ques.-> Print factorial of n no. using recursive methods.
//  5!=5*4*3*3*2*1 = 5*4!
//  3!=3*2*1 = 3*2!

//  n!= n * (n-1)!
// 0!=1
// 1!=1

// #include<iostream>
// using namespace std;
// int fact(int a)
// {
//     if(a==1 || a==0) return 1; // base case - it is used for termination the function.
//   int ans= a*fact(a-1); // kaam and recursive calling 
//   return ans; // return // we make a variable ans where we can store our answer
// }
// int main()
// {
// int n;
// cout<<"Enter n ";
// cin>>n;

//     cout<<fact(n); // function calling
// }

// Enter n 5
// 120


// same code with clean-ness

#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==1 || n==0) return 1; // base case 
  int ans= n*fact(n-1); // kaam and recursive calling 
  return ans; // return 
}
int main()
{
int n;
cout<<"Enter n ";
cin>>n;

    cout<<fact(n); // function calling
}

// Enter n 4
// 24


