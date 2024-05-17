# include<reg51.h>

	sbit Relay = P0^4;
	void main (void){
		char instr;
		TMOD = 0x20;
		TH1 = 0xFD;
		SCON = 0x50;
		TI = 0;
		RI = 0;
		TR1 = 1;
		
		while(1){
				while(RI == '0');
					instr = SBUF;
					RI = 0;
			
					if(instr == '1'){
						Relay = 1;
					}
					else if(instr == 0){
						Relay=0;
					}
			}
	}