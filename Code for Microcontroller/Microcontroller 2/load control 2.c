#include<reg51.h>
 
sbit a=P1^0;
sbit b=P1^1;
sbit c=P1^2;
sbit d=P1^3;
sbit e=P1^4;
sbit f=P1^5;
sbit g=P1^6;
sbit h=P1^7;

sbit rs2=P2^5;
sbit rw2=P2^6;
sbit en2=P2^7;

sbit rs3=P2^0;
sbit rw3=P2^1;
sbit en3=P2^2;

void delay(unsigned int msec)
{
	int i,j;
	for(i=0;i<msec;i++)
	for(j=0;j<625;j++);
}

void lcd_cmd2(unsigned char item2)
{
	P3=item2;
	rs2=0;
	rw2=0;
	en2=1;
	delay(1);
	en2=0;
	return;
	}

void lcd_cmd3(unsigned char item3)
{
	P3=item3;
	rs3=0;
	rw3=0;
	en3=1;
	delay(1);
	en3=0;
	return;
	}

void lcd_data2(unsigned char item2)
{
	P3=item2;
	rs2=1;
	rw2=0;
	en2=1;
	 
	en2=0;
	return;
	}

void lcd_data3(unsigned char item3)
{
	P3=item3;
	rs3=1;
	rw3=0;
	en3=1;
	 
	en3=0;
	return;
	}

void lcd_data_string2(unsigned char *str2)
{
	int j=0;
	while(str2[j]!='\0')
	{
		lcd_data2(str2[j]);
		j++;
	}
return;
}

void lcd_data_string3(unsigned char *str3)
{
	int k=0;
	while(str3[k]!='\0')
	{
		lcd_data3(str3[k]);
		k++;
	}
return;
}

lcd_data_int2(int time_val2)
{
	int int_amt2;
	int_amt2=time_val2/10;
	lcd_data2(int_amt2 + 48);
	int_amt2=time_val2 % 10;
	lcd_data2(int_amt2 + 48);
}

lcd_data_int3(int time_val3)
{
	int int_amt3;
	int_amt3=time_val3/10;
	lcd_data3(int_amt3 + 48);
	int_amt3=time_val3 % 10;
	lcd_data3(int_amt3 + 48);
}

void lcd2(unsigned char str2[10])
{
	lcd_cmd2(0x38);
	lcd_cmd2(0x0e);
	lcd_data_string2(str2);
}

void lcd3(unsigned char str3[10])
{
	lcd_cmd3(0x38);
	lcd_cmd3(0x0e);
	lcd_data_string3(str3);
}


