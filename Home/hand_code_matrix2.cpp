#include <iostream>
using namespace std;

int main()
{
    int num,i,j,k,l,flag,one;
    cin>>num;

    while(num!=0){
        int matrix[num][num];

        for(i=0;i<num;i++){
            for(j=0;j<num;j++){

                if(i==0){
                    if(j==0){
                        k=i+1;
                    }
                    cout<<k<<" ";
                    k++;
                }

                if(i>0){
                    if(j==0){
                        k=i+1;
                    }
                    if(k!=0){
                        cout<<k<<" ";
                        k--;
                        flag=0;
                        one=0;
                    }
                    if(k==0 && one>0){
                        if(flag==0){
                            l=k+2;
                            flag=5;
                        }
                        cout<<l<<" ";
                        l++;


                    }
                    one++;
                }


            }
            cout<<endl;
        }

        cin>>num;
    }

    return 0;
}

