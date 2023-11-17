sbit RS=P2^0;
sbit RW=P2^1;
sbit EN=P2^2;
sbit Busy=P0^7;
sfr LCD_PORT=0x80;

sbit rd=P3^0;
sbit wr=P3^2;
sbit INTR=P3^3;
sfr ADC_PORT=0x90;
