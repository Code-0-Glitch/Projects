#include <iostream>
#include <time.h>
void playerchoice(int a, char *grid, char player){
std::cout<<"NOW CHOOSE YOUR POSITION!!!\n";
        std::cin>>a;
        a-=1;

        if (grid[a] == ' ' ) {
            grid[a] = player;
        }
        else {std::cout<<"YOU MISSED SUCKER!!\n";}
    }
void computorchoice(int b, char *grid, char computor, int size ){
    //size = sizeof(grid)/sizeof(grid[0]);
    for (int i = 0; i<size; i++){
        b = rand()%9;

        if (grid[b]==' '){
        grid[b]=computor;
        break;    
        }
        
        
    }

}

void gridprint(char *grid, int size){
    //size = sizeof(grid)/sizeof(grid[0]);
    int cols = 3;
    std::cout<<"_____________\n";

        for(int i = 0; i<3; i++){
            for(int j = 0; j<3; j++){
                //std::cout<<"|   |\n";
            std::cout<<"| "<<grid[i*cols+j]<<" ";
        }
            std::cout<<"|\n";
            for(int e = 0; e<cols; e++){
                std::cout<<"|___";
            }
            std::cout<<"|"<<"\n";
            //std::cout<<i;
        }
      
}
bool checkwinner(char player, char computor,char *grid, bool &running, int c, int size, char choice){
    if (grid[0]!= ' ' &&grid[1]!= ' ' &&grid[2]!= ' ' &&grid[3]!= ' ' &&grid[4]!= ' ' &&grid[5]!= ' ' &&grid[6]!= ' ' &&grid[7]!= ' ' &&grid[8]!= ' '){
        running = false;
         running =false;
        std::cout<<"\nDO YOU WANT TO PLAY ONCE MORE ('y' for YES and 'n' for NO):";
        std::cin>>choice;
        choice=='y'?running = true:running = false;
        for(int i = 0; i<size; i++){
            grid[i]= ' ';
        }
        running == true ? std::cout<<"\nOHHH!! YES, LETS PLAY MORE!!":std::cout<<"DONE FOR TODAY (*_*)";
       }
       else if ((grid[0]== player &&grid[1]==player &&grid[2]== player  ) || (grid[3]== player &&grid[4]== player &&grid[5]== player ) || (grid[6]== player && grid[7] == player &&grid[8]==player )){
        
            std::cout<<"The PlAYER WINNNNNS!!!!";
             running =false;
        std::cout<<"\nDO YOU WANT TO PLAY ONCE MORE ('y' for YES and 'n' for NO):";
        std::cin>>choice;
        choice=='y'?running = true:running = false;
        for(int i = 0; i<size; i++){
            grid[i]= ' ';
        }
        running == true ? std::cout<<"\nOHHH!! YES, LETS PLAY MORE!!":std::cout<<"DONE FOR TODAY (*_*)";

       }
       else if ((grid[0]==player &&grid[3]==player &&grid[6]==player )||(grid[1]==player &&grid[4]==player &&grid[7]==player )||(grid[2]==player &&grid[5]==player &&grid[8]==player )){
            std::cout<<"The PlAYER WINNNNNS!!!!";
             running =false;
        std::cout<<"\nDO YOU WANT TO PLAY ONCE MORE ('y' for YES and 'n' for NO):";
        std::cin>>choice;
        choice=='y'?running = true:running = false;
        for(int i = 0; i<size; i++){
            grid[i]= ' ';
        }
        running == true ? std::cout<<"\nOHHH!! YES, LETS PLAY MORE!!":std::cout<<"DONE FOR TODAY (*_*)";

       }
       else if ((grid[0]==player&&grid[4]==player&&grid[8]==player)||(grid[2]==player&&grid[4]==player&&grid[6]==player)){
            std::cout<<"The PlAYER WINNNNNS!!!!";
             running =false;
        std::cout<<"\nDO YOU WANT TO PLAY ONCE MORE ('y' for YES and 'n' for NO):";
        std::cin>>choice;
        choice=='y'?running = true:running = false;
        for(int i = 0; i<size; i++){
            grid[i]= ' ';
        }
        running == true ? std::cout<<"\nOHHH!! YES, LETS PLAY MORE!!":std::cout<<"DONE FOR TODAY (*_*)";

       }
       else if ((grid[0]== computor &&grid[1]==computor &&grid[2]== computor  ) || (grid[3]== computor &&grid[4]== computor &&grid[5]== computor ) || (grid[6]== computor && grid[7] == computor &&grid[8]==computor )){
        
            std::cout<<"The COMPUTOR WINNNNNS!!!!";
             running =false;
        std::cout<<"\nDO YOU WANT TO PLAY ONCE MORE ('y' for YES and 'n' for NO):";
        std::cin>>choice;
        choice=='y'?running = true:running = false;
        for(int i = 0; i<size; i++){
            grid[i]= ' ';
        }
        running == true ? std::cout<<"\nOHHH!! YES, LETS PLAY MORE!!":std::cout<<"DONE FOR TODAY (*_*)";

       }
       else if ((grid[0]==computor &&grid[3]==computor &&grid[6]==computor )||(grid[1]==computor &&grid[4]==computor &&grid[7]==computor )||(grid[2]==computor &&grid[5]==computor &&grid[8]==computor )){
            std::cout<<"The COMPUTOR WINNNNNS!!!!";
             running =false;
        std::cout<<"\nDO YOU WANT TO PLAY ONCE MORE ('y' for YES and 'n' for NO):";
        std::cin>>choice;
        choice=='y'?running = true:running = false;
        for(int i = 0; i<size; i++){
            grid[i]= ' ';
        }
        running == true ? std::cout<<"\nOHHH!! YES, LETS PLAY MORE!!":std::cout<<"DONE FOR TODAY (*_*)";

       }
       else if ((grid[0]==computor&&grid[4]==computor&&grid[8]==computor)||(grid[2]==computor&&grid[4]==computor&&grid[6]==computor)){
            std::cout<<"The COMPUTOR WINNNNNS!!!!";
             running =false;
        std::cout<<"\nDO YOU WANT TO PLAY ONCE MORE ('y' for YES and 'n' for NO):";
        std::cin>>choice;
        choice=='y'?running = true:running = false;
        for(int i = 0; i<size; i++){
            grid[i]= ' ';
        }
        running == true ? std::cout<<"\nOHHH!! YES, LETS PLAY MORE!!":std::cout<<"DONE FOR TODAY (*_*)";

        }
    
        
}

    

    int main(){

    // when you pass an array to a function it decays into an array

    srand(time(NULL));
    char player;
    char computor;
    


    char grid[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    bool running = true;
    int a;
    int b;
    int size= sizeof(grid)/sizeof(grid[0]);
    int c = 0;
    char choice;

  
    


    std::cout<<"***WELCOME TO TICK-TAC-TOE***";
        std::cout<<"choose your character (x or o): ";
        std::cin>>player;
        player = toupper(player);
        player == 'O'? computor = 'X': computor = 'O';
        
        
        std::cout<<"computor chose: "<<computor;

        std::cout<<"\nTHANK YOU FOR CHOOSING\n";
        std::cout<<"The position to place your character goes from left to right and down in rows, so remember that\n";
        
        while(running){
    playerchoice(a,grid,player);
    
    computorchoice (b,grid,computor, size );

    gridprint(grid, size);
    checkwinner(player, computor, grid, running, c, size, choice);
    /*for(int i = 0; i<size; i++){
        if(grid[i]!=' '){
            c++;
        }
    }
            std::cout<<"count: "<<c;
*/
        if (grid[0]!= ' ' &&grid[1]!= ' ' &&grid[2]!= ' ' &&grid[3]!= ' ' &&grid[4]!= ' ' &&grid[5]!= ' ' &&grid[6]!= ' ' &&grid[7]!= ' ' &&grid[8]!= ' '){

        running =false;
        std::cout<<"\nDO YOU WANT TO PLAY ONCE MORE ('y' for YES and 'n' for NO):";
        std::cin>>choice;
        choice=='y'?running = true:running = false;
        for(int i = 0; i<size; i++){
            grid[i]= ' ';
        }
        running == true ? std::cout<<"\nOHHH!! YES, LETS PLAY MORE!!\n":std::cout<<"DONE FOR TODAY (*_*)";
    }

       c++;
        }
        
    return 0;
}