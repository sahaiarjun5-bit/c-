#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    srand(time(0));
    int num=rand()%10+1;
    int n;
    cin>>n;
    while(1)
    {
        if (num>n)
        {
            cout<<"The number is greater than the input number"<<endl;
            cin>>n;
        }
        else if (num<n)
        {
            cout<<"The number is less than the input number"<<endl;
            cin>>n;
        }
        else
        {
            cout<<"You guessed the correct number"<<endl;
            break;
        }
    }
}