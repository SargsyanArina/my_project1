#include<iostream>

int main() {

    double currentEl = 0;
    bool uniqueEl = true;
    const int n = 3;
    const int m = 4;
    double array[n][m];

    std::cout << "Enter the elements of array: \n";
      for(int i = 0; i < n; ++i) {
          for(int j = 0; j < m; ++j) {
              std::cin >> array[i][j];
        }
    }
    
    std::cout << "Unique numbers are: \n";

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            currentEl = array[i][j];
            uniqueEl = true;

     for(int k = 0; k < n; k++) {
        for(int l = 0; l < m; l++) {
             if((i != k || j != l) && array[k][l] == currentEl) {
                uniqueEl = false;
                    break;
    }
}
     if(!uniqueEl) {
        break;
    }
}
    if(uniqueEl) {
         std::cout << currentEl << " ";
       }    
    }   
 }

    std::cout << std::endl;  
        
    return 0;
}








