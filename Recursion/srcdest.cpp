#include <iostream>
using namespace std ;

void reachHome(int src , int dest){
    cout<<"Source "<<src<<" dest "<<dest << endl;

    if(src==dest){   //Base case 
        cout<<"Reached the destination successfully";
        return ;   
    }

    return reachHome(src+1,dest);
}


int main(){
    int src = 1;
    int dest = 10 ;

    reachHome(src,dest);
}