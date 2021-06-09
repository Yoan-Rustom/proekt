#include<iostream>

  using namespace std;

  int main()
{

   int playerguess1;
   char playerguess2;
   char playerguess3;
   int playerguess4;
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
            if(playerguess3=='a'){
                cout<<"You got it right too many times. You are too good for the human world you are staying with me."<<endl;
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
        if(playerguess3=='a'){


            cout<<"You are leaving me now. You won."<<endl;
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
            if(playerguess3=='a'){


            cout<<"You are leaving me now. You won."<<endl;
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




