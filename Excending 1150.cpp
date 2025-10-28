#include<iostream>
using namespace std;
int main()
{
    int x,z,sum=0,num=0;
    cin>>x;
    while (cin>>z){
        if(z>x)
            break;
    }
        while(sum<z){
            sum+=x;
            num++;
            x++;
        }
        cout<<num<<endl;
    return 0;
}
