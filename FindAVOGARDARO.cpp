#include<iostream>
using namespace std;

int main()
{
    float mole;
    double NA;

    NA=6.023e+23;

    cout<<"Enter Number of mole which you want know how much ions , molecule , atoms are present in there "<<endl;
    cin>>mole;

    mole=mole*NA;

    cout<<"The number of particles are: "<<mole<<endl;

    return 0;
}
