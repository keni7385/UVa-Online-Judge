/* Problem 10684 - The jackpot */
#include <iostream>

using namespace std;

int main() {
    int N;
    int sum, ans, inp;
    for(;;) {
        cin >> N;
        if(N == 0)
            break;
        sum = ans = 0;
        for(int i=0; i<N; i++) {
            cin >> inp;
            sum += inp;
            ans = max(ans, sum);
            if(sum<0) sum = 0;
        }
        if(ans > 0)
            cout << "The maximum winning streak is " << ans << "." << endl;
        else
            cout << "Losing streak." << endl;
    }
    
    return 0;
}
