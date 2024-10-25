// Ques.1-> Make a function which calculates 'a' raised to the power 'b' using recursion.
// (hold) answer is below iteration code..

// Ques.2-> Make a function and calculate 'a' raised to the power 'b' using iteration (loops)
// (a,b)=(2,3)=8
// In power function we must need to take two parameter 1-a, 2-b.Take input by user a and b..

// #include <iostream>
// using namespace std;
// int power(int n, int m)
// {
//     // some power rules and condion
//     if(n==0 && m==0) {  cout<<"not defind";  }
//     if(n==0) return 0;


//     int p = 1;
//     for (int i = 1; i <= m; i++)
//     {
//          p= p*n;  // p *= n;
//     }
//     return p;
// }
// int main()
// {
//     int a, b;
//     cout << "Enter a raised to the power b "<<endl;
//     cin >> a >> b;
//     cout << power(a, b);
// }

// output
// Enter a raised to the power b 
// 2 3
// 8
// Enter a raised to the power b 
// 2 0
// 1
// Enter a raised to the power b 
// 0 5
// 0
// Enter a raised to the power b 
// 0 0  
// not defind


// Ques 2.1-> calculate power of (3,4) ans 81. using iteration(for loop) methods and functions?
// #include<iostream>
// using namespace std;
// int power(int a, int b)
// {
//     int power=1;
//     for(int i=1; i<=b; i++)
//     {
//         power*=a;
//     }
//     return power;
// }
//  int main()
//  {
//    cout<<power(3,4);
//  }
//  // 81
// T.C. = O(b)
// S.C.=O(1)


// Ques.1-> Make a function which calculates 'a' raised to the power 'b' using recursion.

#include<iostream>
using namespace std;
int power(int n, int m)
{
    if(m==0) return 1; // base case 
    return n*power(n,m-1); // kaam and call 
}
 int main()
 {
    int a,b;
    cout<<"Enter base and exponent for calcutes power of a and b : ";
    cin>>a>>b;

    cout<<power(a,b);
 }

// Enter base and exponent for calcutes power of a and b : 2 3 
// 8
// T.C.= O(2*b) = O(b)
// S.C. = O(2*b extra space) = O(b) stack frames