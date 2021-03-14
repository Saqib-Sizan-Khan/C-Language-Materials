#include<bits/stdc++.h>

using namespace std;

int length(int n)
{
    return n>9 ? 9 : n;
}

void solve(int n)
{
    n=length(n);

    int gap;

    gap=n;

    for(int length=1; length<=n; length++){
        gap--;
        ///if n=5 : gap in first line will be 8
        ///first space to need
        for(int space=1; space<=gap*2; space++){
            cout<<" ";
        }
        ///then print first half with a single space : 1 2 3 4 5
        for(int first=1; first<=length; first++){
            cout<<first<<" ";
        }
        ///then print second half with single space : 4 3 2 1 :: total output :: 1 2 3 4 5 4 3 2 1
        for(int second=length-1; second>=1; second--){
            cout<<second<<" ";
        }
        cout<<endl;
    }
}

int main()

{
    int n;

    cin>>n;

    solve(n);

    exit(0);
}
