#include <iostream>
#include <string>
using namespace std;
struct Money
{
	long galleon;
	int sickle, kunt;
}pay, need;

int main() {
	string spay, sneed;
	cin >> sneed;
	cin >> spay;
	need.galleon = stoi(sneed.substr(0, sneed.find('.')));
	need.sickle = stoi(sneed.substr(sneed.find('.') + 1, sneed.find('.', sneed.find('.') + 1) - sneed.find('.') - 1));
	//cout << sneed.substr(sneed.rfind('.')) << endl;
	need.kunt = stoi(sneed.substr(sneed.rfind('.') + 1));

	pay.galleon = stoi(spay.substr(0, spay.find('.')));
	pay.sickle = stoi(spay.substr(spay.find('.') + 1, spay.find('.', spay.find('.') + 1) - spay.find('.') - 1));
	pay.kunt = stoi(spay.substr(spay.rfind('.') + 1));

	Money res;
	long sumn = need.galleon * 17 * 29 + need.sickle * 29 + need.kunt;
	long sump = pay.galleon * 17 * 29 + pay.sickle * 29 + pay.kunt;
	long sumr = sump - sumn;

	res.galleon = sumr / (17 * 29);
	res.sickle = (sumr % (17 * 29)) / 29;
	res.kunt = sumr % 29;

	if (sumr >= 0) {
		cout << res.galleon << "." << res.sickle << "." << res.kunt;
	}
	else
	{
		cout << "-" << -res.galleon << "." << -res.sickle << "." << -res.kunt;
	}
	//cout << "galleon = " << need.galleon << " sickle = " << need.sickle << " kunt = " << need.kunt;
}