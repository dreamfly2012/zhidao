#include <iostream>

using namespace std;

int main(){
    int m = 0;
    int i = 0;
    int n = 0;
    cin>>m;
    while(m!=0)
    {
        n = n*10 + m%10;
        m = m/10;
        i++;
    }
    cout<<"位数:"<<i<<endl;
    cout<<"逆序之后的数是"<<n<<endl;
}
