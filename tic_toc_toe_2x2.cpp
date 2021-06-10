#include<iostream>
#include<windows.h>
using namespace std;


short int count = 0;
char tic_tac[2][2] ;

char tic_tac_result[2][2] ;

template<class x>
void print_tic_tac(x tic_tac[2][2]){
    cout<<" _________\n";
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<"|  "<<tic_tac[i][j]<<" ";
          
        }
        cout<<"|\n|____|____|";
        cout<<"\n";
    }

 


}

   void print_current(){
       cout<<"---------------------------\n\t\tMOVE LEFT " <<4-count<<'\n';
       print_tic_tac(tic_tac);
       print_tic_tac(tic_tac_result);

       cout<<"\n---------------------------\n\n";

    }
int main(){
    system("cls");
    system("color 07");

    cout<<"\n\n\n";
   
    char player_A, player_B;
    
    
    tic_tac[0][0] = '1';
    tic_tac[0][1] = '2';
    tic_tac[1][0] = '3';
    tic_tac[1][1] = '4';


    tic_tac_result[0][0] = ' ';
    tic_tac_result[0][1] = ' ';
    tic_tac_result[1][0] = ' ';
    tic_tac_result[1][1] = ' ';

 

    int win = 1;
    char ans ;
    while(count<4 and win){

            print_current();
            short int x ;
            
            if(count&1){
            cout<<"PLAYER_A( @ ) >> ";
            ans = '@';
            }
            else{
            cout<<"PLAYER_A( # ) >> ";
            ans = '#';
            }

            cin>>x;

            switch(x){
                
                case 1:
                    if(tic_tac_result[0][0] == ' '){
                        tic_tac_result[0][0] = ans;
                         tic_tac[0][0] = ' ';
                        if(tic_tac_result[0][0] == tic_tac_result[0][1])
                            win = 0;
                        count++;
                        }
                    else{
                        system("color 0c");
                        cout<<"invalid move :(";
                        Sleep(1000);
                        system("color 07");
                    }
                    break;


                case 2:
                    if(tic_tac_result[0][1] == ' '){
                        tic_tac_result[0][1] = ans;
                        tic_tac[0][1] = ' ';
                         if(tic_tac_result[0][1] == tic_tac_result[0][0])
                            win = 0;
                        count++;
                        }
                    else{
                        system("color 0c");
                        cout<<"invalid move :(";
                         Sleep(1000);
                        system("color 07");
                    }
                    break;

                
                case 3:
                    if(tic_tac_result[1][0] == ' '){
                         tic_tac[1][0] = ' ';
                        tic_tac_result[1][0] = ans;
                         if(tic_tac_result[1][0] == tic_tac_result[1][1])
                            win = 0;
                        count++;
                        }
                    else{
                        system("color 0c");
                        cout<<"invalid move :(";
                         Sleep(1000);
                        system("color 07");
                    }
                    break;

                
                case 4:
                    if(tic_tac_result[1][1] == ' '){
                         tic_tac[1][1] = ' ';
                        tic_tac_result[1][1] = ans;
                         if(tic_tac_result[1][1] == tic_tac_result[1][0])
                            win = 0;
                        count++;
                        }
                    else{
                        system("color 0c");
                        cout<<"invalid move :(";
                         Sleep(1000);
                        system("color 07");
                    }
                    break;
                
                default:
                system("color 0c");
                cout<<"invalid move :(";
                 Sleep(1000);
                system("color 07");

            }


        cout<<"\n\n";






    }




    
    if(win == 0){
        system("cls");
        system("color 02 ");
         print_current();

        if(ans == '@'){
            cout<<"player A won !\n--------------------";

        }else{
            cout<<"player B won!\n----------------------";
        }
    }else{
        system("color 0c");
        print_current();
        

    }

    Sleep(1000);

    main();






}