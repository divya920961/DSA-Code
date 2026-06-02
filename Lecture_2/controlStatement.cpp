#include <iostream>
using namespace std; //use here because we have to write std:: for each line thats why 

int main() {

// //simple if-statement
// int marks=36;
// if(marks<35){
//     cout<<"you are failed"<<endl;
// }


// //else-if     
// int age=19;
//     if(age>=18){
//     cout<<"You are Adult";
//     }else{
//          cout<<"You are Teenager";
//     }


// //Else if ladder
//     int marks=0;
//     cout<<"Enter your marks :";
//     cin>>marks;
//     cout<<"Your mark is :";
//     cout<<marks<<endl;
//     if(marks>=90 && marks<=100){
//         cout<<"your grade is: A+";

//     }
//       else if (marks>75 && marks<90){
//         cout<<"your grade is: B+";

//     }
//        else if (marks>50 && marks<75){
//         cout<<"your grade is: C+";

//     }
//     else{
    //    cout<<"You are failed."; 
    // }

//Switch

int day=0;
cout<<"Enter no. of Day :";
cin>>day;

switch (day)
{
    case 1:
   cout<<"Monday";
    break;
    case 2:
   cout<<"Tuesday";
    break;
    case 3:
   cout<<"Wednesday";
    break;
    case 4:
   cout<<"Thursday";
    break;
    case 5:
   cout<<"Friday";
    break;
    case 6:
   cout<<"Saturday";
    break;
    case 7:
   cout<<"Sunday";
    break;
   

default:
cout<<"Invalid";
}

    return 0;
}