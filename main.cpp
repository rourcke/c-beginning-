#include "iostream"
using namespace std;
int main()

{
    float wide , length ;
    // the input from the user
    cout<<"please enter the length of the circule ";
    cin>>length;
    
    
    /*processing
     wide = 2 x 3.14 x half length */
    wide = 2 * 3.14 * ( 0.5 * length) ;
    
    // processing
    cout<<"the wide of the circule =" << wide << "\n" ;
    
    return 0;
}
