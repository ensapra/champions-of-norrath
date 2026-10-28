typedef struct { s32 *p; } Q;
typedef struct { u8 pad[0x5570]; Q *q; u8 pad2[0x5DB0-0x5574]; } R;
typedef struct { u8 pad[0x530]; s32 v; } V;
s32 func_00135438(s32);s32 func_001C7890(s8,s32);s32 func_0017FF18(void);s32 func_001B1358(s32);s32 func_001C8008(void);s32 func_0025B560(void);s32 func_001BBB48(void);void func_00277B88(s32,s32);
extern R D_00408600[];
extern s32 D_0042A3E8[];
s8 D_00483829;s32 D_00484F44;
void func_001D0900(s32 a){
    if(D_00483829){
        s32 r=func_00135438(0);
        func_001C7890((s8)r,0);
        func_0017FF18();func_001B1358(0);func_001C8008();func_0025B560();func_001BBB48();
        if(!a){
            s32 n=D_00484F44,i=0;
            if(n>0){
                R *base=D_00408600;
                s32 *p=D_0042A3E8;
                do{
                    s32 v=((V*)base[*p++].q)->v;
                    if(v)func_00277B88(v,D_00484F44);
                    i++;
                }while(i<D_00484F44);
            }
        }
    }
}
