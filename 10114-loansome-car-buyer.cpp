/* Problem 10114 - Loansome Car Buyer */
#include <iostream>
using namespace std;

int main() {
  /* input:
   * 1 line:
   *   m: number of months for loan
	 *   d: down payment
	 *   a: amount of the loan
	 *   r: number of deprecation records
	 * r lines:
   *   mi: month index
   *   rvi: value of deprecation
	 */
   
  int m, r;
  float d, a;
	 
  cin >> m >> d >> a >> r;
  while(m > 0) {
    bool solved = false;
    double car_value = d + a;
    double monthly_pay = a / m;
    
    int mi, count_mi;
    double rvi, prev_rvi;
    count_mi = 0;
    for(int ri=0; ri<r; ri++) {
      cin >> mi >> rvi;
      
      while(mi >= count_mi && !solved) {
        if(mi == count_mi)
          prev_rvi = rvi;
        
        car_value -= car_value * prev_rvi;
        
        if(car_value > a)
          solved = true;
        else {
          count_mi++;
          a -= monthly_pay;
        }
      }
    }
    
    while(!solved) {
      car_value -= car_value * prev_rvi;
      
      if(car_value > a)
        solved = true;
      else {
        count_mi++;
        a -= monthly_pay;
      }
    }
    
    cout << count_mi << " month" << (count_mi != 1 ? "s\n" : "\n");
    cin >> m >> d >> a >> r;
  }
  
  return 0;
}