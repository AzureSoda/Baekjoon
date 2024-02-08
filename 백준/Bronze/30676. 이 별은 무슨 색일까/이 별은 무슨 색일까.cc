#include<bits/stdc++.h>
using namespace std;

int main(){
    int wavelength;
    cin>>wavelength;

    if(wavelength >= 620)
        cout<<"Red";
    else if(wavelength >= 590)
        cout<<"Orange";
    else if(wavelength >= 570)
        cout<<"Yellow";
    else if(wavelength >= 495)
        cout<<"Green";
    else if(wavelength >= 450)
        cout<<"Blue";
    else if(wavelength >= 425)
        cout<<"Indigo";
    else
        cout<<"Violet";

    return 0;
}
