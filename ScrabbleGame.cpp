#include<iostream>
#include<stdlib.h>
#include<ctime>
#include<string>
using namespace std;

int scores(string word){   //To calculate the scores of entered string.
    int score=0;
    int i=0;
    while(i<8){
    switch(word[i]){
        case 'A':
        case 'a': score+=1; break;
        case 'B':
        case 'b':score+=3;break;
        case 'C':
        case 'c':score+=3; break;
        case 'D':
        case 'd':score+=2;break;
        case 'E':
        case 'e':score+=1;break;
        case 'F':
        case 'f':score+=4;break;
        case 'G':
        case 'g':score+=2;break;
        case 'H':
        case 'h':score+=4;break;
        case 'I':
        case 'i':score+=1;break;
        case 'J':
        case 'j':score+=8;break;
        case 'K':
        case 'k':score+=5;break;
        case 'L':
        case 'l':score+=1;break;
        case 'M':
        case 'm':score+=3;break;
        case 'N':
        case 'n':score+=1;break;
        case 'O':
        case 'o':score+=1;break;
        case 'P':
        case 'p':score+=3;break;
        case 'Q':
        case 'q':score+=10;break;
        case 'R':
        case 'r':score+=1;break;
        case 'S':
        case 's':score+=1;break;
        case 'T':
        case 't':score+=1;break;
        case 'U':
        case 'u':score+=1;break;
        case 'V':
        case 'v':score+=4;break;
        case 'W':
        case 'w':score+=4;break;
        case 'X':
        case 'x':score+=8;break;
        case 'Y':
        case 'y':score+=4;break;
        case 'Z':
        case 'z':score+=10;break;
        default:cout<<"Please enter character.";
    }
    i++;
    }
    cout<<"\nscore="<<score;
    return score;
}
char alphanumber(char no){    //To generate random characters by taking random numbers as arguments.
    int x;
    switch(no){
case 1: x='A';
break; 
case 2: x='B';
break; 
case 3: x='C';
break; 
case 4: x='D';
break; 
case 5: x='E';
break; 
case 6: x='F';
break; 
case 7: x='G';
break; 
case 8: x='H';
break; 
case 9: x='I';
break; 
case 10: x='J';
break;
case 11: x='K';
break;
case 12: x='L';
break;
case 13: x='M';
break;
case 14: x='N';
break;
case 15: x='O';
break;
case 16: x='P';
break;
case 17: x='Q';
break;
case 18: x='R';
break;
case 19: x='S';
break;
case 20: x='T';
break;
case 21: x='U';
break;
case 22: x='V';
break;
case 23: x='W';
break;
case 24: x='X';
break;
case 25: x='Y';
break;
case 26: x='Z';
break;
case 27: x='a';
break;
case 28: x='b';
break;
case 29: x='c';
break;
case 30: x='d';
break;
case 31: x='e';
break;
case 32: x='f';
break;
case 33: x='g';
break;
case 34: x='h';
break;
case 35: x='i';
break;
case 36: x='j';
break;
case 37: x='k';
break;
case 38: x='l';
break;
case 39: x='m';
break;
case 40: x='n';
break;
case 41: x='o';
break;
case 42: x='p';
break;
case 43: x='q';
break;
case 44: x='r';
break;
case 45: x='s';
break;
case 46: x='t';
break;
case 47: x='u';
break;
case 48: x='v';
break;
case 49: x='w';
break;
case 50: x='x';
break;
case 51: x='y';
break;
case 52: x='z';
break;
}
return x;
}
void string_generator(char array[]){
    int i;
    srand(time(NULL));

    for(i=0;i<8;i++){   
        array[i]= alphanumber(rand()%52+1);   //Passing random numbers to get random characters in return.(Only by Computer, Not the user)
    }
}
int User1(){
    string word1;
    cout<<"\n****USER 1****";
    cout<<"\nEnter a string having 8 characters:";
    cin>>word1;
    int length1=word1.length();
    if (length1==8)
     return scores(word1);
    else
     return 0;
}
int User2(){
    string word2;
    cout<<"\n****USER 2****";
    cout<<"\nEnter a string having 8 characters:";
    cin>>word2;
    int length2=word2.length();
     if (length2==8)
     return scores(word2);
    else
     return 0;
}
int Computer(){
    int i=0;
    char array[8];
    string_generator(array);
    cout<<"\n****COMPUTER****"<<endl;
    for(int i=0;i<8;i++)
    cout<<array[i];
    return scores(array);
}

int main(){
    int user1, user2, computer;
    int mode;
    while(mode!=0){
    cout<<"\nSELECT GAME MODE:";
    cout<<"\n=> Press 1 for single player.";
    cout<<"\n=> Press 2 for two players.";
    cout<<"\n=> Press 0 To Exit Game.";
    cin>>mode;
    switch(mode){
        case 1:user1=User1();
               computer=Computer();
                 if(user1>computer)
                 cout<<"\nYou Won :)";
                else if (user1<computer)
                 cout<<"\nYou Lose :(";
               else
                 cout<<"\nIt's a Tie !";
                break;
        case 2: user1=User1();
                user2=User2();
                 if(user1>user2)
                 cout<<"\nUser 1 Won :)";
                else if(user1<user2)
                 cout<<"\nUser 2 Won :(";
                else
                 cout<<"\nIt's a Tie !";
                break;
    }
    }
}
