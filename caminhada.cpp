#include <iostream>

int main(int argc, char const *argv[])
{
    int n, m;
    std::cin >> n >> m;
    int pontuacoes[n];
    for (int i = 0; i < n; i++) {
        int pontuacao;
        std::cin >> pontuacao;
        pontuacoes[i] = pontuacao;
    }

    int max_sum = 0;
    for (int i = 0; i < n-m+1; i++) {
        int sum = 0;
        for (int j = i; j < i+m; j++) {
            sum += pontuacoes[j]*j;
        }
        max_sum = max_sum < sum ? sum : max_sum;
    }
    std::cout << max_sum;

    return 0;
}
