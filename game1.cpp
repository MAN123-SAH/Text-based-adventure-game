#include <iostream>
using namespace std;
int main (){
   
    int choice;
    cout<<"Welcome to the ---";
    string playerName;
    cin>>playerName;
    cout<<"LEVEL-1"<<endl;
    cout<<"riddles"<<endl;
    cout<<"I have teeth but no mouth.If a bald man carries me ,it is only for memory's sake."<<endl;
    cout<<"1.Comb"<<endl;
    cout<<"2.toothbrush"<<endl;
    cout<<"enter your choice:";
    cin>>choice;
    if(choice==1){
        cout<<"you got it correct,you got 1 point!!"<<endl;
        cout<<"you will move towards riddle 2"<<endl;
        
    }
    else if(choice==2){
        cout<<"you got it wrong,you got 0 point!!"<<endl;
        cout<<"you are out"<<endl;
        
    }
    cout<<"I take the dirty and soak them until they are bright and clean,those grass stain and marks will no longer be seen"<<endl;
    cout<<"1.Soap"<<endl;
    cout<<"2.Washing machine"<<endl;
    cout<<"enter your choice:";
    cin>>choice;
    if(choice==2){
        cout<<"you got it correct,you got 1 point!!"<<endl;
        cout<<"you will move towards level-2";
    }
    else if(choice==1){
        cout<<"you got it wrong,you got 0 point!!"<<endl;
        cout<<"you are out"<<endl;
    }
     cout<<"congratulations!! you reached to level-2 "<<endl;
    cout<<"LEVEL-2"<<endl;
    cout<<"Puzzles"<<endl;
    cout<<"T_RN"<<endl;
    cout<<"1.U"<<endl;
    cout<<"2.V"<<endl;
    cout<<"Enter choice:";
    cin>>choice;
    if(choice==1){
        cout<<"you got it correct,you got 1 point!!"<<endl;
        cout<<"you will move towards puzzle 2"<<endl;
    }
    else if(choice==2){
        cout<<"you got it wrong,you got 0 point!!"<<endl;
        cout<<"you are out"<<endl;
    }
    cout<<"_NLI_E"<<endl;
    cout<<"1.O,M"<<endl;
    cout<<"2.O,N"<<endl;
    cout<<"Enter choice:";
    cin>>choice;
    if(choice==2){
        cout<<"you got it correct,you got 1 point!!"<<endl;
        cout<<"you will move towards level-3"<<endl;
    }
    else if(choice==1){
        cout<<"you got it wrong,you got 0 point!!"<<endl;
        cout<<"you are out"<<endl;
    }
return 0;

}