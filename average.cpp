#include<iostream>
#include<cstdlib>
using namespace std;

int main(int huh,char *huhh[]){
        if(huh > 1){
             float a = 0 ;
            for(int i = 0; i < huh-1; i ++)
    {
         a+=atof(huhh[i+1]);
    }                
    cout <<"---------------------------------" << endl;
         cout << "Average of "<< huh -1<<" numbers = " << a/(huh-1)<< endl;
         cout <<"---------------------------------" << endl;

        }else{
             cout << "Please input numbers to find average.\n";
        }

    return 0;
}
