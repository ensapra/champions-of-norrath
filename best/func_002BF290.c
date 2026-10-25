extern const f32 D_00483000, D_00483004, D_00483008, D_0048300C, D_00483010, D_00483014, D_00483018, D_0048301C, D_00483020; void func_00277D60(void *);
#define F(o) (*(volatile f32 *)((char *)arg0+(o)))
#define I(o) (*(volatile s32 *)((char *)arg0+(o)))
#define P(o) (*(void * volatile *)((char *)arg0+(o)))
void func_002BF290(void *arg0) {
f32 c120=120.0f;
F(0x374)=D_00483000; F(0x380)=250.0f; F(0x37C)=c120; F(0x378)=c120; func_00277D60(arg0);
{ f32 c50=50.0f,c1=1.0f,c45=45.0f,cD04=D_00483004,cD08=D_00483008,cD0C=D_0048300C; void *t1=(char *)arg0+0x918,*t2=(char *)arg0+0x928;
F(0x3AC)=c50; F(0x39C)=15.0f; F(0x398)=25.0f; I(0x414)=1;
F(0x358)=150.0f; F(0x360)=30.0f; F(0x364)=c45;
F(0x368)=D_00483010; F(0x36C)=D_00483014; F(0x370)=D_00483018; F(0x2FC)=D_0048301C;
F(0x3B0)=40.0f; F(0x3B4)=2.0f;
F(0x928)=cD04; F(0x92C)=cD08; F(0x930)=cD0C;
P(0x810)=t2; P(0x814)=t1;
F(0x3A0)=c50; F(0x3A4)=c50; F(0x3A8)=c50;
F(0x35C)=c45; F(0x918)=cD04; F(0x91C)=cD08; F(0x920)=cD0C;
F(0x924)=c1; F(0x934)=c1; P(0x808)=t1; P(0x80C)=t2;
F(0x38C)=c1; I(0x384)=0; I(0x388)=0; I(0x3E8)=0; F(0x390)=c1; F(0x394)=D_00483020; }}
