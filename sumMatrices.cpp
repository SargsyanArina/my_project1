#include<iostream>

int main() {
	
    const int n = 3;
    int arr1[n][n];
    int arr2[n][n];
    int sumMatrix[n][n];


  std::cout << "Enter the elements of first array: \n";  
     for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            std::cin >> arr1[i][j];
    }
}
     std::cout << std::endl; 


    std::cout << "Enter the elements of second array: \n";
  
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            std::cin >> arr2[i][j];
    }
}
    std::cout << std::endl;
    

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            sumMatrix[i][j] = arr1[i][j] + arr2[i][j];
    }
}

    std::cout << "The sum of two matrix is: " << std::endl;
        for(int i = 0; i < n; ++i) {
            for(int j = 0; j < n; ++j) {
                std::cout << sumMatrix[i][j] << " ";
    }
    
    std::cout << std::endl;
}

    return 0;
}
