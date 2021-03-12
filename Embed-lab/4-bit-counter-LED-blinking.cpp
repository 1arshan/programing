#include<P89V51RX2.H>
	
void delay(unsigned int del)
{
	unsigned int i,j;
	for(i=0;i<1000;i++)
		for(j=0;j<del;j++);
}

void main()
{
	int i;
	while(1)
	{
		RxD=0;
		TxD=0;
		INT0=0;
		INT1=0;
		delay(2000);
		
		for(i=1;i<16;i++)
		{
			int m = i;
			RxD = (m&1);
			m = (m>>1);
			TxD = (m&1);
			m = (m>>1);
			INT0 = (m&1);
			m = (m>>1);
			INT1 = (m&1);
			delay(5000);
		}
	}
	
}