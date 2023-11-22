#include <iostream>
#include <conio.h>

using namespace std;

//global variable
string playerName;

void countDown();
void chapterOne();
void introChapter();
void Game();

int main(){
    system("cls");
    cout<<"********************"<<"GAME"<<"********************"<<endl;
    Game();
    return 0;
}
void introChapter(){
    cout<<"What is your name: ";
    getline(cin, playerName);   
    system("cls");
    cout<<"Hello "<<playerName<<", welcome to my story!";
    getch();
    system("cls");
    cout<<"You're about to enter a dream, we'll meet again soon enough.";
    getch();
    system("cls");
}

void countDown(){
    int i = 3;
    while(i > 0){
       
        cout<<i;
        i--;
        getch();
        system("cls");
    }
}

void chapterOne(){
    char playerChoice;
    cout<<"Girlfriend: Babe...";
    getch();
    system("cls");
    cout<<"Girlfriend: Babe! Wake up!";
    getch();
    system("cls");  
    cout<<playerName<<": Oh I feel asleep, sorry";
    getch();
    system("cls");
    cout<<"Girlfriend: It's fine, did you sleep well?";
    getch();
    system("cls");
    while(playerChoice !='1' && playerChoice !='2'){
        system("cls");
        cout<<"1. I slept well, I had a weird dream though."<<endl;
        cout<<"2. I didn't sleep very well, I had a weird dream."<<endl;
        cout<<"(please use the numbers as an answer in the prompts)"<<endl;
        cin>>playerChoice;
    }
    switch(playerChoice){
        case '1':
            system("cls");
            cout<<"I'm glad! What was your dream about?";
            break;
        case '2':
            system("cls");
            cout<<"That sucks, did you have one of those dreams again?";
            break;
        }
   
}

void Game(){
    introChapter();
    countDown();
    chapterOne();
}