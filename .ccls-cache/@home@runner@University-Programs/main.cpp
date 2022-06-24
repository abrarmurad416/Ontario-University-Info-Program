#include <iostream>
using namespace std;

// Instead of just declaring a string for each structure, I added data to it because the user is not going to input it anyways.
// The structure names take the location of the city the university is situated in.
//Instructions said to use either structures or arrays, so I used structures.

struct Waterloo{
  string enrollment = "University of Waterloo's undergraduate enrollment was 34,283 students in 2021.";
  string gender = "Female percentage = 47.2% | Male percentage = 52.8%";
  string tuition = "Minimum tuition cs: $15,000 | Minimum board : $2,675 | Minimum residence: $6,008";
  string fact = "CS department offers 70+ cs-related courses.";
}UWaterloo;

struct Toronto{
 string enrollment = "University of Toronto's undergraduate enrollment was 74,385 students in 2021";
 string gender = "Female percetange = 46% | Male percentage = 54%";
 string tuition = "Minimum tuition cs: $6,100 | Minimum board: $5,500 | Minimum residence: $11,016";
 string fact = "Computer science at UofT is known for human-computer interaction (HCI), machine learning, neural networks, and more.";
}UofT;

// For McMaster University, I used pointers to adhere to the instructions.

struct McMaster{
string enrollment = "University of McMaster's undergraduate enrollment was 31,532 in 2021.";
string gender = "Female percentage = 56% | Male percentage = 44%";
string tuition = "Minimum tuition cs: $3,999 | Minimum board: $3,500 | Minimum residence: $6,875";
string fact = "25% of McMaster's cs program is open to elective courses.";
};


int main() {
  //First choice to pick university.
  int firstchoice;
  //Second choice to pick section.
  int secondchoice;
  //String data type set to Y for the while loop so it would as the user if they want to try again.
  string choice = "Y";
  //Hamilton pointer value.
  McMaster *ptr, MacU;
  ptr = &MacU;

while(choice == "Y" || choice == "y" ){
  cout << "Welcome to the Ontario University Info Program.\n";
  cout << "1. University of Waterloo\n";
  cout << "2. University of Toronto\n";
  cout << "3. McMaster University\n";
  cout << " \n";
  cout << "Pick a university: \n";
  cin >> firstchoice;

  //Error trapping.
  if(firstchoice < 1 || firstchoice > 3){
    cout << "try again: ";
    cin >> firstchoice;
  }


  
  if(firstchoice == 1) {
    cout << "UNIVERSITY OF WATERLOO\n";
    cout << " \n";
    cout << "1. What is the total (university) undergraduate enrollment for the year 2021? \n";
    cout << " \n";
    
    cout << "2. What is the percentage of women (or men) enrolled?\n";
    cout << " \n";
    
    cout << "3. What is the yearly undergraduate tuition (including room and board)?\n";
    cout << " \n";
    
    cout << "4. State one fact about the Computer Science Department that can be validated at this site.\n";
    cout << " \n";

    cout << "Choose section: ";
    cin >> secondchoice;

    //Error trapping.
    if(secondchoice < 1 || secondchoice > 4){
      cout << "try again: ";
      cin >> secondchoice;
      }
    if(secondchoice == 1){
      cout << UWaterloo.enrollment;
    }
    if(secondchoice == 2){
      cout << UWaterloo.gender;
    }
    if(secondchoice == 3){
      cout << UWaterloo.tuition;
    }
    if(secondchoice == 4){
      cout << UWaterloo.fact;
    }
 }


  
   if(firstchoice == 2) {
    cout << "UNIVERSITY OF TORONTO\n";
    cout << " \n";
    cout << "1. What is the total (university) undergraduate enrollment for the year 2021?\n";
    cout << " \n";
    
    cout << "2. What is the percentage of women (or men) enrolled?\n";
    cout << " \n";
    
    cout << "3. What is the yearly undergraduate tuition (including room and board)?\n";
    cout << " \n";
    
    cout << "4. State one fact about the Computer Science Department that can be validated at this site.\n";
    cout << " \n";

    cout << "Choose section: ";
    cin >> secondchoice;

    //Error trapping.
    if(secondchoice < 1 || secondchoice > 4){
      cout << "try again: ";
      cin >> secondchoice;
      }
    if(secondchoice == 1){
      cout << UofT.enrollment;
    }
    if(secondchoice == 2){
      cout << UofT.gender;
    }
    if(secondchoice == 3){
      cout << UofT.tuition;
    }
    if(secondchoice == 4){
      cout << UofT.fact;
    }
 }



  if(firstchoice == 3) {
    cout << "McMASTER UNIVERSITY\n";
    cout << " \n";
    cout << "1. What is the total (university) undergraduate enrollment for the year 2021?\n";
    cout << " \n";
    
    cout << "2. What is the percentage of women (or men) enrolled?\n";
    cout << " \n";
    
    cout << "3. What is the yearly undergraduate tuition (including room and board)?\n";
    cout << " \n";
    
    cout << "4. State one fact about the Computer Science Department that can be validated at this site.\n";
    cout << " \n";

    cout << "Choose section: ";
    cin >> secondchoice;

    //Error trapping.
    if(secondchoice < 1 || secondchoice > 4){
      cout << "try again: ";
      cin >> secondchoice;
      }
    if(secondchoice == 1){
      cout << (*ptr).enrollment;
    }
    if(secondchoice == 2){
      cout << (*ptr).gender;
    }
    if(secondchoice == 3){
      cout << (*ptr).tuition;
    }
    if(secondchoice == 4){
      cout << (*ptr).fact;
    }
 }
  cout << " \n";
  cout << " \n";

  //Gives user option to see another university or not.
  cout << "Do you wish to see another university?(Y/N): ";
  cin >> choice;
  }

  cout << "Thank you for using the Ontario University Info Program." << endl;
}
