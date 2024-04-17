#include<iostream>

int main() {
    
    double temp = 0;
    const int n = 3;
    double array[n][n];

    std::cout << "Enter the elements of array: \n";

	for(int i = 0; i < n; ++i) {	
		for(int j = 0; j < n; ++j) {
			std::cin >> array[i][j];
	}
}


	for (int i = 0; i < n; ++i) {
          for (int j = i + 1; j < n; ++j) {
             temp = array[i][j];
             array[i][j] = array[j][i];
             array[j][i] = temp;
        }
    }

	for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            std::cout << array[i][j] << " ";
	}
	
    std::cout << std::endl;
}
	   
	return 0;
}


