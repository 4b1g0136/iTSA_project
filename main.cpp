#include <iostream>  
using namespace std;  
  
int main() {  
    int start_hour, start_minute, end_hour, end_minute;  
    int total_time, total_price;  
      
    // ��J�}�l�ɶ�  
    cin >> start_hour >> start_minute;  
      
    // ��J���}�ɶ�  
    cin >> end_hour >> end_minute;  
      
    // �p�ⰱ���ɶ� (���G����)  
    total_time = (end_hour*60+end_minute)-(start_hour*60+start_minute);  
      
    // �p�ⰱ���O��  
    if (total_time <= 120) {  // 2�p�ɥH���A�C�b�p��30��  
        total_price = (total_time / 30) * 30;  
    } else if (total_time <= 240) {  // 2~4�p�ɡA�C�b�p��40��  
        total_price = 120 + ((total_time - 120) / 30) * 40;  
    } else {  // �W�L4�p�ɡA�C�b�p��60��  
        total_price = 280 + ((total_time - 240) / 30) * 60;  
    }  
      
    // ��X�����O��  
    cout << total_price<< endl;  
    return 0;  
}
