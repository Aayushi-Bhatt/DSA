#include<iostream>
using namespace std;

class soultion{
    public:
    double myPOW(double x,long n){
        long binForm=n;
        if(n==0)return 1.0;    //corner cases
        if(x==0)return 0.0;
        if(x==1)return 1.0;
        if(x==-1 && n%2==0)return 1.0;
        if(x==-1 && n%2!=0) return -1.0;

        if(n<0){
            x=1/x;
            binForm=-binForm;
        }
        double ans=1;

        while(binForm>0){
            if(binForm%2==1){
                ans*=x;
            }
            x*=x;
            binForm/=2;
        }
        return ans;
    }
};

int main(){
    soultion s1;
    double x =2.000000;
    long n=10;
    cout<<s1.myPOW(x,n);
    return 0;
}