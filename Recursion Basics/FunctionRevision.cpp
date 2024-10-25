// function -> Helps when we do some work many times. Than we write all block of code in one place..

// // product of two numbers using function.

// #include<iostream>
// using namespace std;
// int product(int a, int b)
// {
//     return a*b;
// }
//  int main()
//  {
//     cout<<product(3,4);
//  } // 12



// // product of two numbers using function take input from the users.

// #include<iostream>
// using namespace std;
// int product(int a, int b) //  this a and b is different
// {
//     return a*b;
// }
//  int main()
//  {
// // this a and b are also different
//     int a;
//     cout<<"Enter m ";
//     cin>>a;
//     int b;
//     cout<<"Enter n "; 
//     cin>>b;

//     cout<<product(a,b);
//  } 
// Enter m 8
// Enter n 8
// 64

// Enter m 8
// Enter n 6
// 48



//Ques..  Product stored in new variable  



// #include<iostream>
// using namespace std;
// int product(int a, int b) 

// (int a, int b) this a and b is different..
// (int) is a return type its return some value 

// {
//     return a*b;
// }
//  int main()
//  {

// // this a and b are also different

//     int a;
//     cout<<"Enter m ";
//     cin>>a;
//     int b;
//     cout<<"Enter n "; 
//     cin>>b;

//     int c=product(a,b);  // we store product in a new variable c 
//     cout<<c;
//  } 
// Enter m 2
// Enter n 6
// 12 


// Ques..  Make a greet function? 

// #include<iostream>
// using namespace std;
// void greet() // greet fun does not return anything so, we write void 
// // void -> do not return anything only print 
// {
//     cout<<"Good Evening ";
// }

//  int main()
//  {
//     greet();
//     cout<<endl;
//     greet();
//     cout<<endl;
//     greet();
//     cout<<endl;
//     cout<<" hey shivem ";
//     cout<<endl;
//     greet();
//     cout<<endl;
//     greet();
//  }

// // Good Evening 
// // Good Evening
// // Good Evening
// // hey shivem
// // Good Evening
// // Good Evening


// C++ build-in function 
// min, max, swap function 





// // Ques.1 Take input from the user and print the sum using function 

// #include<iostream>
// using namespace std;
// int sum(int a, int b) // return type is int.
// {
//     cout<<min(a,b)<<endl; // 4
//     cout<<max(a,b)<<endl; // 7
//     return a+b; // 11   // ***** return means loop khatam and vha jao jaha se tumhe call lagi hai *****
//     cout<<max(a,b); // this code is not run becoz loops is breaked.
  
// }
//  int main()
//  {
//     cout<<sum(4,7); // calling the sum functio0n 
//     // ITS RETURN SOME VALUE ->> so eska return type integer(int) hoga.
//  }



// Ques. on this function 
// min, max, swap function 

#include<iostream>
using namespace std;
 int main()
 {
    int a=10;
    int b=20;
    cout<<a<<" "<<b<<endl;
    cout<<min(a,b);
    cout<<endl;
    cout<<max(a,b);
    cout<<endl; 
    swap(a,b); // swap function write directly...
    cout<<a<<" "<<b;
 }


// 10 20
// 10
// 20
// 20 10