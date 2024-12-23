#include <iostream>

using namespace std;

bool czyPierwsza(int n) {
        if (n < 2) return false;
        for (int i = 2; i * i <= n; ++i) {
                if (n % i == 0) return false;
        }
        return true;
}

int main() {
        int n;
        cin >> n;
	if (n <= 0) {
		cout << "podana liczba nie jest dodatnia" << endl;
		return 1;
	}
	cout << "wczytana liczba to: " << n << endl;
        if (czyPierwsza(n)) {
                cout << "wczytana liczba jest pierwsza" << endl;
        }       else {
                cout << "wczytana liczba nie jest pierwsza" << endl;
        }


        return 0;
}

