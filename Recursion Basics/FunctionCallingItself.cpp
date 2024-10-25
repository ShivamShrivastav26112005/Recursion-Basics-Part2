// function calling itself

// #include<iostream>
// using namespace std;
// void gun()
// {
//     cout<<"Ohh System, Hii";
// }
// void fun()
// {
//     cout<<"Hello Shivam"<<endl;
//     gun(); // calling the function
// }
//  int main()
//  {
//     fun(); // calling the function
//  }

// Hello Shivam
// Ohh System, Hii


// some changes 

// #include<iostream>
// using namespace std;
// void gun()
// {
//     cout<<"Ohh System, Hii"; 
//     return ;
// }
// void fun()
// {
//     cout<<"Hello Shivam"<<endl;
//     gun(); // calling the function
//      return ; // khatam ab eske aage sab chij useless hai 
// }
//  int main()
//  {
//     fun(); // calling the function
//  }

// Hello Shivam
// Ohh System, Hii



// some changes

// #include<iostream>
// using namespace std;
// void gun()//6
// {
//     return ; //7 // khatam  only print Hello Shivam
//     cout<<"Ohh System, Hii"; // useless
//     return ;
// }
// void fun() //3
// {
//     cout<<"Hello Shivam"<<endl; //4
//     gun(); // calling the function //5
//      return ; 
// }
//  int main() //1 numbering how code is exicuted
//  {
//     fun(); // calling the function //2
//  }




// #include<iostream>
// using namespace std;
// void fun()
// {
//     cout<<"Good Morning";
// }
// int main()
// { 
//     fun(); // call
// }
// // Good Morning




//                                               ********function calling itself********

// #include<iostream>
// using namespace std;
// void fun()
// {
//     cout<<"Good Morning";
//     fun();  // function calling itself
// }
// int main()
// { 
//     fun(); // call the function
// }


// infinte times-> loop run










// recursion -> in recursion we print all the things in opppsite order


// in loop we have a condtion to terminate the loop
// like in while loop we write while(n>0) n>0 this is the condtion...

// so, here we apply recursion -> (opposite for loop)
// loop ulta chala ke ulta print kar dete hai 3-GM, 2-GM, 1-GM


// #include<iostream>
// using namespace std;
// int fun(int n)
// // note- void fun(int n)
// {
//     if(n==0) return 100; // return something becoz here return type is int
// //  note- when here void is present than do not return anything only write return;
//     cout<<"Good morning"<<endl;
//     fun(n-1); // again fun name ka function chalega(calling) // this is the (function calling itself)
// }
// int main()
// {
//     fun(3); //calling 
// }


// Good morning
// Good morning
// Good morning




// same code-> int return type

// #include<iostream>
// using namespace std;
// int fun(int n)
// {
//     if(n==0) return 100; 
//     cout<<"Good morning"<<endl;
//     fun(n-1); 
// }
// int main()
// {
//     fun(3); 
// }



// same code->  in place of int we write void return type so, we don't return anything

// #include<iostream>
// using namespace std;
// void fun(int n)
// {
//     if(n==0) return ; 
//     cout<<"Good morning"<<endl;
//     fun(n-1); 
// }
// int main()
// {
//     fun(3); 
// }








// C.W.ques.
// Ques. Print good morning 'n' no. of times where 'n' is user input
// loops are runs oppsite

#include<iostream>
using namespace std;
void print(int a)
{
    if(a==0) return; // return means khatam
    cout<<"Good Morning"<<endl;
    print(a-1); // function calling itself
}
int main()
{
    int n;
    cout<<"Enter n ";
    cin>>n;

    print(n); // calling the function
}

// Enter n 4
// Good Morning
// Good Morning
// Good Morning
// Good Morning
