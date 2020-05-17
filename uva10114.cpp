#include <iostream>
#include <cstdlib>

int main(void) {
    int month_count = 0, record_count = 0; 
    float downPayment = 0., loanAmount = 0.;
    while(scanf("%d %f %f %d", &month_count, &downPayment, &loanAmount, &record_count) && month_count > -1) {
    	
    	int record_1[record_count] = {0};
        float record_2[record_count] = {0.};
    	for(int i = 0; i < record_count; i++) {
    		std::cin >> record_1[i] >> record_2[i];
		}
		float durationPrice = (downPayment + loanAmount);
		float oweAmount = loanAmount;
		float durationRate[month_count + 1] = {0.};
		int month_tag = 0;
		float rate = 0.;
		
		
		for(int i = 0, k = 0; i < month_count + 1; i++) {
			if(k < record_count) 
				month_tag = record_1[k];
					
			if(month_tag == i) {
				rate = record_2[k++];
			}
			durationRate[i] = rate; 
		}
		for(int i = 0; i < month_count + 1; i++) {
			durationPrice *= (1 - durationRate[i]);
			if(i > 0)
				oweAmount -= (loanAmount / month_count);
			if(oweAmount < durationPrice) {
				if(i == 1)
					std::cout << i << " month" << std::endl;
				else
					std::cout << i << " months" << std::endl;
				break;
	     	}
		}
		
	}
	system("pause");
	return 0;
}
