#include <string>
#include <vector>
#include <iostream>
using std::string;
using std::vector;
using std::cout;

class PrimeFacotrs {
private:
    vector<string> factors;

    void getPrimeFactors(int number) {
        for (int i = 2; i * i <= number; ++i) {
            while (number % i == 0) {
                factors.push_back(std::to_string(i));
                number /= i;
            }
        }
        if (number > 1) {
            factors.push_back(std::to_string(number)); // 마지막 남은 소수
        }
    }

    string getPrimeFactorsResult() {
        string ret = "[";

        for (int i = 0; i < factors.size(); i++) {
            ret += factors[i];

            if (i < factors.size() - 1)
                ret += ",";
        }

        return ret + "]";
    }

public:
    string getResult(int num) {
        getPrimeFactors(num);
        return getPrimeFactorsResult();
    }
};