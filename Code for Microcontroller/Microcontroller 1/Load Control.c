#include<reg51.h>
 
sbit a=P1^0;
sbit b=P1^1;
sbit c=P1^2;
sbit d=P1^3;
sbit e=P1^4;
sbit f=P1^5;
sbit g=P1^6;
sbit h=P1^7;


sbit k=P0^0;
sbit l=P0^1;
sbit m=P0^2;
sbit n=P0^3;
sbit o=P0^4;
sbit p=P0^5;
sbit q=P0^6;
sbit r=P0^7;
 
sbit rs=P2^0;
sbit rw=P2^1;
sbit en=P2^2;



void delay(unsigned int msec)
{
	int i,j;
	for(i=0;i<msec;i++)
	for(j=0;j<625;j++);
}

void lcd_cmd(unsigned char item)
{
	P3=item;
	rs=0;
	rw=0;
	en=1;
	delay(1);
	en=0;
	return;
	}


void lcd_data(unsigned char item)
{
	P3=item;
	rs=1;
	rw=0;
	en=1;
 
	en=0;
	return;
	}




void lcd_data_string(unsigned char *str)
{
	int i=0;
	while(str[i]!='\0')
	{
		lcd_data(str[i]);
		i++;
	}		
return;
}


lcd_data_int(int time_val)
{
	int int_amt;
	int_amt=time_val/10;
	lcd_data(int_amt + 48);
	int_amt=time_val % 10;
	lcd_data(int_amt + 48);
}


void lcd(unsigned char str1[10])
{
	lcd_cmd(0x38);
	lcd_cmd(0x0e); 
	lcd_data_string(str1);
}



void main()
{
	
	while(1)
	{

	if (a==1 && b==1 && c==1 && d==1 && e==1 && f==1 && g==1 && h==1 )
		
	{
		
		k=1;
		l=1;
		m=1;
		n=1;
		o=1;
		p=1;
		q=1;
		r=1;
			
		lcd_cmd(0x80);
		lcd(" POWER GRID COMPANY OF BANGLADESH (PGCB) ");
		lcd_cmd(0xc0);
		lcd("       LOAD AREA SECTION 1 STATUS        ");
	}
	
		
	
	else if (a==0 && b==1 && c==1 && d==1 && e==1 && f==1 && g==1 && h==1)
	{
		k=1;
		l=1;
		m=1;
		n=1;
		o=1;
		p=1;
		q=1;
		r=0;
				
		lcd_cmd(0x80);
		lcd(" POWER GRID COMPANY OF BANGLADESH (PGCB) ");
		lcd_cmd(0xc0);
		lcd("       LOAD AREA SECTION 1 STATUS        ");
	}
	
		
	
	else if (a==0 && b==0 && c==1 && d==1 && e==1 && f==1 && g==1 && h==1)
	{
		k=1;
		l=1;
		m=1;
		n=1;
		o=1;
		p=1;
		q=0;
		r=0;
			
		lcd_cmd(0x80);
		lcd(" POWER GRID COMPANY OF BANGLADESH (PGCB) ");
		lcd_cmd(0xc0);
		lcd("       LOAD AREA SECTION 1 STATUS        ");
	
		
		
	}
	
	else if (a==0 && b==0 && c==0 && d==1 && e==1 && f==1 && g==1 && h==1)
	{
			
		k=1;
		l=1;
		m=1;
		n=1;
		o=1;
		p=0;
		q=0;
		r=0;
				
		lcd_cmd(0x80);
		lcd(" POWER GRID COMPANY OF BANGLADESH (PGCB) ");
		lcd_cmd(0xc0);
		lcd("       LOAD AREA SECTION 1 STATUS        ");
	
	
		
	}
	
	else if (a==0 && b==0 && c==0 && d==0 && e==1 && f==1 && g==1 && h==1)
	{
		k=1;
		l=1;
		m=1;
		n=1;
		o=0;
		p=0;
		q=0;
		r=0;
		
		lcd_cmd(0x80);
		lcd(" POWER GRID COMPANY OF BANGLADESH (PGCB) ");
		lcd_cmd(0xc0);
		lcd("       LOAD AREA SECTION 1 STATUS        ");
	
	
		
	}
	
	else if (a==0 && b==0 && c==0 && d==0 && e==0 && f==1 && g==1 && h==1)
	{
			
		k=1;
		l=1;
		m=1;
		n=0;
		o=0;
		p=0;
		q=0;
		r=0;
		
		lcd_cmd(0x80);
		lcd(" POWER GRID COMPANY OF BANGLADESH (PGCB) ");
		lcd_cmd(0xc0);
		lcd("       LOAD AREA SECTION 1 STATUS        ");
	
	
	}
	
	else if (a==0 && b==0 && c==0 && d==0 && e==0 && f==0 && g==1 && h==1)
	{
			
		k=1;
		l=1;
		m=0;
		n=0;
		o=0;
		p=0;
		q=0;
		r=0;
				
		lcd_cmd(0x80);
		lcd(" POWER GRID COMPANY OF BANGLADESH (PGCB) ");
		lcd_cmd(0xc0);
		lcd("       LOAD AREA SECTION 1 STATUS        ");
	
	
		
	}
	
	else if (a==0 && b==0 && c==0 && d==0 && e==0 && f==0 && g==0 && h==1)
	{
			
		k=1;
		l=0;
		m=0;
		n=0;
		o=0;
		p=0;
		q=0;
		r=0;
		
		lcd_cmd(0x80);
		lcd(" POWER GRID COMPANY OF BANGLADESH (PGCB) ");
		lcd_cmd(0xc0);
		lcd("       LOAD AREA SECTION 1 STATUS        ");
	
	}
	
	else if (a==0 && b==0 && c==0 && d==0 && e==0 && f==0 && g==0 && h==0)
	{
			
		k=0;
		l=0;
		m=0;
		n=0;
		o=0;
		p=0;
		q=0;
		r=0;
		
		lcd_cmd(0x80);
		lcd(" POWER GRID COMPANY OF BANGLADESH (PGCB) ");
		lcd_cmd(0xc0);
		lcd("       LOAD AREA SECTION 1 STATUS        ");
	
	}
}
}
