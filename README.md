# unoDuck - Oficina da Semana de Recepção de 2019

### Carregando script

No linux execute o arduino script ``firmware_update`` no termina como superuser

    sudo ./firmware_update

Ele te dará as instruções do que fazer.

1. Conecte o arduino na porta usb e entre no modo DFU.
Para colocar o arduino uno em modo DFU basta conectar os dois pinos da imagem

    ![DFU MODE](https://raw.githubusercontent.com/hackerspaceIFUSP/unoducky/master/files/DFU_Pins.jpg)

2. Aperte ENTER e o firmware original será restaurado, para você poder carregar um código novo em sua placa.

3. Desconecte e reconecte o cabo usb do arduino pra sair do modo DFU.

4. Carrege o novo script usando o Arduino IDE.

5. Entre novamente no modo DFU para, como foi feito no passo 1.

6. O firmware do teclado será carregado. Desconecte o arduino e ele está pronto.

### Funções

    ALT(char *c);
    ALT_SPACE();
    ALT_F2();
    ALT_F4();

    CTRL(char *c);

    CTRL_ALT(char *c);
    CTRL_ALT_DEL();
    CTRL_ALT_ARROW(char *c);

    WINDOWS(char *c);

    KEY(uint8_t key);
    ENTER();
    TAB();
    PRINT();
    BACKSPACE();
    RIGHT_ARROW();
    LEFT_ARROW();
    DOWN_ARROW();
    UP_ARROW();

    STRING(char *txt);

### Teclas

    KEY_LEFT_CTRL	0x01
    KEY_LEFT_SHIFT	0x02
    KEY_LEFT_ALT    0x04
    KEY_LEFT_GUI    0x08
    KEY_RIGHT_CTRL	0x10
    KEY_RIGHT_SHIFT	0x20
    KEY_RIGHT_ALT   0x40
    KEY_RIGHT_GUI   0x80
    KEY_RIGHT_ARROW 0x4F
    KEY_LEFT_ARROW  0x50
    KEY_DOWN_ARROW  0x51
    KEY_UP_ARROW    0x52
    KEY_ESC         0x29
    KEY_F1          0x3A
    KEY_F2          0x3B
    KEY_F3          0x3C
    KEY_F4          0x3D
    KEY_F5          0x3E
    KEY_F6          0x3F
    KEY_F7          0x40
    KEY_F8          0x41
    KEY_F9          0x42
    KEY_F10         0x43
    KEY_F11         0x44
    KEY_F12         0x45
    KEY_PRTSCR      0x46
    KEY_SCRLK       0x47
    KEY_PAUSE       0x48
    KEY_DEL         0x4C
    KEY_INS         0x49
    KEY_END         0x4D
    KEY_HOME        0x4A
    KEY_PGDN        0x4E
    KEY_PGUP        0x4B
    KEY_BACKSPC     0x2A
    KEY_TAB         0x2B
    KEY_ENTER       0x28
    KEY_SPC         0x2C
    KEY_MUTE        0x7F
    KEY_VOL_UP      0x80
    KEY_VOL_DOWN    0x81
    KEY_NONE        0x37

### Demo Video

[![ALAHID YOUTUBE](http://img.youtube.com/vi/lx7X2CvQJdE/0.jpg)](https://www.youtube.com/watch?v=lx7X2CvQJdE)
