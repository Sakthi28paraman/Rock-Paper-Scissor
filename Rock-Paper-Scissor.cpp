#include <iostream>
#include<cstdlib>
using namespace std;
void CheckCondition(){
    const char * rps[3] = {"Rock","Paper","Scissor"};
    int RandomIndex = rand()%3;
    cout<<RandomIndex;
    string UserInput;
    
    cout<<"Enter your Choice Rock or Paper or Scissor\n";
    cin>>UserInput;
    cout<<rps[RandomIndex];
    if(UserInput == "Rock" && rps[RandomIndex] == "Rock" || 
        UserInput == "Paper" && rps[RandomIndex]=="Paper"||
        UserInput == "Scissor" && rps[RandomIndex]=="Scissor"){
            cout<<"\nThe Match Is Tie";
        }
        else if(UserInput == "Rock" && rps[RandomIndex] == "Scissor"){
            cout<<"\nUser Won the Round";
        }
        else if(UserInput == "Scissor" && rps[RandomIndex] == "Rock"){
            cout<<"\nComputer Won the Round";
        }
        else if(UserInput == "Rock" && rps[RandomIndex] == "Paper"){
            cout<<"\nComputer Won the Round";
        }
        else if(UserInput == "Paper" && rps[RandomIndex] == "Rock"){
            cout<<"\nUser Won the Round";
        }
        else if(UserInput == "Paper" && rps[RandomIndex] == "Scissor"){
            cout<<"\nComputer Won the Round";
        }
        else if(UserInput == "Scissor" && rps[RandomIndex] == "Paper"){
            cout<<"\nUser Won the Round";
        }
        else{
            cout<<"\nEnter the correct option";
        }
}
int main() {
    int Choice;
    cout<<"Enter your Choice Play = 1 or Exit=0\n";
    cin>>Choice;
    if(Choice == 1){
        CheckCondition();
    }
    else{
        exit(0);
    }
    return 0;
}
