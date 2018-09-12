#include <iostream>

using namespace std;

int findGCD(int x, int y);

int main()
{
    int x, y;
    cout<<"Please enter two positive integers \t";
    cin>>x>>y;
    cout<<endl;
    cout<<"The GCD of "<<x<<" and "<<y<<" is "
            <<findGCD(x,y);
    cout<<endl;
    return 0;
}

int findGCD(int x, int y){
    if (y!=0){
        return findGCD(y, x%y);
    }else {
    return x;
    }

}
