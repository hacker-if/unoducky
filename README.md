# unoDuck - Oficina da Semana de Recepção de 2019


### Carregando script

No linux execute o arduino ``script`` no termina como superuser
	
	sudo ./script

Ele te dará as instruções do que fazer.

1. Conecte o arduino na porta usb e entre no modo DFU.	
Para colocar o arduino uno em modo DFU basta conectar os dois pinos 
![DFU MODE](https://raw.githubusercontent.com/rennancockles/alahid/master/files/DFU_Pins.jpeg)

2. Aperte ENTER e o firmware original será restaurado, para pode carregar um código novo em sua placa.

3. Desconecte e reconecte o cabo usb do arduino pra sair do modo DFU.

4. Carrege o novo script usando o Arduino IDE.

5. Entre novamente no modo DFU para, como foi feito no passo 1.

6. O firmware do teclado será carregado. Desconecte o arduino e ele está pronto.

### Referência
	
	STRING(char *txt);
	ALT(char *c);
	ALT_SPACE();
	ALT_F2();
	ALT_F4();

	CTRL_ALT(char *c);
	CTRL_ALT_DEL();
	CTRL_ALT_ARROW(char *c);

	WINDOWS(char *c);

	ENTER();
	TAB();
	PRINT();
	BACKSPACE();
	RIGHT_ARROW();
	LEFT_ARROW();
	DOWN_ARROW();
	UP_ARROW();
     


### Demo Video
[![ALAHID YOUTUBE](http://img.youtube.com/vi/lx7X2CvQJdE/0.jpg)](https://www.youtube.com/watch?v=lx7X2CvQJdE)

