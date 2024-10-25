#include <iostream>
using namespace std;
usingned long long factorial(int n) {
	usingned long long fac=1;
	for (int i=0; i<=n; ++i) {
		fac*=i;
	}
	return fac;
}
int main() {
	int a, b, c, d;
	cin >>a, b, c, d ;
	usingned long long fac_a=factoria(a);
	usingned long long fac_b=factoria(b);
	usingned long long fac_c=factoria(c);
	usingned long long fac_d=factoria(d);
	//suma
	usingned long long sum_ab=factoria(a)+factoria(b);
	usingned long long sum_ac=factoria(a)+factoria(c);
	usingned long long sum_ad=factoria(a)+factoria(d);
	usingned long long sum_bc=factoria(b)+factoria(c);
	usingned long long sum_bd=factoria(b)+factoria(d);
	usingned long long sum_cd=factoria(c)+factoria(d);
	
	usingned long long max_sum=sum_ab;
	string max_p="a, b";
	 
	 if (sum_ac > max_sum) {
        max_sum = sum_ac;
        max_pair = "a, c";
    }

    if (sum_ad > max_sum) {
        max_sum = sum_ad;
        max_pair = "a, d";
    }

    if (sum_bc > max_sum) {
        max_sum = sum_bc;
        max_pair = "b, c";
    }

    if (sum_bd > max_sum) {
        max_sum = sum_bd;
        max_pair = "b, d";
    }

    if (sum_cd > max_sum) {
        max_sum = sum_cd;
        max_pair = "c, d";
    }

    cout <<  max_pair << endl;
    cout <<  max_sum << endl;

    return 0;
}
    


