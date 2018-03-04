#include <iostream>
using namespace std;

int main()
{
    int num,i,j,k;
    cin>>num;

    while(num!=0){
        int matrix[num][num];
        for(i=0;i<num;i++){
            for(j=0;j<num;j++){

                if(num%2==0){
                    for(k=1;k<=num/2;k++){
                        if(i==k-1 || j==k-1 || i==num-k || j==num-k){
                            cout<<k<<"  ";
                            break;
                        }
                    }
                }
                if(num%2==1){
                    for(k=1;k<=(num/2)+1;k++){
                        if(i==k-1 || j==k-1 || i==num-k || j==num-k){
                            cout<<k<<"  ";
                            break;
                        }
                    }
                }
            }
            cout<<endl<<endl;
        }

        cin>>num;
    }

    return 0;
}
