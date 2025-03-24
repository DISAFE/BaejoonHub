#include <iostream>

int main()
{
    int N;
    int* size = new int[6];
    int T, P;
    int TR = 0, PR1 = 0, PR2 = 0;
    
    std::cin >> N;
    for (int i = 0; i < 6; i++)
    {
        std::cin >> size[i];
    }
    std::cin >> T >> P;
    
    for (int i = 0; i < 6; i++)
    {
        if(size[i] != 0) TR += (size[i] - 1) / T + 1;
    }
    PR1 = N / P;
    PR2 = N % P;

    std::cout << TR << "\n" << PR1 << " " << PR2;
}

