#include <iostream>
#include <vector>
#include <iterator>
//#include <string>
//#include <map>
#include <algorithm>
//#include <stdexcept>

std::vector<int> inputNumber();
int solution(const std::vector<int>&);

int main()
{
    std::cout << solution(inputNumber());
    return 0;
}

std::vector<int> inputNumber() {
    int d,temp; std::cout << "Input array size: " << std::endl; std::cin >> d;
    std::vector<int> vec; std::cout << "Input array elements: " << std::endl; 
    for (int i = 0; i < d; i++) { std::cin >> temp; vec.push_back(temp); }
    return vec;
}

// wystêpuje nieparzyst¹ liczbê razy. Liczba taka wystepuje tylko raz
int solution(const std::vector<int>& numbers)
{
    for (int i = 0; i < numbers.size(); i++) {
        int result = std::count(numbers.begin(), numbers.end(), numbers[i]);
        if (result % 2 != 0) return numbers[i];
    }
    return -1;
}