// AUTHOR: Kousthub
// Code Explanation : Calculate Taylor Series using recursion

#include <bits/stdc++.h>
using namespace std;

/* Taylor(x,n) = 1+x/1!+x2/2!+....
               = 1+x/1!+x*x/2*1+x*x*x/3*2*1
    Here calculate only term
*/
float taylor(float x, float n)
{
    if (n == 0)
    {
        return 1;
    }

    if (n == 1)
    {
        return x;
    }

    return x / n * taylor(x, n - 1);
}

// Best way to do this to get full series
float taylor_full(float x, float n)
{
    static float p = 1, f = 1;

    if (n == 0)
    {
        return 1;
    }
    float r = taylor_full(x, n - 1);
    p *= x;
    f *= n;
    return r+p/f;
}

//My method
float taylor_horner(float x, float n, float currNum) {
    if(n == 0) {
        return 1;
    }
    
    if(n == currNum) {
        return 1+x/n;
    }

    return 1+ (x/currNum) * taylor_horner(x, n, currNum+1);
}

//Static method is way cleaner
float taylor_hornet_static(float x, float n) {
    static float s;
    if(n == 0) {
        return s;
    }

    s = 1+(x/n)*s;
    return taylor_hornet_static(x,n-1);
}

int main()
{
    cout << taylor_full(2, 2) << "\n";
    cout << taylor_horner(2,2,1)<< "\n";
}
