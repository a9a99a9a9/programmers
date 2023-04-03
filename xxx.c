#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// common_len은 배열 common의 길이입니다.
int solution(int common[], size_t common_len) {
    int answer = 0;
    if (common[common_len - 2] - common[common_len - 3] == common[common_len - 1] - common[common_len - 2]) {
        int a = common[common_len - 1] - common[common_len - 2];
        int answer = common[common_len - 1] + a;
        return answer;
    }
    if (common[common_len - 1] / common[common_len - 2] == common[common_len - 2] / common[common_len - 3]) {
        int b = common[common_len - 1] / common[common_len - 2];
        int answer = common[common_len - 1] * b;
        return answer;
    }
}