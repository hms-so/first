#include <iostream>
using namespace std;

//ip:implemented problems, x:Problem number, n:problems in contest
int ip,x,n;

// Petya, Vasya, Tonya
int p, v, t;

//This function calculates number of implemented problems now
int calc(int x){
    cin>>p>>v>>t;
    if (p+v+t>1){
        ip+=1;
    }
    cout<<"Number of implemented problems now = ";
    return ip;
}

int main(){
    cout<<"Number of problems in the contest ";
    cin>>n;
    for (int i=0;i=n;i++){
            if (x==n){
                break;
            }
            cout<<"\n\nProblem number : ";
            cin>>x;
            cout<<calc(x);
    }
    return 0;
}
