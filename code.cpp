#include <bits/stdc++.h>
using namespace std;

void print(map<string, string> &ToDo){
    int j=1;
    for (auto i:ToDo){
        cout<< "\t" << j << "\t" << i.first << "\t" << i.second<< endl ;
        j++;
    }
}
string inputString(){
    string str;
    getline(cin, str);
    return str;
}
void addTask(map<string, string> &ToDo){
    string str;
    cout<<"Enter the task to be added in your ToDo list.\n";
    str=inputString();
    ToDo[str]= "Not Done";
    cout<<" Task added successfully.";
}
void markTask(map<string, string> &ToDo){
    cout<<" Enter the task you want to update. \n";
    string str;
    getline(cin, str);
    cout<<"Enter new status of the task: \n";
    string status;
    getline(cin, status);
    ToDo[str]= status;
    cout<<" Task status updated successfully";
}
void deleteTask(map<string, string> &ToDo){
    cout<<" Enter the task you want to delete. \n";
    string str;
    getline(cin, str);
    ToDo.erase(str);
    cout<< "Task deleted successfully";
}
int EXIT(int loop){
    loop=0;
    return loop;
}
int main(){
    // initializing loop so that the code runs until user chooses to exit.
    int loop=1;
    map< string, string> ToDo;
    while(loop==1){
        // displaying the features to users.
        cout<< "\n Choose task to be performed: \n";
        cout<< "1. Add Task. \n";
        cout<< "2. Display Tasks. \n";
        cout<< "3. Mark task as done. \n";
        cout<< "4. Delete Task \n";
        cout<< "5. EXIT \n";
        
        // Taking input from user.
        int choice;
        cin >> choice;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        //calling functions.
        switch (choice){
            case 1:
                addTask(ToDo);
                break;
            case 2:
                print(ToDo);
                break;
            case 3:
                markTask(ToDo);
                break;
            case 4:
                deleteTask(ToDo);
                break;
            case 5:
                loop = EXIT(loop);
                break;
        
            default: 
                cout << "Choose a valid option";
                break;
        }
    }
    return 0;
}
