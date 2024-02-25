#include <bits/stdc++.h>
#include <string.h>
using namespace std;

string tasks[50] = {""};
int tasks_counter = 0;  // aka size of the to-do list;

void displayTasks()
{
    cout<<"\n";
    cout<<"---------Your Current Tasks--------- "<<endl;
    cout<<"\n";
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    for(int i = 0; i<tasks_counter; i++)
    {
        cout<<"Task "<<i+1<<". "<<tasks[i]<<endl;
    }
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"\n";
}
int main()
{
    system("color a");
    cout<<"----------------------------------TO-DO LIST----------------------------------"<<endl;
    int choice = -1;
    while(choice != 0)
    {
        cout<<"What do you want to do?"<<endl;
        cout<<"(1) CREATE NEW TASK"<<endl;
        cout<<"(2) VIEW ALL TASKS"<<endl;
        cout<<"(3) DELETE TASKS"<<endl;
        cout<<"(0) CLOSE TO-DO LIST"<<endl;
        cout<<"\n"<<"Choose an Option: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
            {
                if(tasks_counter>50){
                    cout<<"~~~~ Maximum Task Limit Reached ~~~~";
                }
                else{
                    cout<<"Enter a task: ";
                    cin.ignore();
                    getline(cin, tasks[tasks_counter]);
                    tasks_counter++;
                }
                break;            
            }
            case 2:
            {
                if(tasks_counter == 0)
                {
                    cout<<"You have no tasks left! Phew!"<<endl;
                }
                else
                {
                    displayTasks();
                }
                break;            
            }
            case 3:
            {
                if(tasks_counter == 0)
                {
                    cout<<"You have no tasks left! Phew!"<<endl;
                }
                else
                {
                    displayTasks();
                    cout<<"\n"<<"Select the task to be deleted: ";
                    int delNum = 0;
                    cin>>delNum;
                    
                    if(delNum < 0 || delNum > 50)
                    {
                        cout<<"Invalid Task Number"<<endl;
                    }
                    else{
                        for(int i = delNum-1; i<tasks_counter; i++)
                        {
                            tasks[i] = tasks[i+1];
                            
                        }
                        tasks_counter--;
                    }
                    displayTasks();
                    break;
                }
                case 0:{}
                break;
                
                default:
                {
                    cout<<"Please select a valid option!"<<endl;
                    break;
                }   
            }
        }
    }
    cout<<"-----------------TO-DO LIST CLOSED-----------------";
}
