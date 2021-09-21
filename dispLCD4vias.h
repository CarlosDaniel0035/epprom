#ifndef DISPLCD4VIAS_H
#define DISPLCD4VIAS_H

void initLCD( void );
void intTOstr( int ui16, char * str );
void lcd( unsigned char x, unsigned char y, const char * ptr );
void lcdxy( unsigned char x, unsigned char y );
void dispLCD_clr (void);
/*
 * **************** Funções de acesso aos botões da placa do display LCD
 */
char lcdb0( void );
char lcdb1( void );


#endif	/* LCD_H */
