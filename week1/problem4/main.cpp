#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    int n, sum=0, d; //n:number of coins , sum:between two numbers , d:div
    cout<<"Number of coins ";
    cin>>n;
    int l[n], z;
    vector<int> s;
    srand(time(0));


    if (n%2==0||n%2!=0){
        for ( int i =0; i<n; ++i ){
            l[i]=rand() % 9+1;
            cout <<l[i];
        }
    }

    for (int i = 0; i < n; ++i) {
        sum += l[i];
    }
    d=sum/2;
    cout<< "\nsum " <<sum<< " div " <<d;

    if (n==2){
        for (int n : l) {
            if (n > d) {
                z=n-d;
                s.push_back(z);
            }
        }
    }

    if (n>2){
        for (int i = 0; i < n; ++i){
            for(int j = i; j < n; ++j){
                if ( l[i] + l[j] > d && l[i] - l[j] !=0 && l[i] > l[j] ){
                    z=l[i] - l[j];
                    s.push_back(z);
                    cout<<"\nnum "<<l[i]<<" sub num "<<l[j]<<" result "<<z;
                }
                if ( l[i] + l[j] > d && l[i] - l[j] !=0 && l[i] < l[j] ){
                    z=l[i] - l[j];
                    z=s[n]*-1;
                    s.push_back(z);
                    cout<<"\nnum "<<l[i]<<" sub num "<<l[j]<<" result "<<z;
                }
            }
        }
    }
    cout << "\nElements in array s:" << endl;
    for (int i = 0 ; i < s.size() ; ++i ) {
        cout << s[i] << " ";
    }
    int max_value = *max_element(s.begin(), s.end());
    cout << "\nMaximum value in array s: " << max_value << endl;

    return 0;
}
