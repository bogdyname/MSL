#ifndef CRYPTOALGO_H
#define CRYPTOALGO_H

#include <cmath>
#include <iostream>
#include <algorithm>

class CryptoAlgo
{

    /*
        First seed is MIN of long long
        Second seed is MAX of long long
    */
public:
    explicit CryptoAlgo(const long long firstSeedValue = 0x8000000000000000, const long long secondSeedValue = 0x7FFFFFFFFFFFFFFF);
    ~CryptoAlgo();

//random
private:
    long long SelectFirstSeed(long long value = 1.0);
    long long SelectSecondSeed(long long value = 1.0);

//math
protected:
    bool MillerTest(const long long n);
    long long EulersTotientFunction(const long long x = 1.0);
    long long MakePublicKey(const long long value = 0x47867f);
    long long MakePrivateKey(const long long value = 0x76874f);

//algorithms
private:
    bool EncryptoRSA();
    bool DecryptoRSA();

private:
    long long firstSeed;
    long long secondSeed;
    long long publicKey;
    long long privateKey;
};

#endif
