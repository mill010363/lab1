#include<iostream>

using namespace std;

int main(){
        int n=0;
        cout<<"Please enter your number:";
        cin>>n;
        cout<<n<<" ";
        while(1){
                if (n==1)
                        break;
                else if (n%2==0)
                        n/=2;
                else if (n%2==1)
                        n=3*n+1;
                cout<<n<<" ";
        }
        cout<<endl;
        return 0;
}
