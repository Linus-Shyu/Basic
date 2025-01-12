//
//  main.cpp
//  A. Coin Transformation
//
//  Created by Faxin Xu on 2025/1/12.
//

#include <iostream>

using namespace std;
unsigned long long n,ans;
int main(int argc, const char * argv[]) {
    int T;
    cin >> T;
    while(T--)
    {
        cin >> n;
        ans = 1;
        while (n > 3)
        {
            ans *= 2;
            n /= 4;
        }
        cout << ans << endl;
    }
    return 0;
}
