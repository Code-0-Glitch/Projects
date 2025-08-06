#include <iostream>
#include <ctime>

char mchoice(char user){
    std::cout<<"**************************************\n";
    std::cout<<"WELCOME TO GAME OF ROCK-PAPER-SCISSORS\n";
    std::cout<<"**************************************\n";
    std::cout<<"please enter your choice\n";
    std::cout<<"\n'r' = rock\n'p' = paper\n's' = scissors\n";
    do {std::cout<<"your choice: ";
    std::cin>>user;
    if(user == 'r' || user == 'p' || user == 's'){
    std::cout<<"\n THANK YOU FOR CHOOSING";
    }
    else {
        std::cout<<"INVALID INPUT ! PLEASE TRY AGAIN\n";
    }}
    while(user != 'r' && user != 'p' && user != 's');
    return user;
}
char cchoice(char user){
    srand(time(0));
    int num = rand()%3+1;
    switch(num){
       case 1: return 'r';
       case 2: return 'p';
       case 3: return 's';

    }
}
void showchoice(char user){
   /* if (user == 'r'){
        std::cout<<"rock\n";
    }
    else if (user == 'p'){
        std::cout<<"paper\n";
    }
    else if (user == 's'){
        std::cout<<"scissors\n";
    }*/
   switch(user){
    case 'r':std::cout<<"ROCK\n";
    break;
    case 'p':std::cout<<"PAPER\n";
    break;
    case 's':std::cout<<"SCISSORS\n";
    break;
   }

}

void winner(char user, char cuser){
    switch (user){
        case 'r':if(cuser == 'r'){
            std::cout<<"*********** !! IT'S A TIE !! ***********";
        }
        else if (cuser == 'p'){
            std::cout<<"********** !! YOU WIN !! ***********";
        }
        else {
            std::cout<<"*********** !! LOSER !! *********** ";
        }
        break;
    case 'p':if(cuser == 'p'){
            std::cout<<"*********** !! IT'S A TIE !! ***********";
        }
        else if (cuser == 's'){
            std::cout<<"********** !! LOSER !! ***********";
        }
        else {
            std::cout<<"*********** !! YOU WIN !! *********** ";
        }
        break;
    case 's':if(cuser == 's'){
            std::cout<<"*********** !! IT'S A TIE !! ***********";
        }
        else if (cuser == 'r'){
            std::cout<<"*********** !! LOSER !! ***********";
        }
        else {
            std::cout<<"*********** !! YOU WIN !! *********** ";
        }
        break;
        
    }
}


int main(){
    char human;
    char computor;
    char newgame;
    do {human = mchoice(human);
    std::cout<<"\n     YOU CHOSE:";
   showchoice(human);
   //std::cout<<human;
   computor = cchoice(computor);
    std::cout<<"COMPUTER CHOSE:";
    showchoice(computor);
    winner(human, computor);
std::cout<<"\nWANT TO TRY AGAIN ? \n'y' for yes\n'n' for no\n";
std::cin>>newgame;
}
    while(newgame == 'y');
    return 0;

}