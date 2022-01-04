void print_wday(int8 wday)
{
  lcd_gotoxy(6, 2);
  switch(wday)
  {
    case 0:  lcd_putc(" SUNDAY  ");   break;
    case 1:  lcd_putc(" MONDAY  ");   break;
    case 2:  lcd_putc(" TUESDAY ");   break;
    case 3:  lcd_putc("WEDNESDAY");   break;
    case 4:  lcd_putc("THURSDAY ");   break;
    case 5:  lcd_putc(" FRIDAY  ");   break;
    default: lcd_putc("SATURDAY ");
  }
 
}
