#include <iostream>
using namespace std;

class CurrencyBDT {
private:
    int taka;
    int poisha;

public:
    CurrencyBDT() : taka(0), poisha(0) {}

    CurrencyBDT(int takaAmount, int poishaAmount) : taka(takaAmount), poisha(poishaAmount) {}

    int getTaka() const {
        return taka;
    }

    int getPoisha() const {
        return poisha;
    }
};

class CurrencyDollar {
private:
    int dollars;
    int cents;

public:
    CurrencyDollar() : dollars(0), cents(0) {}

    CurrencyDollar(int dollarAmount, int centAmount) : dollars(dollarAmount), cents(centAmount) {}

    CurrencyBDT toBDT() const {
        double conversionRate = 0.0091;
        double amountInBDT = (dollars * 100 + cents) / conversionRate;
        int takaAmount = static_cast<int>(amountInBDT);
        int poishaAmount = static_cast<int>((amountInBDT - takaAmount) * 100);
        return CurrencyBDT(takaAmount, poishaAmount);
    }
};

class CurrencyEuro {
private:
    int euros;
    int cents;

public:
    CurrencyEuro() : euros(0), cents(0) {}

    CurrencyEuro(int euroAmount, int centAmount) : euros(euroAmount), cents(centAmount) {}

    CurrencyBDT toBDT() const {
        double conversionRate = 0.0085;
        double amountInBDT = (euros * 100 + cents) / conversionRate;
        int takaAmount = static_cast<int>(amountInBDT);
        int poishaAmount = static_cast<int>((amountInBDT - takaAmount) * 100);
        return CurrencyBDT(takaAmount, poishaAmount);
    }
};

int main() {
    // Convert USD to BDT
    CurrencyDollar usdAmount(11, 44);
    CurrencyBDT bdtAmountFromUSD = usdAmount.toBDT();

    cout << "USD to BDT Conversion:\n";
    cout << "Amount in USD: " << usdAmount.dollars << " dollars " << usdAmount.cents << " cents\n";
    cout << "Equivalent amount in BDT: " << bdtAmountFromUSD.getTaka() << " taka " << bdtAmountFromUSD.getPoisha() << " poisha\n\n";

    // Convert Euro to BDT
    CurrencyEuro euroAmount(10, 50);
    CurrencyBDT bdtAmountFromEuro = euroAmount.toBDT();

    cout << "Euro to BDT Conversion:\n";
    cout << "Amount in Euro: " << euroAmount.euros << " euros " << euroAmount.cents << " cents\n";
    cout << "Equivalent amount in BDT: " << bdtAmountFromEuro.getTaka() << " taka " << bdtAmountFromEuro.getPoisha() << " poisha\n";

    return 0;
}

