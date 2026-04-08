#include <iostream>

using namespace std;
int primenumber(int n){
if (n<=1) return false;
for(int i = 2; i <= n / 2 ; i++){
    if(n % i == 0) return false;
}
return true;
}
int main()
{
    int n;
    cout << "enter the value of n: " << endl;
    cin>>n;
    cout<<" the prime numbers from 1 to "<< n <<" are:\n " <<endl;
    for(int  i= 1; i<=n; i++ ){
        if(primenumber(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}
