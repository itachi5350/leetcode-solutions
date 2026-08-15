class Solution {
public:
    int kthDigit(long long k) {
        if (k < 10) return k;

        long long count = 9;
        int digits = 1;

        while (k > count * digits) {
            k -= count * digits;
            count *= 10;
            digits++;
        }

        long long first = pow(10, digits - 1);
        long long offset = (k - 1) / digits;
        long long pos = (k - 1) % digits;

        long long number = first + offset;

        bool ascending = ((number / 10) & 1) == 0;

        if (!ascending) {
            int lastDigit = number % 10;
            number = number / 10 * 10 + (9 - lastDigit);
        }

        pos = digits - pos;
        number /= pow(10, pos - 1);

        return number % 10;
    
    }
};