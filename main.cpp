#include <iostream>  
using namespace std;  
  
int main() {  
    int start_hour, start_minute, end_hour, end_minute;  
    int total_time, total_price;  
      
    // 輸入開始時間  
    cin >> start_hour >> start_minute;  
      
    // 輸入離開時間  
    cin >> end_hour >> end_minute;  
      
    // 計算停車時間 (單位：分鐘)  
    total_time = (end_hour*60+end_minute)-(start_hour*60+start_minute);  
      
    // 計算停車費用  
    if (total_time <= 120) {  // 2小時以內，每半小時30元  
        total_price = (total_time / 30) * 30;  
    } else if (total_time <= 240) {  // 2~4小時，每半小時40元  
        total_price = 120 + ((total_time - 120) / 30) * 40;  
    } else {  // 超過4小時，每半小時60元  
        total_price = 280 + ((total_time - 240) / 30) * 60;  
    }  
      
    // 輸出停車費用  
    cout << total_price<< endl;  
    return 0;  
}
