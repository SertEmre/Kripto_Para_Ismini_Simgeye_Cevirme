#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAKS_ISIM_UZUNLUGU 20

// Kripto para isim ve simgeleri
const char *kripto_paralar[][2] = {
    {"Bitcoin", "BTC"},
    {"Ethereum", "ETH"},
    {"Ripple", "XRP"},
    {"Litecoin", "LTC"},
    {"Cardano", "ADA"},
    {"Polkadot", "DOT"},
    {"Chainlink", "LINK"},
    {"Binance Coin", "BNB"},
    {"Tether", "USDT"},
    {"Dogecoin", "DOGE"},
    {"Uniswap", "UNI"},
    {"Bitcoin Cash", "BCH"},
    {"Stellar", "XLM"},
    {"Monero", "XMR"},
    {"VeChain", "VET"},
    {"Tron", "TRX"},
    {"EOS", "EOS"},
    {"IOTA", "IOT"},
    {"Tezos", "XTZ"},
    {"NEO", "NEO"},
    {"Dash", "DASH"},
    {"Zcash", "ZEC"},
    {"Qtum", "QTUM"},
    {"OMG Network", "OMG"},
    {"Cosmos", "ATOM"},
    {"Filecoin", "FIL"},
    {"Algorand", "ALGO"},
    {"Avalanche", "AVAX"},
    {"Shiba Inu", "SHIB"},
    {"Hedera", "HBAR"},
    {"Chiliz", "CHZ"},
    {"Aave", "AAVE"},
    {"SushiSwap", "SUSHI"},
    {"Kusama", "KSM"},
    {"Compound", "COMP"},
    {"Yearn Finance", "YFI"},
    {"Maker", "MKR"},
    {"Celo", "CELO"},
    {"Synthetix", "SNX"},
    {"Basic Attention Token", "BAT"},
    {"Decentraland", "MANA"},
    {"Enjin Coin", "ENJ"},
    {"Paxos Standard", "PAX"},
    {"TrueUSD", "TUSD"},
    {"Dai", "DAI"},
    {"Tether Gold", "XAUT"},
    {"1inch", "1INCH"},
    {"Ren", "REN"},
    {"Zilliqa", "ZIL"},
    {"Stellar Lumens", "XLM"},
    {"Waves", "WAVES"},
    {"Hegic", "HEGIC"},
    {"Thorchain", "RUNE"},
    {"PancakeSwap", "CAKE"},
    {"Loopring", "LRC"},
    {"Theta Token", "THETA"},
    {"Bitcoin SV", "BSV"},
    {"Holo", "HOT"},
    {"Ravencoin", "RVN"},
    {"Horizen", "ZEN"},
    {"Storj", "STORJ"},
    {"Wanchain", "WAN"},
    {"Fantom", "FTM"},
    {"ApeCoin", "APE"},
    {"Kava", "KAVA"},
    {"Audius", "AUDIO"},
    {"Keep3rV1", "KP3R"},
    {"Pundi X", "PUNDIX"},
    {"NEM", "XEM"},
    {"Perpetual Protocol", "PERP"},
    {"Kleros", "PNK"},
    {"Serum", "SRM"},
    {"Hegic", "HEGIC"},
    {"Mithril", "MITH"},
    {"Arweave", "AR"},
    {"Loopring", "LRC"},
    {"The Graph", "GRT"},
    {"Bancor", "BNT"},
    {"Kyber Network", "KNC"},
    {"Balancer", "BAL"},
    {"Band Protocol", "BAND"},
    {"Keep3rV1", "KP3R"},
    {"Power Ledger", "POWR"},
    {"Telcoin", "TEL"},
    {"SKALE", "SKL"},
    {"Nucleus Vision", "nCash"},
    {"Ocean Protocol", "OCEAN"},
    {"Celo Dollar", "cUSD"},
    {"Mithril", "MITH"},
    {"Zilliqa", "ZIL"},
    {"IoTeX", "IOTX"},
    {"Enjin Coin", "ENJ"},
    {"Render Token", "RNDR"},
    {"Injective Protocol", "INJ"},
    {"Dapper Labs", "Dapper"},
    {"Paxos Gold", "PAXG"},
    {"Injective", "INJ"},
    {"YFI", "YFI"},
    {"The Graph", "GRT"},
    {"Celo Dollar", "cUSD"},
    {"REN", "REN"},
    {"Hegic", "HEGIC"},
    {"Immutable X", "IMX"},
    {"Lido", "LDO"},
    {"Celo", "CELO"}
};

// Giriþi küçük harfe dönüþtür
void kucuk_harfe_donustur(char str[]) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    char kullanici_girdisi[MAKS_ISIM_UZUNLUGU];

    printf("Kripto para ismini girin (Orneginb: Bitcoin): ");
    scanf("%s", kullanici_girdisi);

    kucuk_harfe_donustur(kullanici_girdisi);  // Kullanýcýnýn giriþini küçük harfe dönüþtür

    int bulundu = 0;
    for (int i = 0; i < 100; i++) {
        // Kripto para ismini küçük harfe dönüþtür
        char kripto_isim[MAKS_ISIM_UZUNLUGU];
        strcpy(kripto_isim, kripto_paralar[i][0]);
        kucuk_harfe_donustur(kripto_isim);

        // Giriþin ve kripto isminin karþýlaþtýrýlmasý
        if (strstr(kripto_isim, kullanici_girdisi) != NULL) {
            printf("%s için simge: %s\n", kripto_paralar[i][0], kripto_paralar[i][1]);
            bulundu = 1;
            break;
        }
    }

    if (!bulundu) {
        printf("Bilinmeyen kripto para ismi girdiniz.\n");
    }

    return 0;
}
