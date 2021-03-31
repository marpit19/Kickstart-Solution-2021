#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <math.h>

using namespace std;


int main(void)
{
    long long int T,N,K;
    cin>>T;
    long long int scores[T][2];


    //Fills the array with 0
    for (long long int i=0;i<T;++i){
        scores[i][0]=0;
        scores[i][1]=0;
    }


    //Reads variables and string
    for(long long int i=0;i<T;++i){
        cin>>N>>K;
        string test;
        cin>>test;
        for(int j=0;j<N/2;++j){
            if(test[j]!=test[N-1-j])scores[i][0]++;
        }
        scores[i][1]=abs(K-scores[i][0]);
    }
    for(long long int i=0;i<T;++i){
        cout<<"Case #"<<i+1<<": "<<scores[i][1]<<endl;
    }
    return 0;
}
