extern unsigned char func_01000000[];
extern void func_001048B8(void); extern void func_001048E0(void); extern void func_00104908(void); extern void func_00104930(void); extern void func_00104958(void); extern void func_00104980(void); extern void func_001049A8(void); extern void func_001049D0(void); extern void func_001049F8(void); extern void func_00104A20(void); extern void func_00104A48(void); extern void func_001047E0(void); extern void func_00104820(void); extern void func_00104868(void); extern void func_00104890(void); extern void func_00104170(void); extern void func_00104188(void); extern void func_001041A0(void); extern void func_001041B8(void);
void func_00102288(void) {
 volatile int *d=(volatile int *)(func_01000000+0x4BB00);
 d[0]=0; d[0x70/4]=(int)func_001048B8;
 d[0x0C/4]=(int)(func_01000000+0x4BD50); d[0x18/4]=(int)func_001041A0;
 d[0x90/4]=(int)func_001049F8; d[0x60/4]=(int)func_00104A48;
 d[0x8C/4]=(int)func_001049D0; d[0x10/4]=(int)func_00104170;
 d[0x5C/4]=(int)func_001047E0; d[0x64/4]=(int)func_00104820;
 d[0x68/4]=(int)func_00104868; d[0x6C/4]=(int)func_00104890;
 d[0x14/4]=(int)func_00104188; d[0x1C/4]=(int)func_001041B8;
 d[0x74/4]=(int)func_001048E0; d[0x78/4]=(int)func_00104908;
 d[0x7C/4]=(int)func_00104930; d[0x80/4]=(int)func_00104958;
 d[0x84/4]=(int)func_00104980; d[0x88/4]=(int)func_001049A8;
}
