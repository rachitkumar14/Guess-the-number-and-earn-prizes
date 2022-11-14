#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
class guess
{
    int tell;
     int count=1;
    char name[30];
    int n ;
    public:
    guess();
    int prizes();
    int game();
};
guess :: guess()
{
    cout<<"\t\t-> Enter your name :";
    cin>>name;
    cout<<"IN THIS GAME YOU CAN MORE GIFTS ACCORDING TO THE NO. OF GUESSES"<<endl;
    cout<<"\tIf you get the number in 6 or less than 6 time , you can earn prizes"<<endl;
    srand(time(0));
    n=rand()%100+1;
   // cout<<n<<endl;
    cout<<"In this game A random number is generated between 1 to 100 , you have to guess the number and Earn prizes"<<endl;
    game();
}
int guess::game()
{
    cout<<"Tell your guess :"<<endl;
    cin>>tell;
    if(tell<n)
    {
        cout<<"please choose greater number"<<endl;
        count++;
        game();
    }
    else if(tell>n)
    {
        cout<<"Please choose lesser number"<<endl;
        count++;
        game();
    }
    else
    {
        cout<<"You got the number in "<<count<< " time "<<endl;
         prizes();
    }
}
int guess::prizes()
{
    if(count==1)
    {
        cout<<" -->You win the Brand new I-phone 14 Pro max "<<endl;
        cout<<"JO DETA HAI USSE LE LENA"<<endl;
    }
    else if(count==2)
    {
        cout<<" -->You win the Apple Ear buds "<<endl;
        cout<<"Note :-JO DETA HAI USSE LE LENA"<<endl; 
    }
    else if (count ==3)
    {
        cout<<" -->You win the watch"<<endl;
        cout<<"JO DETA HAI USSE LE LENA"<<endl;
    }
    else if (count==4)
    {
        cout<<" -->You win the 500 INR"<<endl;
        cout<<"JO DETA HAI USSE LE LENA"<<endl;
    }
     else if (count==5)
    {
        cout<<" -->You win the 200 INR"<<endl;
        cout<<"JO DETA HAI USSE LE LENA"<<endl;
    }
     else if (count==6)
    {
        cout<<" -->You win the 100 INR"<<endl;
        cout<<"JO DETA HAI USSE LE LENA"<<endl;
    }
    
    else
    {
        cout<<"Sorry , you dont earn any prizes "<<endl;
        cout<<"Better LUCK , Next Time "<<endl;
    }
}
int main()
{
    guess r;
    return 0;
}