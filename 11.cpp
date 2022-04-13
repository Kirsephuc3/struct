#include <iostream>
#include "gpg.h"
using namespace std;
int main() {
	GPG g;
	cout << g.geth() << " : " << g.getm() << " : " << g.gets() << endl;		
	g.set(20, 10, 3);
	cout << g.geth() << " : " << g.getm() << " : " << g.gets() << endl;
}