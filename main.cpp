#include <iostream>
using namespace std;
int t,num;
int revnum(int num)
{
    int remainder=0,afterReverse=0;
    while(num!=0)
    {
        remainder=num%10;
        afterReverse=((afterReverse*10)+remainder);
        num=num/10;
    }
    return afterReverse;
}
int main()
{
    cin>>t;
    while(t>0)
    {
        int step=0;
        cin>>num;
        while(revnum(num)!=num)
        {
            num=num+revnum(num);
            step++;
        }
        cout<<num<<" "<<step<<endl;
        t--;
    }
    return 0;
}
