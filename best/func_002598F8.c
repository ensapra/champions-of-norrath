typedef struct { unsigned char b[0x60]; } Block;
typedef struct { unsigned char b[0x10]; } Tail;
void func_002598F8(void) {
    Block *dst = (Block*)0x007E0540;
    Block *src = (Block*)0x0081E240;
    *dst = *src;
    *(Tail*)((char*)dst+0x60)=*(Tail*)((char*)src+0x60);
}
