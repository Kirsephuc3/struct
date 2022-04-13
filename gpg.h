#include <iostream>
using namespace std;
class GPG {
private:
	int h, m, s;
public:
	GPG() {
		h = m = s = 0;
	};
	~GPG() {};
	void set(int a, int b, int c);
	int geth();
	int getm();
	int gets();
	int seconds, hours, minutes;
	GPG KC(GPG g1, GPG g2); // doi tat ca ra giay
};
void GPG::set(int a, int b, int c) {
	h = a;
	m = b;
	s = c;
}
int GPG::geth() {
	return h;
}
int GPG::getm() {
	return m;
}
int GPG::gets() {
	return s;
}
