#include <iostream>
using namespace std;

int main() {
  	int h=0;
  	int horseshoes[4];
  	cout<<"Colors of horseshoes\n";
  	cin>>horseshoes[0]>>horseshoes[1]>>horseshoes[2]>>horseshoes[3];

    for(int i = 0; i < 4; i++){
            for(int j = i; j < 3; j++){
                if(horseshoes[i] == horseshoes[j + 1]){
                    h++;
                    break;
                }
            }
        }
    cout<< "\nMinimum of horseshoes to buy : " << h << "\n";
    return 0;
}


