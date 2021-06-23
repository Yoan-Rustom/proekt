#include<iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>

  using namespace std;

  int main()
{

   int playerguess1;
   char playerguess2;
   char playerguess3;
   int playerguess4;
   int playerguess5;
   int right= 1;
  cout<<"HELLO AND WELCOME TO MY BOOK GAME WHERE YOU WILL TRY TO GET TO THE END USING YOUR BRAIN!!!"<<endl;
  cout<<""<<endl;
  cout<<"Press Enter Or I Will Press It"<<endl;
  cin.get();
  cout<<""<<endl;
  cout<<"So all you remember now is how you went to the disco last night and then.... "<<endl;

  cout<<"Clearly you drank one too many buddy"<<endl;

  cout<<"But anyways somehow now you are trapped in the spirit realm and you will have to choose the correct answers to get out."<<endl;
   cout<<"You have 2 lives."<<endl;
   cout<<"But before the real game let s test your luck"<<endl;
   cout<<"You are now in a loop and you should try to make mistakes to get out. It s all luck from now."<<endl;

   while(right<5){
        srand(time(0)); //seed random number generator
    int comps = rand() % 3; // random number between 10 and 99
      cout<<"There is a spirit in front of you what will you do? You either attack with 0, run with 1 or just try to talk with it with 2"<<endl;
      cin>>playerguess5;
   if(playerguess5==comps){

   cout<<"No of course this wasn t right"<<endl;
   right++;
   }
   else{
    cout<<"A really good choice"<<endl;
   }
     cout<<"Now you see a shaking rabbit in front of you. Would you pick it up with 0, leave it with 1 or scare it away with 2."<<endl;
     cin>>playerguess4;
      srand(time(0)); //seed random number generator
    int gang = rand() % 3; // random number between 10 and 99
     if(playerguess4==gang)
     {
         cout<<"The rabbit beat you up"<<endl;
         right++;
     }
     else{

        cout<<"You made the right move"<<endl;
     }

   }
   cout<<"You have now got out of my loop"<<endl;
   cout<<"Let s start the real game now"<<endl;
  cout<<"In front of you there are three cups. The first one is wooden, the second one is golden and the third one is made of diamond."<<endl;
  cout<<"Which one will you drink from. Press one for wood, two for gold and three for diamond."<<endl;
  cin>>playerguess1;



    if( playerguess1==1)
    {

        cout<<"Ok you aren' t stupid after all huh."<<endl;


        cout<<"Lives= 2"<<endl;
        cout<<"What letter is in seasons, seconds, centuries and minutes but not in decades, years or days?"<<endl;
        cin>>playerguess2;
        if(playerguess2=='n'){
            cout<<"Bravo my friend you are better than everyone who I have tested this way."<<endl;
            cout<<"You still have your 2 lives"<<endl;
            cout<<"Lives= 2"<<endl;
            cout<<"Tell me the element you are now in order to get out."<<endl;
            cin>>playerguess3;
            if(playerguess3=='air fire'||'fire air'){
                cout<<"You got it right too many times. You are too good for the human world you won."<<endl;
            Sleep(2000);
            cout<<"You didn t just escape you also helped me with something"<<endl;
            Sleep(2000);
            cout<<"You helped me defeat my greatest enemy"<<endl;
            Sleep(2000);
            cout<<"For a thousand years I searched for someone that could help me"<<endl;
            Sleep(2000);
            cout<<"But I quickly understood that when I told them I needed help they wouldn t do anything"<<endl;
            Sleep(2000);
            cout<<" So I decided to put their own lives on the line"<<endl;
            Sleep(2000);
            cout<<"Thank you! You are now free. Go see your family and friends"<<endl;
            }
          else{

            cout<<"You don t loose but you don t win"<<endl;
          }

        }
        else{

        cout<<"You are clearly still drunk"<<endl;
        cout<<"Don't do this again!!!"<<endl;
        cout<<"Lives= 1"<<endl;
        cout<<"Tell me the element you are now in order to get out."<<endl;
        cin>>playerguess3;
        if(playerguess3=='air fire'||'fire air'){


            cout<<"You are leaving me now. You won."<<endl;
            Sleep(2000);
            cout<<"You didn t just escape you also helped me with something"<<endl;
            Sleep(2000);
            cout<<"You helped me defeat my greatest enemy"<<endl;
            Sleep(2000);
            cout<<"For a thousand years I searched for someone that could help me"<<endl;
            Sleep(2000);
            cout<<"But I quickly understood that when I told them I needed help they wouldn t do anything"<<endl;
            Sleep(2000);
            cout<<" So I decided to put their own lives on the line"<<endl;
            Sleep(2000);
            cout<<"Thank you! You are now free. Go see your family and friends"<<endl;
        }
        else{


            cout<<"You are staying with me you lost"<<endl;
        }


        }
    }

    else{

        cout<<"You are too greedy."<<endl;
        cout<<"If you do that again you will stay here with me forever"<<endl;
        cout<<"LIves= 1"<<endl;

        cout<<"What letter is in seasons, seconds, centuries and minutes but not in decades, years or days?"<<endl;
        cin>>playerguess2;
        if(playerguess2=='n'){
            cout<<"Bravo my friend you are better than everyone who I have tested this way."<<endl;
            cout<<"But remember you still got one incorrect"<<endl;
            cout<<"Lives= 1"<<endl;
            cout<<"Tell me the element you are now in order to get out."<<endl;
            cin>>playerguess3;
            if(playerguess3=='air fire'||'fire air'){


            cout<<"You are leaving me now. You won."<<endl;
            Sleep(2000);
            cout<<"You didn t just escape you also helped me with something"<<endl;
            Sleep(2000);
            cout<<"You helped me defeat my greatest enemy"<<endl;
            Sleep(2000);
            cout<<"For a thousand years I searched for someone that could help me"<<endl;
            Sleep(2000);
            cout<<"But I quickly understood that when I told them I needed help they wouldn t do anything"<<endl;
            Sleep(2000);
            cout<<" So I decided to put their own lives on the line"<<endl;
            Sleep(2000);
            cout<<"Thank you! You are now free. Go see your family and friends"<<endl;
        }
        else{


            cout<<"You are staying with me you lost"<<endl;
        }


        }
        else{

        cout<<"You are clearly still drunk"<<endl;
        cout<<"Lives= 0"<<endl;
        cout<<"You lost. You are staying with me forever"<<endl;
        return 0;
        }

        }



    return 0;
}
