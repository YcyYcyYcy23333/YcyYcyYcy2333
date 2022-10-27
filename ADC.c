ADC

unsigned char store_value;
int adc_value,volts,detail;

setup();
loop;
lcd_title();
do_adc();
do_LEDs();

main()
    setup();
    lcd_title();
    
    while (if SW1 not pressed);
    
for(;;)
    loop();
    
    __delay_ms( );
    
    
    
setup()
    Lcd8_Init();
    TRISB=?
    TRISA=?
    TRISC=?
    ADCON0=?
    ADCON1=?
    
loop()
………………


do_adc()
    __delay_us( );
    GO_nDONE=1;     //Start ADC conversion
    while(GO_nDONE)continue;	//Wait until conversion finishes
    
    …………自己写如何判断
    
    adc_value = ADRESH;
    volts=??转换的公式   //Divide adc value by 51 to convert to volts
    detail=??显示在屏幕上小数点后面的数字
    Lcd8_Clear();
    …………
    sprintf(outString,"  %d.%d volts",volts, detail);
    
    
    
    store_value=ADRESH;













