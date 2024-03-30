//
//  main.cpp
//  Calculate radius in circle
//
//  Created by Nipuna Lakruwan on 2023-10-25.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int x,r,z;
    

    
    cout << " Welcome to Radius Calculator"<<endl;
    cout << ".............................." <<endl;
    
    
    
     
    do {
        cout << " Circumference: ";
        cin >> x;
        r=x/2*3.141;
        cout << "Radius: " << r <<endl;
        
        cout << " Do you want to continue(Y/N): ";
        cin >> z;
        

        
    } while (z=='Y');
    
    if (z=='N') {
        cout << " Thank you, Come again😁" <<endl;
    }


    return 0;
}
