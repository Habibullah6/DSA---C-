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



#include <bits/stdc++.h>
using namespace std;


void patter1(int n){

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        cout << "*";
    }
    cout << endl;
}

}

int main() {
    int n;
    cin >> n;
    patter1(n);
    return 0;
}