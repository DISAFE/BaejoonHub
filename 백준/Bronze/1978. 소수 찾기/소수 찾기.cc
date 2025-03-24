#include <iostream>

int main()
{
    int N;
    std::cin >> N;
    int R = N;
    for (int i = 0; i < N; i++)
    {
        int n;
        std::cin >> n;
        if (n == 1) R--;
        else
        {
            for (int j = 2; j < n; j++)
            {
                if (n % j == 0)
                {
                    R--;
                    break;
                }
            }
        }
    }
       
    

    std::cout << R;
 

}