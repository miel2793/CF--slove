#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int pi[100];  // Array to store the volume fractions of orange juice
    for(int i = 0; i < n; i++) {
        cin >> pi[i];
    }
    
    double sum = 0.0;
    for(int i = 0; i < n; i++) {
        sum += pi[i];
    }
    
    double average = sum / n;
    
    cout.precision(12); // Set the precision to handle very small errors
    cout << fixed << average << endl;
    
    return 0;
}
