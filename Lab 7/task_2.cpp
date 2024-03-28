#include <iostream>
using namespace std;

class CurrencyConverter {
private:
    double exchangeRate;
    double amountInUSD;
    double amountInEUR;

public:
    CurrencyConverter() : exchangeRate(1.0), amountInUSD(0.0), amountInEUR(0.0) {}

    CurrencyConverter(double rate, double usdAmount) : exchangeRate(rate), amountInUSD(usdAmount) {
        amountInEUR = usdAmount * exchangeRate;
    }

    CurrencyConverter(double rate, double eurAmount, bool isEUR) : exchangeRate(rate) {
        if (isEUR) {
            amountInEUR = eurAmount;
            amountInUSD = eurAmount / exchangeRate;
        } else {
            amountInUSD = eurAmount;
            amountInEUR = eurAmount * exchangeRate;
        }
    }

    void showCurrency() {
        cout << "Amount in US Dollars: " << amountInUSD << " USD" <<endl;
        cout << "Equivalent amount in Euros: " << amountInEUR << " EUR" <<endl;
    }

    operator double() {
        return amountInUSD;
    }
};

int main() {
    // Create a CurrencyConverter object with a given exchange rate and USD amount
    CurrencyConverter usdToEurConverter(0.85, 100.0);

    // Display the currency amounts
    cout << "Original Conversion (USD to EUR):\n";
    usdToEurConverter.showCurrency();

    // Convert from EUR to USD
    CurrencyConverter eurToUsdConverter(0.85, 85.0, true);

    // Display the currency amounts after the conversion
    cout << "\nConversion (EUR to USD):\n";
    eurToUsdConverter.showCurrency();

    // Convert a CurrencyConverter object to a double
    double amountInUSD = usdToEurConverter;
    cout << "\nAmount in USD: " << amountInUSD << " USD" <<endl;

    return 0;
}

