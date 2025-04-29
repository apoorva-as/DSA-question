#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

//count digit-------------------------

// //Function to count the number
// //of digits in an integer 'n'.

// int countDigits(int n){
// //     // Initialize a counter variable
// //     // 'cnt' to store the count of digits.

//     int cnt = 0;
//     // While loop iterates until 'n'
//     // becomes 0 (no more digits left).

//     while(n > 0){
//         // Increment the counter
//         // for each digit encountered.
//         int lastdigit = n%10;
//         cnt = cnt + 1;
//         // Divide 'n' by 10 to
//         // remove the last digit.
//         n = n / 10;
//     }

//     // Return the
//     // count of digits.
//     return cnt;
// }



// int main() {
//     int N = 329823;
//     cout << "N: "<< N << endl;
//     int digits = countDigits(N);
//     cout << "Number of Digits in N: "<< digits << endl;
//     return 0;
// }



                                
//   int main(){
//     int n;
//     cin>>n;
//     int cnt=0;
//     while (n>0)
//     {
//         n=n/10;
//         cnt=cnt+1;
//     }
//     cout<<cnt<<endl;
//   }                          

        
        
//reverse number-------------
// int main(){
// int n;
// cin>>n;
// int revnum=0;
// while (n>0)
// {
//     int id=n%10;
//     n=n/10;
//     revnum = (revnum *10)+id;
// }
// cout<<revnum;
// }