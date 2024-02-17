using namespace std;
int main ()
{ while(1)
{
     int n;
   cout<<setw(30)<<"Guess Any Number betwen 1 to 6 :- ";
    cin>>n;
   int rn= rand() %6+1;

    if(n==rn)
     {
       cout<<setw(32)<<"You Have Won"<<endl<<endl;
     }
    else
    {
     cout<<setw(32)<<"You have Loss.Try Again."<<endl;
     cout<<setw(32)<<"Random Number Was:"<<rn<<endl<<endl;
    }

}

    getch();
}
