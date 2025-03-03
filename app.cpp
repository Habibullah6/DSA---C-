#include <bits/stdc++.h>
using namespace std;

// int main() {
//     int num;
//     cin >> num;
//     if(num < 25){
//         cout << "you got f grade" << endl;
//     }else if(num >= 25 && num < 45){
//         cout << "you got e grade" << endl;
//     }else if(num >= 45 && num < 50){
//         cout << "you got d grade" << endl;}

//     else if(num >= 50 && num < 60){
//         cout << "you got c grade" << endl;}

//     else if(num >= 60 && num < 70){
//         cout << "you got b grade" << endl;}

//     else if(num >= 70 && num < 80){
//         cout << "you got a grade" << endl;}

//     else if(num >= 80 && num <= 100){
//         cout << "you got a+ grade" << endl;
//     }
// return 0;
// }

// int main() {

// int day;
// cin >> day;
// switch (day){
//     case 1:
//         cout << "Monday" << endl;
//         break;
//     case 2:
//         cout << "Tuesday" << endl;
//         break;
//     case 3:
//         cout << "Wednesday" << endl;
//         break;
//     case 4:
//         cout << "Thursday" << endl;
//         break;
//     case 5:
//         cout << "Friday" << endl;
//         break;
//     case 6:
//         cout << "Saturday" << endl;
//         break;
//     case 7:
//         cout << "Sunday" << endl;
//         break;
//     default:
//         cout << "Invalid input" << endl;
//         break;
// }

// }

// Pattern-1: Rectangular Star Pattern



// void pattern1(int N)
// {
//     // This is the outer loop which will loop for the rows.
//     for (int i = 0; i < N; i++)
//     {
//         // This is the inner loop which here, loops for the columns
//         // as we have to print a rectangular pattern.
//         for (int j = 0; j < N; j++)
//         {
//             cout << "* ";
//         }

//         // As soon as N stars are printed, we move to the
//         // next row and give a line break otherwise all stars
//         // would get printed in 1 line.
//         // cout << endl;
//     }
// }


// pattern-2: Right-Angled Triangle Pattern


// void pattern2(int N)
// {
//     // This is the outer loop which will loop for the rows.
//     for (int i = 0; i < N; i++)
//     {
//         // This is the inner loop which loops for the columns
//        // no. of columns = row number for each line here.
//         for (int j = 0; j <=i; j++)
//         {
//             cout << "* ";
//         }
       
//         // As soon as stars for each iteration are printed, we move to the
//         // next row and give a line break otherwise all stars
//         // would get printed in 1 line.
//         cout << endl;
//     }
// }

// Pattern - 3: Right-Angled Number Pyramid



// void pattern3(int N)
// {
//     // This is the outer loop which will loop for the rows.
//     for (int i = 1; i <= N; i++)
//     {
//         // This is the inner loop which loops for the columns
//        // no. of columns = row number for each line here.
//        // Here, we print numbers from 1 to the row number
//        // instead of stars in each row.
//         for (int j = 1; j <=i; j++)
//         {
//             cout <<j<<" ";
//         }
       
//         // As soon as numbers for each iteration are printed, we move to the
//         // next row and give a line break otherwise all numbers
//         // would get printed in 1 line.
//         cout << endl;
//     }
// }





// Pattern - 4: Right-Angled Number Pyramid - II

void pattern4(int N)
{
   
    for (int i = 1; i <= N; i++)
    {
        
        for (int j = 1; j <=i; j++)
        {
           cout <<i<<" ";
        }
       
    
        cout << endl;
    }
}


int main()
{   
    // Here, we have taken the value of N as 5.
    // We can also take input from the user.
    int N;
    cin >> N;
    pattern4(N);

    return 0;
}