void main()
{
	
	while(1)
	{

	if (a==1 && b==1 && c==1 && d==1 && e==1 && f==1 && g==1 && h==1)
		
	{
		lcd_cmd2(0x80);
		lcd2("         CONNECTED LOAD STATUS          ");
		lcd_cmd2(0xc0);
		lcd2("      ALL OF THE NODES ARE ACTIVE       ");	
				
		{
		lcd_cmd3(0x80);
		lcd3("        DISCONNECTED LOAD STATUS        ");  
		lcd_cmd3(0xc0);
		lcd3("     NONE OF THE NODES ARE INACTIVE     ");
		}
	}
	
	else if (a==0 && b==1 && c==1 && d==1 && e==1 && f==1 && g==1 && h==1)
	{		
	
		lcd_cmd2(0x80);
		lcd2("         CONNECTED LOAD STATUS          ");
		lcd_cmd2(0xc0);
		lcd2("     NODE 1,2,3,4,5,6,7 ARE ACTIVE      ");	
				
		{
		lcd_cmd3(0x80);
		lcd3("        DISCONNECTED LOAD STATUS        ");  
		lcd_cmd3(0xc0);
		lcd3("           NODE 8 IS INACTIVE           ");
		}
		
	}
	
	else if (a==0 && b==0 && c==1 && d==1 && e==1 && f==1 && g==1 && h==1)
	{		
	
		lcd_cmd2(0x80);
		lcd2("         CONNECTED LOAD STATUS          ");
		lcd_cmd2(0xc0);
		lcd2("      NODE 1,2,3,4,5,6 ARE ACTIVE       ");	
				
		{
		lcd_cmd3(0x80);
		lcd3("        DISCONNECTED LOAD STATUS        ");  
		lcd_cmd3(0xc0);
		lcd3("         NODE 7,8 ARE INACTIVE          ");
		}
		
	}
	
	else if (a==0 && b==0 && c==0 && d==1 && e==1 && f==1 && g==1 && h==1)
	{		
	
		lcd_cmd2(0x80);
		lcd2("         CONNECTED LOAD STATUS          ");
		lcd_cmd2(0xc0);
		lcd2("       NODE 1,2,3,4,5 ARE ACTIVE        ");	
				
		{
		lcd_cmd3(0x80);
		lcd3("        DISCONNECTED LOAD STATUS        ");  
		lcd_cmd3(0xc0);
		lcd3("        NODE 6,7,8 ARE INACTIVE         ");
		}
		
	}
	
	else if (a==0 && b==0 && c==0 && d==0 && e==1 && f==1 && g==1 && h==1)
	{		
	
		lcd_cmd2(0x80);
		lcd2("         CONNECTED LOAD STATUS          ");
		lcd_cmd2(0xc0);
		lcd2("        NODE 1,2,3,4 ARE ACTIVE         ");	
				
		{
		lcd_cmd3(0x80);
		lcd3("        DISCONNECTED LOAD STATUS        ");  
		lcd_cmd3(0xc0);
		lcd3("       NODE 5,6,7,8 ARE INACTIVE        ");
		}
		
	}
	
		else if (a==0 && b==0 && c==0 && d==0 && e==0 && f==1 && g==1 && h==1)
	{		
	
		lcd_cmd2(0x80);
		lcd2("         CONNECTED LOAD STATUS          ");
		lcd_cmd2(0xc0);
		lcd2("         NODE 1,2,3 ARE ACTIVE          ");	
				
		{
		lcd_cmd3(0x80);
		lcd3("        DISCONNECTED LOAD STATUS        ");  
		lcd_cmd3(0xc0);
		lcd3("      NODE 4,5,6,7,8 ARE INACTIVE       ");
		}
		
	}
	
		else if (a==0 && b==0 && c==0 && d==0 && e==0 && f==0 && g==1 && h==1)
	{		
	
		lcd_cmd2(0x80);
		lcd2("         CONNECTED LOAD STATUS          ");
		lcd_cmd2(0xc0);
		lcd2("          NODE 1,2 ARE ACTIVE           ");	
				
		{
		lcd_cmd3(0x80);
		lcd3("        DISCONNECTED LOAD STATUS        ");  
		lcd_cmd3(0xc0);
		lcd3("     NODE 3,4,5,6,7,8 ARE INACTIVE      ");
		}
		
	}
	
	
		else if (a==0 && b==0 && c==0 && d==0 && e==0 && f==0 && g==0 && h==1)
	{		
	
		lcd_cmd2(0x80);
		lcd2("         CONNECTED LOAD STATUS          ");
		lcd_cmd2(0xc0);
		lcd2("           NODE 1 IS ACTIVE             ");	
				
		{
		lcd_cmd3(0x80);
		lcd3("        DISCONNECTED LOAD STATUS        ");  
		lcd_cmd3(0xc0);
		lcd3("    NODE 2,3,4,5,6,7,8 ARE INACTIVE     ");
		}
		
	}
	
		else if (a==0 && b==0 && c==0 && d==0 && e==0 && f==0 && g==0 && h==0)
		
	{
		lcd_cmd2(0x80);
		lcd2("         CONNECTED LOAD STATUS          ");
		lcd_cmd2(0xc0);
		lcd2("     NONE OF THE NODES ARE ACTIVE       ");	
				
		{
		lcd_cmd3(0x80);
		lcd3("        DISCONNECTED LOAD STATUS        ");  
		lcd_cmd3(0xc0);
		lcd3("     ALL OF THE NODES ARE INACTIVE      ");
		}
	}
	
	
}
}


 




