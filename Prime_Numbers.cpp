#include<iostream>
#include<fstream>
void prime_check1();
void sieve_of_eratosthenes2();
#define MAX 100000000
int main(){
	prime_check1();
	sieve_of_eratosthenes2();
	return 0;
}
void prime_check1(){
	//std::ofstream out("prime.txt");
	unsigned long a[MAX];
	memset(a, 1, MAX);
	for (unsigned long int i = 2; i < MAX; i++){
		if (a[i] == 0)
			continue;
		for (unsigned long int j = i + 1; j < MAX; j++){
			if (a[j] != 0 && j%i == 0)
				   a[j] = 0;
		}
	}
	for (unsigned long int i = 2; i < MAX; i++){
		if (a[i])
			std::cout << i << "\n";
		//out << i << "\n";
	}
	//out.close();
	
	
	getchar(); getchar();
}
void sieve_of_eratosthenes2(){
	bool* a;
	a = (bool*)malloc(MAX * sizeof(bool));
	memset(a, true, MAX);
	unsigned long int i = 1;
	while (i < MAX){
		
		while (((++i)<MAX)&&(!a[i]));
		
		if (2 * i >= MAX)
			goto m;
		
		for (unsigned long int k = 2 * i; k < MAX; k += i)
			if (a[k])
		    	a[k] = false;
	}
        m:
	
	for (unsigned long int i = 2; i < MAX; i++)
		if (a[i])
			std::cout << i << "\n";
	
	
	getchar(); getchar();
}
