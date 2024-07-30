// Aman prajapati 23070123017
// reverse
#include <iostream>
using namespace std;
int main() {
    int n,reverse=0,rem;
    cout<<"enter your 5 digit PRN:"<<endl;
    cin>>n;
    while (n!=0){
        rem=n%10;
        reverse=reverse*10+rem;
        n=n/10;
    }
    cout<<"reverse number="<<reverse<<endl;
    return 0;
}
//output
//enter your 5 digit PRN:
//45672
//reverse number=27654