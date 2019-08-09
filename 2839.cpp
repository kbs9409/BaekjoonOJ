//https://www.acmicpc.net/problem/2839

#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    
    while(1)
    {
        if(n % 5 == 0)
        {
            count += n/5;
            break;
        }
        else if(n < 3)
        {
            count = -1;
            break;
        }
        else
        {
            n -= 3;
            count++;
        }
    }
    
    cout << count << endl;
    
    return 0;
}
