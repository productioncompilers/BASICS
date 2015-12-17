#include<iostream>
#include<fstream>
#define MAX 1000000
int main(){
	std::ofstream out("prime.txt");
	bool a[MAX];
	memset(a, 1, MAX);
	int num = 0;
	for (int i = 2; i < MAX; i++){
		if (a[i] == 0)
			continue;
		for (int j = i + 1; j < MAX; j++){
		if (a[j] != 0 && j%i == 0)
			    a[j] = 0;
		}
	}
	for (int i = 2; i < MAX; i++){
		if (a[i])
			std::cout << i << "\n";
			out << i << "\n";
	}
	out.close();
	getchar(); getchar();
	return 0;
}
