#include <iostream>
#include <string.h>

using std::string;
// Reverse function
void Reverse(string &a)
{
    int N = a.length();
    for(int i = 0; i < N/2; i++)
    {
        std::swap(a[i] , a[N - i - 1]);
    }
}
// Main function
int main(){
    string a = "abc de";
    Reverse(a);
    std::cout<<a;
    return 0;
}
